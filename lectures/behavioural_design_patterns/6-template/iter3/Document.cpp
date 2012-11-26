#include "Document.h"
#include "OutputFormat.h"

using std::ofstream;
using std::string;

Document::Document(const string& title, const string& body) :
  _titleText(title), _bodyText(body)
{
}

void Document::save(const std::string& filename, OutputFormat* format)
{
  ofstream out(filename.c_str());
  format->save(this, out);
  out.close();
}

const std::string& Document::title() const
{
  return this->_titleText;
}

const std::string& Document::body() const
{
  return this->_bodyText;
}
