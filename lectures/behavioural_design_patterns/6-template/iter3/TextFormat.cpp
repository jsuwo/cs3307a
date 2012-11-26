#include <iomanip>
#include <iostream>
#include <fstream>
#include "TextFormat.h"
#include "Document.h"

using std::endl;
using std::setfill;
using std::setw;
using std::ofstream;
using std::string;

OutputFormat* TextFormat::_instance = NULL;

TextFormat::TextFormat()
{
}

OutputFormat* TextFormat::instance()
{
  if (_instance == NULL)
    _instance = new TextFormat;

  return _instance;
}

void TextFormat::outputHeader(Document* doc, ofstream& out)
{
  out << setw(80) << setfill('=') << '=' << endl;
  out << doc->title() << endl;
  out << setw(80) << setfill('=') << '=' << endl << endl;
}

void TextFormat::outputBody(Document* doc, ofstream& out)
{
  out << doc->body() << endl;
}

void TextFormat::outputFooter(Document* doc, ofstream& out)
{
  out << endl << setw(80) << setfill('=') << '=' << endl;
  out << "END OF DOCUMENT" << endl;
  out << setw(80) << setfill('=') << '=' << endl;
}
