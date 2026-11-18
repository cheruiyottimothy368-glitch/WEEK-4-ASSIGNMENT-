#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctUsername = "admin";
    string correctPassword = "12345";

    string username, password;

    do {
        cout << "\n----- LOGIN SYSTEM -----" << endl;

        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername &&
            password == correctPassword) {

            cout << "\nAccess Granted!" << endl;

        } else {
            cout << "\nIncorrect credentials, try again"
                 << endl;
        }

    } while (username != correctUsername ||
             password != correctPassword);

    cout << "Welcome to the system!" << endl;

    return 0;
}

