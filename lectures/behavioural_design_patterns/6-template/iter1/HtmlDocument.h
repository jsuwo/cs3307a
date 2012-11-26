#ifndef HTML_DOCUMENT_H
#define HTML_DOCUMENT_H

#include <fstream>
#include <string>
#include "Document.h"

class HtmlDocument : public Document
{
  public:
    HtmlDocument(const std::string&, const std::string&);

  protected:
    virtual void outputHeader(std::ofstream&);
    virtual void outputBody(std::ofstream&);
    virtual void outputFooter(std::ofstream&);
};

#endif
