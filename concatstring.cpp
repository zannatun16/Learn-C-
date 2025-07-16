#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstname;
    string lastname;

    cout << "Enter first name: ";
    cin >> firstname;

    cout << "Enter last name: ";
    cin >> lastname;

    string fullname = firstname + " " + lastname;
    cout << "Full name: " << fullname << endl;

    return 0;
}

