#include <iostream>
using namespace std;

void inputMatrix(int **matrix, int rows, int cols) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int **matrix, int rows, int cols) {
    cout<< "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int **matrix, int **transposed, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void DisplayTranspose(int **transposed, int rows, int cols){
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout<<transposed[i][j]<<" ";
        }
        cout<<endl;
    }   
}


void addMatrices(int **matrix1, int **matrix2, int **result, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int **matrix1, int **matrix2, int **result, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices(int **matrix1, int **matrix2, int **result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    int **matrix1 = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = new int[cols1];
    }
    inputMatrix(matrix1, rows1, cols1);

    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> rows2 >> cols2;
    int **matrix2 = new int*[rows2];
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[cols2];
    }
    inputMatrix(matrix2, rows2, cols2);

    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrices should have the same dimensions for addition and subtraction." << endl;
        return 0;
    }

    cout << "Original Matrices:" << endl;
    displayMatrix(matrix1, rows1, cols1);
    displayMatrix(matrix2, rows2, cols2);

    int **transposed1 = new int*[cols1];
    for (int i = 0; i < cols1; ++i) {
        transposed1[i] = new int[rows1];
    }
    transposeMatrix(matrix1, transposed1, rows1, cols1);
    cout<<"transpos of matrix 1 : \n";
    DisplayTranspose(transposed1, cols1, rows1);
    
    int **transposed2 = new int*[cols2];
    for (int i = 0; i < cols2; ++i) {
        transposed2[i] = new int[rows2];
    }
    transposeMatrix(matrix2, transposed2, rows2, cols2);
    cout<<"transpos of matrix 2 : \n";
    DisplayTranspose(transposed2, rows2, cols2);
    

    cout << "Addition of Transpose Matrices:" << endl;
    int **sum = new int*[cols1];
    for (int i = 0; i < cols1; ++i) {
        sum[i] = new int[rows1];
    }
    addMatrices(transposed1, transposed2, sum, cols1, rows1);
    displayMatrix(sum, cols1, rows1);

    cout << "Subtraction of Transpose Matrices:" << endl;
    int **difference = new int*[cols1];
    for (int i = 0; i < cols1; ++i) {
        difference[i] = new int[rows1];
    }
    subtractMatrices(transposed1, transposed2, difference, cols1, rows1);
    displayMatrix(difference, cols1, rows1);

    cout << "Multiplication of Transpose Matrices:" << endl;
    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied. Columns of the first matrix must be equal to rows of the second." << endl;
        return 0;
    }
    int **product = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        product[i] = new int[cols2];
    }
    multiplyMatrices(transposed1, transposed2, product, rows1, cols1, cols2);
    displayMatrix(product, rows1, cols2);

}
