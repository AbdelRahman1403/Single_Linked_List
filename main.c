#include "Single_lin.h"
node *head = NULL;
int main(){
    int x[10] = {11 , 22 , 33 , 44 , 55 , 66 , 77 , 88 , 99 , 100};
    head = create_single_list(*(x+0));
    insert_at_beginning(&head , *(x+1));
    insert_at_beginning(&head , *(x+2));
    insert_at_beginning(&head , *(x+3));
    display_single_linked_list(head);
    printf("\n====================\n");

    insert_at_tail(&head , *(x+4));
    insert_at_tail(&head , *(x+5));
    insert_at_tail(&head , *(x+6));
    display_single_linked_list(head);
    return 0;
}
