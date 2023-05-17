#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int value;
  struct Node * next;
}Node;



Node * insert(int value, Node* next);
void recursivePrint(Node * r);
void reverseList(Node * r);

int main()
{
  Node n;
  Node * n1 = insert(1,NULL);
  Node * n2 = insert(2,n1);
  Node * n3 = insert(3,n2);
  Node * n4 = insert(4,n3);
  
  Node * add = n4;
  while(add != NULL)
  {
    printf("%p = %i\n", add, add -> value);
    add = add->next;
  }
  
  //reverseList(n4);
  
  recursivePrint(n4);
  
  free(n1);
  free(n2);
  free(n3);
  free(n4);
  
  return 0;
}


void recursivePrint(Node * r)
{
  printf("Rekurzivně %p = %i\n", r, r->value);
  if(r->next != NULL)
  {
      recursivePrint(r->next);
  }
}

void reverseList(Node * r)
{
  Node * tmp;
  if(tmp->next != NULL)
  {
      tmp = insert(r->value, tmp);
      tmp->next;
  }
}

Node * insert(int value, Node* next)
{
  Node * node = malloc(sizeof(int));
  node -> next = next;
  node -> value = value; 
  return node;
}
