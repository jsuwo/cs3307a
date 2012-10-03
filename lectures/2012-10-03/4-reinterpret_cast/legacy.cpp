#include <iostream>
#include <string>

extern "C" {
  #include "linked_list.h"
}

using std::cout;
using std::endl;
using std::string;

void print_list(node_t* head)
{
  node_t* cur = head;

  while (cur != NULL)
  {
    string* s = reinterpret_cast<string*>(cur->data);
    cout << *s << endl;
    cur = cur->next;
  }
}

main()
{
  string* s1 = new string("Hello");
  string* s2 = new string("World");

  node_t* head = add_to_list(NULL, s1);
  add_to_list(head, s2);

  print_list(head);
}
