#include "Document.h"

using std::ofstream;
using std::string;

Document::Document(const string& title, const string& body) :
  _titleText(title), _bodyText(body)
{
}

void Document::save(const std::string& filename)
{
  ofstream out(filename.c_str());

  this->outputHeader(out);
  this->outputBody(out);
  this->outputFooter(out);

  out.close();
}

