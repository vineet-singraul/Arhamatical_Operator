#include <iostream>
using namespace std;

int main() {
    int maths, physics, chemistry, hindi, english, result;

    // Taking inputs for marks
    cout << "Please Enter Here Your Math Marks: ";
    cin >> maths;
    cout << "Please Enter Here Your Physics Marks: ";
    cin >> physics;
    cout << "Please Enter Here Your Chemistry Marks: ";
    cin >> chemistry;
    cout << "Please Enter Here Your Hindi Marks: ";
    cin >> hindi;
    cout << "Please Enter Here Your English Marks: ";
    cin >> english;
    
    // Correcting the calculation of average
    result = (maths + chemistry + physics + hindi + english) / 5;

    // Displaying the result
    cout << "-------------------------------------" << endl;
    cout << "The Final Result is " << endl;
    cout << "-------------------------------------" << endl;
    cout << "Your result is: " << result << endl;

    return 0;
}
