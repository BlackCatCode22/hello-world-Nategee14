// nG 8/21/24
//greeting

#include <iostream>
using namespace std;

void sayHi (string name, int age);

int main()
{
    // Assigning values to the name and age.
  string userName = "nullptr";
    int userAge = 0;

    // Asking the user for their name and age.
    cout << "Hello! What is your name? ";
    cin >> userName;
    cout << "How old are you? ";
    cin >> userAge;

    // Using the user's given name and age as an argument.
  sayHi(userName, userAge);

 return 0;
}

// This function takes a name and age parameter and creates a greeting.
void sayHi (string name, int age) {
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
}
