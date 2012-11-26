#include "HtmlFormat.h"
#include "TextFormat.h"
#include "Document.h"

main()
{
  Document doc("My title here", "Hello world");

  doc.save("test.html", new HtmlFormat);
  doc.save("test.txt", new TextFormat);
}

