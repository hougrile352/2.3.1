// 2.3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool markCalc(int mark)
{
    if (mark <= 100)
    {
        if (mark > 79)
        {
            cout << "A";
        }
        else if (mark > 69)
        {
            cout << "B";
        }
        else if (mark > 59)
        {
            cout << "C";
        }
        else if (mark > 49)
        {
            cout << "D";
        }
        else if (mark >= 0)
        {
            cout << "F";
        }
        else
        {
            cout << "You got an E! (Mark out of range)\n";
        }
        
    }
    else 
        {
        cout << "You got an E! (Mark out of range)\n";
        }
}

int main()
{
    int mark;
    cout << "Hello World!\n";
    cin >> mark;

    cout << markCalc(mark);
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
