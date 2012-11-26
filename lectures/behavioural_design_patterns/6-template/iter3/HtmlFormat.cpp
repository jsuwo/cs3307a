#include <iostream>
#include <fstream>
#include "HtmlFormat.h"
#include "Document.h"

using std::endl;
using std::ofstream;
using std::string;

OutputFormat* HtmlFormat::_instance = NULL;

HtmlFormat::HtmlFormat()
{
}

OutputFormat* HtmlFormat::instance()
{
  if (_instance == NULL)
    _instance = new HtmlFormat;

  return _instance;
}

void HtmlFormat::outputHeader(Document* doc, ofstream& out)
{
  out << "<html>" << endl;
  out << "\t<head>" << endl;
  out << "\t\t<title>" << doc->title() << "</title>" << endl;
  out << "\t</head>" << endl;
}

void HtmlFormat::outputBody(Document* doc, ofstream& out)
{
  out << "\t<body>" << endl;
  out << "\t\t" << doc->body() << endl;
  out << "\t</body>" << endl;
}

void HtmlFormat::outputFooter(Document* doc, ofstream& out)
{
  out << "</html>" << endl;
}
