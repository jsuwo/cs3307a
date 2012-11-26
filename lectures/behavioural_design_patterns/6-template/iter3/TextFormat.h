#ifndef TEXT_FORMAT_H
#define TEXT_FORMAT_H

#include <fstream>
#include "OutputFormat.h"

class Document;

class TextFormat : public OutputFormat
{
  public:
    static OutputFormat* instance();

  protected:
    TextFormat();
    virtual void outputHeader(Document*, std::ofstream&);
    virtual void outputBody(Document*, std::ofstream&);
    virtual void outputFooter(Document*, std::ofstream&);

    static OutputFormat* _instance;
};

#endif

