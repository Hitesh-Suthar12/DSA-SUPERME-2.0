/*
 * * * *
 * * * *
 * * * *
 * * * *
 */

#include <iostream>

using namespace std;

int main()
{
    int n = 4;

    // cin>> n;

    // outer Loop - Row
    for (int row = 0; row < n; row++)
    {
        // inner loop - Col / print 4 star in same line
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
