//
//  listreverse.h
//  linked-list-reverse
//
//  Created by Fedor Sergeev on 29.11.2021.
//

#ifndef listreverse_h
#define listreverse_h

typedef struct list {
    int value;
    struct list* next;
} list_t;

list_t * reverse(list_t * element);

#endif /* listreverse_h */
