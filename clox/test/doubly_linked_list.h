#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
 
struct doubly_linked_list {
    struct doubly_linked_list *prev;
    struct doubly_linked_list *next;
    char *string;
};

typedef struct doubly_linked_list doubly_linked_list;


doubly_linked_list *create();

void traverse(doubly_linked_list *header);

void insert(doubly_linked_list *header, char *item);

bool find(doubly_linked_list *header,char *item);

#endif
