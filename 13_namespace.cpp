#include <iostream>
namespace asif {
    int add(int a, int b) {
        return a + b;
    }
}
int main() {
    int a;
    std::cout <<"Total:"<< asif::add(5, 10) << std::endl;
    return 0;
}


