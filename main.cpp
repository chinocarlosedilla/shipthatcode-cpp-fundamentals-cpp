#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string language;

    // TODO: read name, then language, from std::cin
    std::cin >> name >> language;

    // TODO: print the two greeting lines with std::cout
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << name << " is learning " << language << "." << std::endl;

    return 0;
}
