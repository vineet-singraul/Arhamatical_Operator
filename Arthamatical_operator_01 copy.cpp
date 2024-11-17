// Question: Given two integers x and y, write a program that calculates (x + y) * (x - y) using only arithmetic operators.
// Concepts: Addition, Subtraction, Multiplication

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Plase Enter The Value A : " << endl;
    cin >> a;
    cout << "Plase Enter The Value B : " << endl;
    cin >> b;

    cout << " The Sum Of Divided By Differance Of Two Number : " << (a + b) * (a - b);
    return 0;
}