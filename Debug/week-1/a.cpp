#include<iostream>

using namespace std;
int main()
{
    int a = 10;

    int b = (++a) * (a++) ;
    // cout << (++a) * (a++) ;
    // cout << (++a) * (a++) ;
    cout << b;
    
    return 0;
}