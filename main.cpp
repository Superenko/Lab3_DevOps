#include <iostream>
#include "FuncA.h"

int CreateHTTPserver();
int main() {
    FuncA func;
    int n = 5;
    std::cout << "FuncA result: " << func.calculate(n) << std::endl;
    CreateHTTPserver();
    return 0;
}

