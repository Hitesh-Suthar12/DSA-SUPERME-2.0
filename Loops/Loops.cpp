#include <iostream>

using namespace std;

int main()
{
    int n = 4;

    for (int row = 0; row < 4; row++)
    {
        cout << "Outer loop " << row << ", ";

        for (int col = 0; col < 4; col++)
        {
            cout << "Inner Loop " << col << ", ";
        }
        cout << " -- next line" << endl;
        ;
    }

    cout << endl
         << endl;

    for (int row = 0; row < 4; row++)
    {
        cout << "Outer loop  ";

        for (int col = 0; col < 4; col++)
        {
            cout << "Inner ";
        }
        for (int inside = 0; inside < 3; inside++)
        {
            cout << "  Inside - " << inside;
        }
        cout << endl;
    }
}