//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab2.cpp
/// @brief Lab 2
///
/// @author Ryan Ulep [rulep001@ucr.edu]
/// @date April 7, 2015
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>

using namespace std;

int main()
{
    string firstName;
    int goodDays;

    cout << "Good day, what is your name?" << endl;
    cin >> firstName;

    cout << "How many nice days would you like, " << firstName << "?" << endl;
    cin >> goodDays;

    goodDays = goodDays * 2;

    cout << "Hi " << firstName << ", " << "have " << goodDays;
    cout << " wonderful days!" << endl;

    return 0;
}
