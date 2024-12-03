#include <iostream>
#include "../FuncA.h"

int main() {
    int x = 5, y = 10;
    std::cout << "Sum: " << add(x, y) << std::endl;

    if (isEven(x)) {
        std::cout << x << " is even." << std::endl;
    } else {
        std::cout << x << " is odd." << std::endl;
    }

    return 0;
}

