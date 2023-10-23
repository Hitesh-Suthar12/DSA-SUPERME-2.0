/*
Hollow rectangular pattern
* * * * *
*       *
*       *
*       *
* * * * *
*/

#include <iostream>

using namespace std;
int main()
{
    int n = 5;

    // outer loop
    for (int row = 0; row < 5; row++)
    {
        // inner loop
        for (int col = 0; col < 5; col++)
        {
            // if Zeroth or last row, then print star
            if (row == 0 || row == 4)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 4)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}