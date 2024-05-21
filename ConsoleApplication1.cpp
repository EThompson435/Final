#include <iostream>

// Function to generate multiplication table
void generateMultiplicationTable(int startRange, int endRange, int startMultiplier, int endMultiplier) {
    std::cout << "Here is the multiplication table for " << startRange << " to " << endRange << " in the range of " << startMultiplier << " to " << endMultiplier << std::endl;
    // Print the header row
    std::cout << "X ";
    for (int i = startMultiplier; i <= endMultiplier; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Print the multiplication table
    for (int i = startRange; i <= endRange; ++i) {
        std::cout << i << " ";
        for (int j = startMultiplier; j <= endMultiplier; ++j) {
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }
}

// Way #1: Implementing the program using functions
void multiplicationTableWay1() {
    int startRange, endRange, startMultiplier, endMultiplier;
    char choice;

    do {
        std::cout << "Enter the starting range for Multiplication Table: ";
        std::cin >> startRange;
        std::cout << "Enter the ending range for Multiplication Table: ";
        std::cin >> endRange;
        std::cout << "Enter the starting range for multiplying the numbers in Multiplication Table: ";
        std::cin >> startMultiplier;
        std::cout << "Enter the ending range for multiplying the numbers in Multiplication Table: ";
        std::cin >> endMultiplier;

        generateMultiplicationTable(startRange, endRange, startMultiplier, endMultiplier);

        std::cout << "Do you want to create another multiplication table (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}

// Way #2: Implementing the program in int main()
int main() {
    char choice;

    do {
        int startRange, endRange, startMultiplier, endMultiplier;

        std::cout << "Enter the starting range for Multiplication Table: ";
        std::cin >> startRange;
        std::cout << "Enter the ending range for Multiplication Table: ";
        std::cin >> endRange;
        std::cout << "Enter the starting range for multiplying the numbers in Multiplication Table: ";
        std::cin >> startMultiplier;
        std::cout << "Enter the ending range for multiplying the numbers in Multiplication Table: ";
        std::cin >> endMultiplier;

        generateMultiplicationTable(startRange, endRange, startMultiplier, endMultiplier);

        std::cout << "Do you want to create another multiplication table (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Thank you for using the multiplication table generator!" << std::endl;

    return 0;
}