#ifndef OUTPUT_FORMAT_H
#define OUTPUT_FORMAT_H

#include <fstream>
class Document;

class OutputFormat
{
  public:
    void save(Document*, std::ofstream&);

  protected:
    virtual void outputHeader(Document*, std::ofstream&) = 0;
    virtual void outputBody(Document*, std::ofstream&) = 0;
    virtual void outputFooter(Document*, std::ofstream&) = 0;
};

#endif

