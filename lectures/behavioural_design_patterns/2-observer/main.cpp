#include "SpreadsheetCell.h"
#include "Graph.h"

main()
{
  SpreadsheetCell* cell = new SpreadsheetCell;

  Graph* g1 = new Graph("Line");
  Graph* g2 = new Graph("Bar");
  Graph* g3 = new Graph("Pie");

  cell->attach(g1);
  cell->attach(g2);
  cell->attach(g3);

  cell->value(4);
}
