// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Shane Pricken
// C++ Calculator
// 9/12/24
// Crazy words


#include <iostream>
using namespace std;

float num1;
float num2;

int main()
{
    cout << "Hello You!" << endl;
    cout << "Choose your first crazy number: " << endl;
    cin >> num1;

    cout << "Choose your second rambunctious number: " << endl;
    cin >> num2;

    cout << "Those insane numbers added are: " << num1 + num2 << endl;

    cout << "Those deranged numbers subracted are: " << num1 - num2 << endl;

    cout << "Those unstable numbers multiplied are: " << num1 * num2 << endl;

    cout << "Those ecstatic numbers divided are: " << num1 / num2 << endl;

    cout << "Those irrepressible numbers modulus is: " << int(num1) % int(num2) << endl;

    cout << "The first rackety number incrimented by one is: " << ++num1 << endl;

    cout << "The second exuberant number decrimented by one is: " << --num2 << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
