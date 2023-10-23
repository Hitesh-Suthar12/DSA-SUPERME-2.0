/*
Hollow rectangular pattern
* * * * * *
*         *
*         *
*         *
*         *
*         *
*         *
*         *
*         *
* * * * * *
*/

#include <iostream>

using namespace std;
int main()
{
    int ROW = 10;
    int COL = 6;

    // outer loop
    for (int row = 0; row < ROW; row++)
    {
        // inner loop
        for (int col = 0; col < COL; col++)
        {
            // if Zeroth or last row, then print star
            if (row == 0 || row == ROW - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == COL - 1)
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