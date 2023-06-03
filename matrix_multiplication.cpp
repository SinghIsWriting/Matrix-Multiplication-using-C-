#include <iostream> // iostream header file

using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2, sum;

    // taking input rows and columns of first and second matrices
    cout<<"Enter number of rows in first matrix: ";
    cin>>rows1;
    cout<<"Enter number of columns in first matrix: ";
    cin>>cols1;
    cout<<endl<<"Enter number of rows in second matrix: ";
    cin>>rows2;
    cout<<"Enter number of columns in second matrix: ";
    cin>>cols2;

    if (cols1 == rows2){
        // Dynamically allocating first matrix
        int **A = new int *[rows1];
        for (int i = 0; i < rows1; i++)
        {
            A[i] = new int[cols1];
        }
        cout << endl
             << "Enter the elements of first matrix: " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cout << "Enter A[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> A[i][j];
            }
        }

        // Dynamically allocating second matrix
        int **B = new int *[rows2];
        for (int i = 0; i < rows2; i++)
        {
            B[i] = new int[cols2];
        }
        cout << endl
             << "Enter the elements of second matrix: " << endl;
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cout << "Enter B[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> B[i][j];
            }
        }

        // Multiplying first and second matrices
        cout << endl
             << "Multiplication of both matrices: " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                sum = 0;
                for (int k = 0; k < cols1; k++)
                {
                    sum += A[i][k] * B[k][j];
                }
                cout << sum << " ";
            }
            cout << endl;
        }
        cout << endl;

        // deleting allocated memory of matrices
        for (int i = 0; i < rows1; i++)
        {
            delete[] A[i];
        }
        delete[] A;   // deleting memory of matrix A

        for (int i = 0; i < rows2; i++)
        {
            delete[] B[i];
        }
        delete[] B;   // deleting memory of matrix B
        
    }
    else{
        cout<<endl<<"WARNING: Matrix multiplication is not possible with these matrices, please check the order of both matrices."<<endl<<endl;
    } 


    return 0;
}