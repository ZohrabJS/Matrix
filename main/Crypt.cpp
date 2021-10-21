#include "Crypt.h"

void Code(char a[MAX][MAX], string s, char* b, int n)
{
    matrixGen(a, s);
    codeGen(b, a);
    printMatrix(a);
    matrixGen(a, b);
    printMatrix(a);
    cout << endl;
    printArray(b,s, n);
}

void printArray(char* b,string s ,int n)
{
    for (int i = 0; i < n; i++)
    {   

        if (b[i] == -52)
        {
            b[i] = s[i];
        }
        cout << b[i] ;
    }
    cout << endl;
}

void printMatrix(char m[MAX][MAX])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void codeGen(char* b, char a[MAX][MAX])
{
    int k = 0;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            b[k] = a[i][j];
            k++;
        }
    }
}

void matrixGen(char a[MAX][MAX], string s)
{
    cout << endl;
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = s[k];
            k++;
        }
    }
}