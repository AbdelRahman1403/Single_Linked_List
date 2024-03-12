#ifndef SINLGE_LIN_H
#define SINLGE_LIN_H
/**
    @Author :      AbdelRahman Ahmed Mohamed Yassin.
    @file :        Single_lin.h
    @Description : in this file , the declaration of string.h functions.
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node node;

struct node{
    int data;
    node *next;
};

node *create_single_list(int *value);
void insert_at_beginning(node **head , int *value);
void insert_at_tail(node **head , int *value);
void reverse_single_list(node **head);

void display_single_linked_list(node *head);
#endif // SINLGE_LIN_H
