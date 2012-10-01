#include <iostream>

using std::cout;
using std::endl;

void output(const char* data) {
        cout << data << endl;
}

void output(int data) {
        cout << data << endl;
}

main() {
        output(1 + 1);
        output("hello");
}
