#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
  node *p = l; // a pointer of type node to point at the next "next" element
  int i = 0;

  while (p->next != NULL) { //stops counting if next is NULL
    p = p->next; //updates p to be a pointer to next element 
    i++; //counts size, includes first element but not last, which gives the correct size
  }

    return i;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next; // creates a pointer p that points to the first not empty element 
   
    while (p!=NULL){ // will print all data including the last element 
      printf("%d, ",p->data); // prints data in element 
      p = p->next; // updates pointer p to point to next element 
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
    return -1; 
}

