#include <iostream>

int main() {

    // Exercise 4 - Independent copies

    int apples = 10;
    int oranges = apples;

    oranges = oranges + 5;
    apples = apples + 2;

    std::cout << apples << std::endl;
    std::cout << oranges << std::endl;

    return 0;

}
