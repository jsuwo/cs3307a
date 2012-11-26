#include "HtmlFormat.h"
#include "TextFormat.h"
#include "Document.h"

main()
{
  Document doc("My title here", "Hello world");

  doc.save("test.html", HtmlFormat::instance());
  doc.save("test.txt",  TextFormat::instance());
}

