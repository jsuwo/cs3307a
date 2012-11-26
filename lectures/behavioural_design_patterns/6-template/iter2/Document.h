#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <fstream>
#include <string>

class OutputFormat;

class Document
{
  public:
    Document(const std::string&, const std::string&);
    void save(const std::string&, OutputFormat*);
    const std::string& title() const;
    const std::string& body() const;

  private:
    std::string _titleText;
    std::string _bodyText;
};

#endif
