#ifndef TEXT_DOCUMENT_H
#define TEXT_DOCUMENT_H

#include <fstream>
#include <string>
#include "Document.h"

class TextDocument : public Document
{
  public:
    TextDocument(const std::string&, const std::string&);

  protected:
    virtual void outputHeader(std::ofstream&);
    virtual void outputBody(std::ofstream&);
    virtual void outputFooter(std::ofstream&);
};

#endif
