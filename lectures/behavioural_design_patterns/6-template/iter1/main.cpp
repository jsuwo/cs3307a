#include "HtmlDocument.h"
#include "TextDocument.h"

main()
{
  HtmlDocument doc1("My title here", "Hello world");
  TextDocument doc2("My title here", "Hello world");

  doc1.save("test.html");
  doc2.save("test.txt");
}

