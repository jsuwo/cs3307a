#include <QList>
#include <QMutableListIterator>
#include <QDebug>

int main()
{
  QList<int> list;

  list << 27 << 33 << 61 << 62;

  // Java-style iterator
  QMutableListIterator<int> javaIter( list );

  while (javaIter.hasNext())
  {
    int value = javaIter.next() + 1;
    javaIter.setValue( value );
    qDebug() << value;
  }

  // STL-style iterator
  QList<int>::Iterator stlIter;

  for (stlIter = list.begin(); stlIter != list.end(); ++stlIter)
  {
    (*stlIter) = (*stlIter)*2;
    qDebug() << (*stlIter);
  }
}
