#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *l = *head;
    while (l->next != NULL && l->next->next != NULL)
        l = l->next;
    t_list *l1 = l->next;
    free(l1);
    l->next = NULL;
}

/*t_list *mx_create_node(void *data);
void mx_push_back(t_list **list, void *data);
#include <stdio.h>
int main() {
    t_list *list = mx_create_node("xyz");
    mx_push_back(&list, "lol");
    printf("%s\n", (char*)list->data);
    printf("%s\n", (char*)list->next->data);
    mx_pop_back(&list);
    //printf("%s\n", (char*)list->next->data);
    printf("%s\n", (char*)list->next);
}*/
