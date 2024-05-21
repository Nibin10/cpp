// a. Write a program to dynamically allocate memory for a 2D array of integers using pointers, and then perform matrix multiplication. 
#include <iostream>

// Function to dynamically allocate memory for a 2D array of integers
int** allocate_matrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

// Function to deallocate memory for a 2D array of integers
void deallocate_matrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

// Function to perform matrix multiplication
int** matrix_multiply(int** matrix1, int** matrix2, int rows1, int cols1, int cols2) {
    int** result = allocate_matrix(rows1, cols2);
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

// Function to print a matrix
void print_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example matrices
    const int rows1 = 2, cols1 = 3;
    const int rows2 = 3, cols2 = 2;
    int** matrix1 = allocate_matrix(rows1, cols1);
    int** matrix2 = allocate_matrix(rows2, cols2);

    // Fill matrices with sample values
    int value = 1;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            matrix1[i][j] = value++;
        }
    }
    value = 10;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            matrix2[i][j] = value++;
        }
    }

    // Perform matrix multiplication
    int** result = matrix_multiply(matrix1, matrix2, rows1, cols1, cols2);

    // Print matrices and result
    std::cout << "Matrix 1:" << std::endl;
    print_matrix(matrix1, rows1, cols1);
    std::cout << "Matrix 2:" << std::endl;
    print_matrix(matrix2, rows2, cols2);
    std::cout << "Result:" << std::endl;
    print_matrix(result, rows1, cols2);

    // Deallocate memory
    deallocate_matrix(matrix1, rows1);
    deallocate_matrix(matrix2, rows2);
    deallocate_matrix(result, rows1);

    return 0;
}
