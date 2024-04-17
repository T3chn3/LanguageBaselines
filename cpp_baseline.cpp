#include <iostream>
#include <vector>
#include <string>

// Global variable definition (0x01)
int globalExample = 100; 

// Function definition (0x02)
void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    // Local variable definition (0x03)
    int localExample = 5; 

    // Printing to console using std::cout (0x04)
    std::cout << "Hello, World!" << std::endl;

    // Calling a function (0x05)
    printMessage("This is a function call.");

    // Using a conditional (if-else) statement (0x06)
    if (localExample > 10) {
        std::cout << "Local example is greater than 10." << std::endl;
    } else {
        std::cout << "Local example is not greater than 10." << std::endl;
    }

    // For loop example (0x07)
    for (int i = 0; i < localExample; i++) {
        std::cout << "Loop iteration " << i << std::endl;
    }

    // While loop example (0x08)
    int whileCounter = 0;
    while (whileCounter < localExample) {
        std::cout << "While loop iteration " << whileCounter << std::endl;
        whileCounter++;
    }

    // Do-while loop example (0x09)
    do {
        std::cout << "Do-While loop iteration " << whileCounter << std::endl;
        whileCounter--;
    } while (whileCounter > 0);

    // Vector usage example (0x0A)
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    for (const std::string& name : names) {
        std::cout << "Name: " << name << std::endl;
    }

    // Array example (0x0B)
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        std::cout << "Array element at index " << i << ": " << arr[i] << std::endl;
    }

    // Pointer usage example (0x0C)
    int* ptr = &localExample;
    std::cout << "Pointer points to value: " << *ptr << std::endl;

    // Reference usage example (0x0D)
    int& ref = localExample;
    ref = 10;  // Changing the referenced value
    std::cout << "New value of localExample through reference: " << localExample << std::endl;

    return 0;
}
