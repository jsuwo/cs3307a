#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include "List.h"
#include "PrintableList.h"
#include "VerboseList.h"
#include "ArrayListImpl.h"
#include "SetListImpl.h"

using std::cout;
using std::endl;
using std::setfill;
using std::setw;
using std::string;

void testList(List<int>* list, int* values)
{
  for (int i = 0; i < 6; ++i)
    list->add(values[i]);

  cout << endl << "* List size: " << list->size() << endl;
  list->print();

  cout << endl << "* Removing " << list->get(4) << endl;
  list->remove(list->get(4));

  cout << endl << "* List size: " << list->size() << endl;
  list->print();
}

void printHeader(const string& header)
{
  cout << endl << setw(80) << setfill('=') << "=" << endl;
  cout << header << endl;
  cout << setw(80) << setfill('=') << "=" << endl << endl;
}

main()
{
  int values[6];
  srand(time(NULL));

  cout << "Test data: " << endl;
  // Generating test data -- we will use the same data for all lists
  for (int i = 0; i < 5; ++i)
  {
    values[i] = rand() % 100;
    cout << values[i] << endl;
  }

  values[5] = values[4];
  cout << values[5] << endl << endl;

  List<int>* list = new List<int>(new ArrayListImpl<int>());
  printHeader("Testing regular list with array implementation");
  testList(list, values);

  delete list;

  list = new List<int>(new SetListImpl<int>());
  printHeader("Testing regular list with set implementation");
  testList(list, values);

  delete list;

  list = new PrintableList<int>(new ArrayListImpl<int>());
  printHeader("Testing printable list with array implementation");
  testList(list, values);

  delete list;

  list = new PrintableList<int>(new SetListImpl<int>());
  printHeader("Testing printable list with set implementation");
  testList(list, values);

  delete list;

  list = new VerboseList<int>(new ArrayListImpl<int>());
  printHeader("Testing verbose list with array implementation");
  testList(list, values);

  delete list;

  list = new VerboseList<int>(new SetListImpl<int>());
  printHeader("Testing verbose list with set implementation");
  testList(list, values);

  delete list;
}
