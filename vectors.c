#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct Node
{
  int value;
  struct Node * next;
}Node;

Node * insert(int value, Node* next);

int soucin(Node * n1, Node * n2)
{
  
  int result = 0;
  
  result += n1->value * n2->value;
  if(n1->next != NULL)
  {
    result += soucin(n1->next, n2->next);
  }
  return result;
}

int main()
{
  Node * n1 = insert(1,NULL);
  Node * n2 = insert(2,n1);
  
  Node * n3 = insert(3,NULL);
  Node * n4 = insert(4,n3);
  
  printf("%i\n", soucin(n2, n4));
  return 0;
}

/*
int soucin(Node * vektor, ...)
{
  int result;
  va_list n;
  va_list n_next;
  va_start(n, num);
  va_start(n_next, num+1);
  for (int i = 0; i < num; i+2) {
      result += va_arg(n, Node *)->value * va_arg(n_next, Node *)->value;
  }
  va_end(n_next);
  va_end(n);
  
  return result ;
}
*/

Node * insert(int value, Node* next)
{
  Node * node = malloc(sizeof(int));
  node -> next = next;
  node -> value = value; 
  return node;
}
