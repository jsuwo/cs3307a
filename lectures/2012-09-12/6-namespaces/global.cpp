#include <iostream>

using std::cout;
using std::endl;

void say_hello() {

  cout << "hello world" << endl;

}

namespace UWO {

  void say_hello() {

    cout << "Good afternoon and " << endl;
    ::say_hello(); 

    // what would happen if we removed the :: in front of say_hello() above?
    // if unsure, try it, type 'make', and run the resulting 'global' executable.

  }
}

main() {

  say_hello();

  UWO::say_hello();

}
