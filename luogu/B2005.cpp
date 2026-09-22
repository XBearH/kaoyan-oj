#include <iostream>

//You may ask  me why I don't use for loop here.Maybe you are right.But I think it's not a good idea to use for loop here.

int main(){
    char ch;
    std::cin >> ch;
    std::cout << "  " << ch << std::endl;
    std::cout << " " << ch << ch << ch << std::endl;
    std::cout << ch << ch << ch << ch << ch << std::endl;
    return 0;
}