// nG 8/22/24
// sumInts

#include <iostream>
using namespace std;

int addTwoInts(int, int);

int main() {
    // Assigning integers to both the numbers given by the user and the sum of the numbers.
    int userInteger1 = 0;
    int userInteger2 = 0;
    int mySum = 0;

    // Text prompts asking the user for two numbers.
    cout << "Please enter an number: ";
    cin >> userInteger1;
    cout << "Please enter an number: ";
    cin >> userInteger2;

    // Adding the two numbers given by the user.
    mySum = addTwoInts(userInteger1, userInteger2);

    // Output the sum.
cout << "The sum of your two integers is: " << mySum << endl;
    return 0;
}

// This function adds two numbers within the parameters and returns the value.
int addTwoInts(int num1, int num2) {
    int theSum = 0;
    theSum = num1 + num2;
    return theSum;
}

