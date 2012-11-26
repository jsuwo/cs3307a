#include "OutputFormat.h"
#include "Document.h"

using std::ofstream;

// template method
void OutputFormat::save(Document* doc, ofstream& out)
{
  this->outputHeader(doc, out);
  this->outputBody(doc, out);
  this->outputFooter(doc, out);
}

