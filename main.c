//
//  main.c
//  linked-list-reverse
//
//  Created by Fedor Sergeev on 04.10.2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "listreverse.h"

list_t * create_list(int value) {
    list_t * node = (list_t *) malloc(sizeof(list_t));
    node->next = NULL;
    node->value = value;
    return node;
}

list_t * reverse(list_t * element) {
    list_t * current = element;
    list_t * last = element;
    list_t * result = NULL;
    
    while (current != NULL) {
        last = current->next;
        current->next = result;
        result = current;
        current = last;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    
    list_t * head = create_list(1);
    list_t * second = create_list(2);
    list_t * third = create_list(3);
    
    head->next = second;
    second->next = third;
    
    
    list_t * result = reverse(head);
    assert(3 == result->value);
    assert(2 == result->next->value);
    assert(1 == result->next->next->value);
    assert(result->next->next->next == NULL);
    
    printf("List reverse ran successfully\n");
    return 0;
}
