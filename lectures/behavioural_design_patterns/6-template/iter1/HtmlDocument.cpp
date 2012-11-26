#include <iostream>
#include <fstream>
#include "HtmlDocument.h"

using std::endl;
using std::ofstream;
using std::string;

HtmlDocument::HtmlDocument(const string& title, const string& body) : Document(title, body)
{
}

void HtmlDocument::outputHeader(ofstream& out)
{
  out << "<html>" << endl;
  out << "\t<head>" << endl;
  out << "\t\t<title>" << this->_titleText << "</title>" << endl;
  out << "\t</head>" << endl;
}

void HtmlDocument::outputBody(ofstream& out)
{
  out << "\t<body>" << endl;
  out << "\t\t" << this->_bodyText << endl;
  out << "\t</body>" << endl;
}

void HtmlDocument::outputFooter(ofstream& out)
{
  out << "</html>" << endl;
}
