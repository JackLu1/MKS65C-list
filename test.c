#include <stdio.h>
#include <stdlib.h>
#include "link.h"


int main(){
    struct node * head = malloc(sizeof(struct node));
    head->a = 1234;
    head->next = 0;

    print_list(head);
    printf("nice\n");

    free(head);
    return 0;
}
