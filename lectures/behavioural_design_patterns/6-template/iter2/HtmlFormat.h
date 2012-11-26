#ifndef HTML_FORMAT_H
#define HTML_FORMAT_H

#include <fstream>
#include "OutputFormat.h"

class Document;

class HtmlFormat : public OutputFormat
{
  protected:
    virtual void outputHeader(Document*, std::ofstream&);
    virtual void outputBody(Document*, std::ofstream&);
    virtual void outputFooter(Document*, std::ofstream&);
};

#endif
