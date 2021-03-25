#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *insert_node(node *head, int val)
{
    node *ptr = (node*)malloc(1*sizeof(node));
    ptr->data = val;
    ptr->next = head;
    head = ptr;
    return head;
}

node *fwd_insert_node(node *curr,int val)
{
    node *ncurr = (node*)malloc(sizeof(node));
    ncurr->data = val;
    ncurr->next = NULL;
    curr->next = ncurr;
    return ncurr;
}

void traverse_ll(node *head)
{
    node *curr = head;
    while(curr != NULL)
    {
        
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("\n");
    return;
}

void search(node *head, int val)
{
    node *curr = head;
    while(curr!=NULL) 
    {
        if(curr->data == val) 
        {
            printf("%The value %d is in the linked list",val);
            return;
        }else
        {
            curr=curr->next;
        }
    }
    printf("The value %d is not in the linked list or the list is empty",val);
}

int main()
{
    node *head = NULL;
    int val;
    scanf("%d",&val);
    head = insert_node(head,val);
    scanf("%d",&val);
    node *curr = head;
    while(val!=-1)
    {
        curr = fwd_insert_node(curr,val);
        scanf("%d",&val);
    }
    traverse_ll(head);
    int del;
    scanf("%d",&del);
    search(head, del);
    return 0;
}