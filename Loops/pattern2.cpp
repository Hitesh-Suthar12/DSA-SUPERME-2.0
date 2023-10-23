/*
 * * * * *
 * * * * *
 * * * * *
 */

#include <iostream>

using namespace std;
int main()
{
    int n = 3;

    // out loop - 3 time run
    for (int row = 0; row < 3; row++)
    {
        // inner loop - 5 star print
        for (int row = 0; row < 5; row++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}