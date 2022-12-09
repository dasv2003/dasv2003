#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
struct node
{
    int data;
    struct node *next;
}*head;

void CreateList(int n);
void ModifyList();
void PrintList();

#endif // LINKEDLIST_H_INCLUDED
