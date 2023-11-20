#include"doubly_linked_list.h"


doubly_linked_list *create() {
    doubly_linked_list *header = (doubly_linked_list *)malloc(sizeof(doubly_linked_list));
    header->next = header->prev = NULL;
    return header;
}

void traverse(doubly_linked_list *header) {
    doubly_linked_list *pointer = header->next;

    printf("[");

    // while pointer != NULL
    while (pointer) {
        printf("%s  ", pointer->string);
        pointer = pointer->next;
    }
    printf("]\n");
}

void insert(doubly_linked_list *header, char *item) {
    doubly_linked_list *new_node = create();
    char *string = (char *)malloc(strlen(item) + 1);
    strcpy(string, item);
    new_node->string = string;

    if (header->next) {
        header->next->prev = new_node;
    }

    new_node->next = header->next;
    new_node->prev = header;

    header->next = new_node;
}

bool find(doubly_linked_list *header,char *item) {
    header = header->next;
    while (header) {
        if (!strcmp(header->string, item))
            return true;
        header = header->next;
    }
    return false;
}