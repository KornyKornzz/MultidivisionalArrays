#include <iostream>

int main() {
    int row, col;

    std::cout << "How many rows are there?" << std::endl;
    std::cin >> row;

    std::cout << "How many columns are there?" << std::endl;
    std::cin >> col;

    // Dynamically allocate memory for the 2D array
    int** val = new int*[row];
    for (int i = 0; i < row; ++i) {
        val[i] = new int[col];
    }

    std::cout << "Enter values for the matrix:" << std::endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cin >> val[i][j];
        }
    }

    // Display the contents of the array
    std::cout << "Array contents:" << std::endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cout << val[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Clean up: deallocate memory
    for (int i = 0; i < row; ++i) {
        delete[] val[i];
    }
    delete[] val;

    return 0;
}
