#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int data, struct Node* next)
{
    struct Node* newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=next;
    return newnode;
}

int main()
{
  struct Node* third = createNode(15,NULL);
  struct Node* second = createNode(10,third);
  struct Node* first = createNode(5,second);
  
  struct Node* head= first;
  struct Node* ptr=head;
  while(ptr!=NULL)
  {
    printf("%d\n",ptr->data);
    ptr= ptr->next;
  }
}
