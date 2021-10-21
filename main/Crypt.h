#pragma once
#include <iostream>
using namespace std;
# define MAX 50

void Code(char a[MAX][MAX], string s, char* b, int sz);
void printMatrix(char m[MAX][MAX]);
void printArray(char* b, string s, int n);
void codeGen(char* b, char a[MAX][MAX]);
void matrixGen(char a[MAX][MAX], string s);