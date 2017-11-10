// Some basic input/output with variables.
#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter first name: ";
    
    // This has to be one-liner-able
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;

}
