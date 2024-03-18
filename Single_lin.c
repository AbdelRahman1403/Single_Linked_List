#include "Single_lin.h"
/**
    @Author :      AbdelRahman Ahmed Mohamed Yassin.
    @file :        Single_lin.h
    @Description : in this file , the definition of string.h functions.
*/

node *create_single_list(int *value){
    node *head = (node*)malloc(sizeof(node));
    head->data = value;
    head->next = NULL;
    return head;
}

void
insert_at_beginning(node **head , int *value){
    if(*head == NULL){
        *head = create_single_list(value);
    }
    else {
        node *temp = (node*)malloc(sizeof(node));
        temp->data = value;
        temp->next = *head;
        *head = temp;
    }
}

void insert_at_tail(node **head , int *value){
    node *temp = (node*)malloc(sizeof(node));
    node *last = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    if(*head == NULL){
        printf("\aError , there is not elements in list , please add elements\n");
        *head = create_single_list(value);
    }
    else{
        last = *head;
    while(last->next != NULL){
        last = last->next;
        }
    last->next = temp;
    }

}

void
rotate_list(node **head , int k){
    if(k == 0)
        return;
    node *curr = *head;
    int counter = 1;

    while(curr != NULL && counter < k){
        counter++;
        curr = curr->next;
    }

    if(curr == NULL)
        return;

    node *tail = curr;
    while(tail->next != NULL){
        tail = tail->next;
    }

    tail->next = *head;
    *head = curr->next;
    curr->next = NULL;


}
void
reverse_single_list(node **head){
    node *prev = NULL , *next_t = NULL , *curr = NULL;
    curr = next_t = *head;

    if(curr->next != NULL){

     while(curr != NULL){
        next_t = next_t->next;
        curr->next = prev;
        prev = curr;
        curr = next_t;
     }
     *head = prev;
    }
    else{
        printf("\aError , there is only one element in list.\nPlease add elements to do reverse process\n");
    }
}

void find_from_end(node *head , int val){
    if(head == NULL)
        return;
    node *temp = head;
    int size = 1;
    while(temp->next != NULL){
        temp = temp->next;
        size++;
    }
    if(val > size)
        return ;

    int counter = 0;
    temp = head;
    while(counter < size && temp != NULL){
        if(counter == size - val ){
            printf("The value is :%i \n" , temp->data);
            break;
        }
        counter++;
        temp = temp->next;
    }
}

void
display_single_linked_list(node *head){
    node *temp = (node*)malloc(sizeof(node));
    temp = head;
    int i = 0;
    while(temp != NULL){
        printf("The index number [%i] is : %i\n" , i ,temp->data);
        temp = temp->next;
        ++i;
    }
}
