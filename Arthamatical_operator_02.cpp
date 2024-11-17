// Question: Write a program to find the remainder when the sum of two numbers is divided by their difference. Ensure that the difference is non-zero.   Concepts: Addition, Subtraction, Modulus

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Plase Enter The Value A : " << endl;
    cin >> a;
    cout << "Plase Enter The Value B : " << endl;
    cin >> b;

    cout << " The Sum Of Divided By Differance Of Two Number : " << (a + b) / (a - b);
    return 0;
}
