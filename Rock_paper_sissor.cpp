#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "This is a simple Rock-Paper-Scissor game\n";
    cout << "1 for Rock\n";
    cout << "2 for Paper\n";
    cout << "3 for Scissor\n";
    cout << "Enter your choice: ";
    
    int user_choice;
    cin >> user_choice;

    if (cin.fail() || user_choice < 1 || user_choice > 3) {
        cout << "The given input is invalid or out of range.\n";
        cout << "Please enter a valid input.\n";
        return 1;
    }

    srand(time(0));
    int a = rand() % 3 + 1;

    cout << "The computer choice is: " << a << endl;

    if (user_choice == a) {
        cout << "It's a tie and no one wins.\n";
    }
    else if ((user_choice == 1 && a == 3) ||
             (user_choice == 2 && a == 1) ||
             (user_choice == 3 && a == 2)) {
        cout << "You win!\n";
    }
    else {
        cout << "Computer wins!\n";
    }

    return 0;
}
