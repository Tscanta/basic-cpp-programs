#include <iostream>
#include <ctime>
int main() {
    int num;
    int range;

    srand(time(NULL));

    std::cout << " Enter the range for the random number generator: ";
    std::cin >> range;

    while (range <= 0) {
        std::cout << " Enter the range for the random number generator: ";
        std::cin >> range;
    }
    num = (rand() % range) + 1 ;

    std::cout << "Your random number is: " << num;

    return 0;
}