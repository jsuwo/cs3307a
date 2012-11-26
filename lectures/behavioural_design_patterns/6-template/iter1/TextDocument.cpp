#include <iomanip>
#include <iostream>
#include <fstream>
#include "TextDocument.h"

using std::endl;
using std::setfill;
using std::setw;
using std::ofstream;
using std::string;

TextDocument::TextDocument(const string& title, const string& body) : Document(title, body)
{
}

void TextDocument::outputHeader(ofstream& out)
{
  out << setw(80) << setfill('=') << '=' << endl;
  out << this->_titleText << endl;
  out << setw(80) << setfill('=') << '=' << endl << endl;
}

void TextDocument::outputBody(ofstream& out)
{
  out << this->_bodyText << endl;
}

void TextDocument::outputFooter(ofstream& out)
{
  out << endl << setw(80) << setfill('=') << '=' << endl;
  out << "END OF DOCUMENT" << endl;
  out << setw(80) << setfill('=') << '=' << endl;
}
