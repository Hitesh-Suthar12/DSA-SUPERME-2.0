#include <iostream>

using namespace std;

int main()
{
    // float to int and int to float convertion
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2;
    // most precise ans you get by float type output
    int resultInt = num1 + num2;
    cout << "Answer in float : " << result << endl;       // 15.5
    cout << "Answer in Int type : " << resultInt << endl; // 15

    // int to char convertion
    char ch = 'A';
    int num = 1;
    char resultChar = ch + num;
    int resultCharToInt = ch + num;
    cout << "After adding char and int , output in Char : " << resultChar << endl;     // B
    cout << "After adding char and int , output in Int : " << resultCharToInt << endl; // 66

    char b = 'b';
    int integer = 1;
    int resultInInt = b + integer;
    char resultInChar = b + integer;
    cout << "result in int adding 'b' + 1 : " << resultInInt << endl;   // 99
    cout << "result in Char adding 'b' + 1 : " << resultInChar << endl; // c
}