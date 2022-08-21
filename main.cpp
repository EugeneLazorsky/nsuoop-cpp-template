
#include "task.h"
#include <iostream>

int main(int argc, const char** argv) {
    task::say_hello();
    const int x = 2;
    const int y = 3;
    std::cout << x << " + " << y << " = " << task::plus(x, y) << "\n";
    return 0;
}
