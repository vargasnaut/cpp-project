#include  <iostream>
#include  <string> // Include sting library

// custon namespace for math utilities
namespace MathUtils {
    // Function to add two numbers
    int add(int a, int b) {
        return a + b;
    }

    // Function to subtract two numbers
    int subtract(int a, int b) {
        return a - b;
    }
}

// Another custom namespace for string utilities
namespace StringUtils {
    void printGreeting(const std::string& name) {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
}

int main() {
    // using the MathUtils namespace
    int x = 10;
    int y = 5;
    std::cout << "Sum: " << MathUtils::add(x, y) << std::endl;
    std::cout << "subtract: " << MathUtils::subtract(x, y) << std::endl;

    // using the StringUtils namespace
    StringUtils::printGreeting("Leo");

    return 0;
}