/*
BONUS :-
1. int / int = int
2. int / float = float
3. float / int = float
*/

#include <iostream>

using namespace std;
int main()
{
    float pi = 3.1428;
    int intPi = pi;
    cout << "Print intPi : " << intPi << endl; // 3

    // float to char
    float floatingNum = 65.55;
    char charValue = (char)floatingNum;                // Explicit conversion from float to char
    cout << "Print charValur : " << charValue << endl; // A

    // int to float
    int a = 10;
    int b = 3.0;
    float c = a / b;
    float d = a / ((float)b);                   // Explicit conversion from int to floar
    cout << "Print value of c : " << c << endl; // 3
    cout << "Print value of d : " << d << endl; // 3.3333
}