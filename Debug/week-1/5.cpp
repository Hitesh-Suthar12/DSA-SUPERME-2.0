/*
Debug the code. It is trying to print the given pattern.
Pattern
N = 4
1
21
321
4321
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    // cin >> n;
    n = 4;
    for (i = 1; i <= n; i++)
    // for (i = 1; i < n; i--)
    {
        int p=i;
        for (j = 1; j < i + 1; j++)
        // for (j = 1; j < n; j++)
        {
            cout << p;
            p--;
        }
        cout << endl;
    }
}