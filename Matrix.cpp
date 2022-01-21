#include <iostream>
using namespace std;

class Matrix
{
    int **p;
    int d1, d2;//matrxi dimensions
    public :
        Matrix(int x, int y);
        ~Matrix();
        void setElement(int i, int j, int vaue);
        int & displayElement(int i, int j);
};

//destructor
Matrix :: ~Matrix()
{
    for (int i = 0; i < d1  ; i++)
    {
        //cout
        delete [] p[i];
    }
    delete [] p;
    //cout
}

Matrix :: Matrix(int x, int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for (int i = 0; i < d1; i++)
    {
        p[i] = new int [d2];
    }    
}

void Matrix :: setElement(int i, int j, int val)
{
    p[i][j] = val;
}

int & Matrix :: displayElement(int i, int j)
{
    return p[i][j];
}

int main()
{
    int m, n;
    //accept the dimensions
    //cout << "Enter dimeni"
    //create an object of Matrix with the provided dimenion
    //loop to accept each value use setElement to save the data
    //display the element row = 1 col =2
    return 0;
}