// Debug the code. Linear Search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            cout << "Found";
            return i;
        }
    }
    cout << "Not Found";
    return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};

    int val = 5;

    linearSearch(arr, n, val);

    return 0;
}