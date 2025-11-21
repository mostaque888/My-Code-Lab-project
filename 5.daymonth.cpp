#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter the number of a month (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
            cout << "January has 31 days." << endl;
            break;
        case 2:
            cout << "February has 28 days (29 in a leap year)." << endl;
            break;
        case 3:
            cout << "March has 31 days." << endl;
            break;
        case 4:
            cout << "April has 30 days." << endl;
            break;
        case 5:
            cout << "May has 31 days." << endl;
            break;
        case 6:
            cout << "June has 30 days." << endl;
            break;
        case 7:
            cout << "July has 31 days." << endl;
            break;
        case 8:
            cout << "August has 31 days." << endl;
            break;
        case 9:
            cout << "September has 30 days." << endl;
            break;
        case 10:
            cout << "October has 31 days." << endl;
            break;
        case 11:
            cout << "November has 30 days." << endl;
            break;
        case 12:
            cout << "December has 31 days." << endl;
            break;
        default:
            cout << "Invalid month number! Please enter a number between 1 and 12." << endl;
            break;
    }

    return 0;
}
