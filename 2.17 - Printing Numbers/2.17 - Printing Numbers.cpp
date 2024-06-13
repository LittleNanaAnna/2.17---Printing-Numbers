/* 2.17.) Write a program that prints the numbers 1 to 4 on the same line with each pair of adjacent numbers separated by one space. Do this several ways:
        a.)	Using one statement with one stream insertion operator.
        b.)	Using one statement with four stream insertion operators.
        c.)	Using four statements.*/

#include <iostream>
using namespace std;

int main()
{
    //Part a:
    cout << "One stream inseration operator" << endl;
    cout << "1 2 3 4" << endl;

    //Part b: Four stream insertion operator
    cout << "\nFour stream insertion operator" << endl;
    cout << "1 " << "2 " << "3 " << "4" << endl;

    //Part c:
    cout << "\nFour statements" << endl;
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4";

    //Showing that the program runs correctly
    return 0;
}
