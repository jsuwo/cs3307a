#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <fstream>
#include <string>

class Document
{
  public:
    Document(const std::string&, const std::string&);
    void save(const std::string& filename);

  protected:
    virtual void outputHeader(std::ofstream&) = 0;
    virtual void outputBody(std::ofstream&) = 0;
    virtual void outputFooter(std::ofstream&) = 0;

    std::string _titleText;
    std::string _bodyText;
};

#endif
