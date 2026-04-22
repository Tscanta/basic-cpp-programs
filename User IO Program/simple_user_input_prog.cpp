#include <iostream>
int main() {
    std::string name;
    int age;

    std::cout<<"Whats your full name?";
    std::getline(std::cin,name);
    std::cout<<"How old are you?";
    std::cin>>age;

    std::cout<<"is you name "<<name<<"? and are you "<<age<<" years old";
    return 0;
}