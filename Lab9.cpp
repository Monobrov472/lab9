#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world! How are you?";
    std::string підрядок = "world";

    // Знаходження останнього входження "світ" в рядку
    size_t позиція = str.rfind(підрядок);

    if (позиція != std::string::npos) {
        std::cout << "Last entry \"" << підрядок << "\" found in position: " << позиція << std::endl;
    }
    else {
        std::cout << "No substring found." << std::endl;
    }

    return 0;
}
