//
// Created by Eric Zhu on 9/10/19.
//
#ifndef MOVIELIST_LINKEDLIST_H
#define MOVIELIST_LINKEDLIST_H

#endif //MOVIELIST_LINKEDLIST_H

#define MAX_STR_LEN 20

typedef struct NodeStruct{
    char data_string[MAX_STR_LEN];
    struct NodeStruct *next;
} Node;
