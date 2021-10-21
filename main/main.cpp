#include<vector>
#include<iomanip>
#include<cstring>
#include<string>
#include<string.h>
#include "Crypt.h"

int main()
{
    char a[MAX][MAX]; char b[50];
    char c[MAX][MAX]{};
    string s1;
    int sz = 0;

    cout << "\nEnter the line-> ";
    
   
    getline(cin,s1);
    sz = s1.length();
    if (sz < 9)
    {
        cout << s1<<endl;
        return 0;
    }
    cout << sz << endl;

    cout << "Coding" << endl;
    Code(a, s1, b, sz);
    cout << "Decoding" << endl;
    Code(c, b, b, sz);
    return 0;
}
