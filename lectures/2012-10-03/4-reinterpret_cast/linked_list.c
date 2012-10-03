#include "stdlib.h"
#include "linked_list.h"

node_t* add_to_list(node_t* list, void* data)
{
  node_t* node = (node_t*)malloc(sizeof(node_t));
  node->data = data;
  node->next = NULL;

  node_t* cur = list;

  // If this is a new list, return the new head
  if (list == NULL)
    return node;

  // Otherwise, add the node to the end of the list
  while (cur->next != NULL)
     cur = cur->next;

  cur->next = node;

  return node;
}

