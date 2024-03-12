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
    last = *head;
    while(last->next != NULL){
        last = last->next;
    }
    last->next = temp;
}
void
reverse_single_list(node **head){
    *head = *head->next;
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
