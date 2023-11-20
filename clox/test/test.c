#include "doubly_linked_list.h"


int main(int argc, char const *argv[])
{
    doubly_linked_list *header = create();
    insert(header, "world");
    insert(header, "hello");
    if (find(header, "world")) {
        printf("found you!\n");
    }

    if (find(header, "!")) {
        printf("found you!\n");
    }
    traverse(header);
    return 0;
}
