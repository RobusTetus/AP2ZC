/**
* @author Robin Tetour
* @brief simple application to calculate size of vector
**/
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>

/**
* @brief structure representing element in our linked list
* @param value actual value to store
* @param next pointer to next element in list
**/
typedef struct Node
{
  int value;
  struct Node * next;
}Node;

Node * insert(int value, Node* next);
int v_sqsum(Node * n);
Node * v_sq(Node * n);
int v_list(Node * n);
int v_sum(Node * n);
double v_size(Node * n);

/**
* @param n1 last element in linked list
* @param n2 first element in linked list
**/
int main()
{
  Node * n1 = insert(5,NULL);
  Node * n2 = insert(2,n1);
  
  assert(v_sqsum(n2) == 29);
  assert(v_sum(n2) == 7);
  assert(v_size(n2) == sqrt(29));
  assert(v_list(n2) == 0);
  
  printf("\n");
  printf("Velikost vektoru činí %f\n", v_size(n2));
  printf("Součet vektoru je %d\n", v_sum(n2));
  printf("Součet všech prvků na druhou je %d\n", v_sqsum(n2));
  printf("Výpis vektoru : ");
  v_list(n2);
  printf("\n");
  free(n1);
  free(n2);
  return 0;
}

/**
* @brief return size of vector
* @param n first element in linked list
* @param result resulting value
**/
double v_size(Node * n)
{
  double result = 0;
  result = sqrt(v_sum(v_sq(n)));
  return result;
}

/**
* @brief recursively return sum of squared values of vector
* @param n first element in linked list
* @param result resulting value
**/
int v_sqsum(Node * n)
{
  int result = 0;
  
  result += (n->value)*(n->value);
  if(n->next != NULL)
  {
    result += v_sqsum(n->next);
  }
  return result;
}

/**
* @brief recursively return sum of vector elements
* @param n first element in linked list
* @param result resulting value
**/
int v_sum(Node * n)
{
  int result = 0;
  result += n->value;
  if(n->next != NULL)
  {
    result += v_sum(n->next);
  }
  return result;
}

/**
* @brief print out linked list values recursively
* @param n first element in linked list
**/
int v_list(Node * n)
{
  printf("%d ", n->value);
  if(n->next != NULL)
  {
    v_list(n->next);
  }
  return 0;
}

/**
* @brief recursively return squared values of vector in linked list
* @param n first element in linked list
* @param r squared linked list
* @param result first value of resulting linked list
**/
Node * v_sq(Node * n)
{
  if(n == NULL)
  {
    return NULL;
  }
  Node * r = insert((n->value)*(n->value), v_sq(n->next));
  return r;
}

/**
* @brief create a new linked list element
* @param value assigned value of the element
* @param next element to be in linked list next in line
* @param node resulting struct object
**/
Node * insert(int value, Node* next)
{
  Node * node = malloc(sizeof(int));
  node -> next = next;
  node -> value = value; 
  return node;
}
