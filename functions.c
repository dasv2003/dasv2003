#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void CreateList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;

    for(i=1; i<n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }
        printf("Enter the data of node %d: ", i+1);
        scanf("%d", &data);
        newNode->data = data;// priskiriam nuskaitytus duomenis į newNode duomenis
        newNode->next = NULL;//
        temp->next = newNode;// susieti praeitą node į nextNode
        temp = temp->next;// Make current node as previous node
    }
}

void ModifyList()
{
    struct node *temp ,*temp2;
    temp = head;
    while(temp->next != NULL)
    {
        if(temp->data == temp->next->data)
        {
            temp2=temp->next;
            temp->next=temp->next->next;
            free(temp2);//atminties atlaisvinimui
        }
        else
        {
            temp=temp->next;
        }
    }
}

void PrintList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
        return 1;
    }
    printf("\nData in the list: \n");

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}
