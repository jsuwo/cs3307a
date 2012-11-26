#include <QMap>
#include <QDebug>

int main()
{
  QMap<QString, float> prices;

  prices["milk"] = 3.99;
  prices["eggs"] = 2.49;
  prices["soup"] = 0.99;

  qDebug() << "The price of milk is " << prices["milk"] << endl;

  return 0;
}
