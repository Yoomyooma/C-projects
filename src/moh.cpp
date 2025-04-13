#include <iostream>
#include <cstring>

void vulnerableFunction() {
    char buffer[10]; // Small buffer
    
    std::cout << "Enter input: ";
    std::cin >> buffer; // No bounds checking - dangerous!
    
    std::cout << "Buffer content: " << buffer << std::endl;
}

int main() {
    vulnerableFunction();
    return 0;
}
