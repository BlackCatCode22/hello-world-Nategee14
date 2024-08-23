// nG 8/14/24
// tripleInt.cpp


#include <iostream>
using namespace std;

int main() {
    int userInteger = 0;
    int tripleInteger = 0;

    cout << "Please enter a number: ";
    cin >> userInteger;

    // Do some processing! Triple the user's integer!
    tripleInteger = userInteger * 3;

    // Output the Triple int.
    cout << "\n The tripled int is: " << tripleInteger << endl;

    return 0;
}