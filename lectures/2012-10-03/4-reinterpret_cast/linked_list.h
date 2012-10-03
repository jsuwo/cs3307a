#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
  void* data;
  struct node* next;
} node_t;

node_t* add_to_list(node_t*, void*);

#endif
