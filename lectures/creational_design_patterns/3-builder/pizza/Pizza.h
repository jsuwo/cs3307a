#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
#include <vector>

// Product

class Pizza
{
  public:
    void setName(const std::string& name);
    void setDough(const std::string& dough);
    void setSauce(const std::string& sauce);
    void addTopping(const std::string& topping);

    friend std::ostream& operator<<(std::ostream& out, const Pizza& pizza);
 
  private:
    std::string _name;
    std::string _dough;
    std::string _sauce;
    std::vector<std::string> _toppings;
};

#endif
