// QList and constant iterators

#include <QList>
#include <QListIterator>
#include <QDebug>

int main()
{
  QList<int> list;
  list << 23 << 27 << 52 << 52;
  
  // Java-style iterators
  QListIterator<int> javaIter(list);

  while (javaIter.hasNext())
    qDebug() << javaIter.next();

  // STL-style iterators (more efficient)
  QList<int>::const_iterator stlIter;

  for (stlIter = list.begin(); stlIter != list.end(); ++stlIter)
    qDebug() << (*stlIter);

  return 0;
}
