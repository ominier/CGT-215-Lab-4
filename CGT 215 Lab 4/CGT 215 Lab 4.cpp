// CGT 215 Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

//Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    int n;
    cout << "Factorial:" << endl;
    cout << "Enter a number: ";
    cin >> n;

    while (n < 0) {
        cout << "Nice try, please enter a POSITIVE number...: ";
        cin >> n;
    }

    long long result = 1;
    cout << n << "! = ";
    for (int i = 1; i <= n; ++i) {
        result *= i;
        if (i > 1) cout << " * ";
        cout << i;
    }
    cout << " = " << result << endl;
}
void arithmetic() {
    int start, add, count;
    cout << "Arithmetic Series:" << endl;
    cout << "Enter a number to start at: ";
    cin >> start;
    cout << "Enter a number to add each time: ";
    cin >> add;
    cout << "Enter the number of elements in the series: ";
    cin >> count;

    while (count < 0) {
        cout << "Nice try, please enter a POSITIVE number of elements in the series...: ";
        cin >> count;
    }

    int sum = 0;
    cout << start;
    sum += start;

    for (int i = 1; i < count; ++i) {
        start += add;
        sum += start;
        cout << " + " << start;
    }
    cout << " = " << sum << endl;
}
void geometric() {
    double start, ratio;
    int count;
    cout << "Geometric Series:" << endl;
    cout << "Enter a number to start at: ";
    cin >> start;
    cout << "Enter a number to multiply by each time: ";
    cin >> ratio;
    cout << "Enter the number of elements in the series: ";
    cin >> count;

    while (count < 0) {
        cout << "Nice try, please enter a POSITIVE number of elements in the series...: ";
        cin >> count;
    }

    double sum = 0;
    double term = start;
    cout << term;
    sum += term;

    for (int i = 1; i < count; ++i) {
        term *= ratio;
        sum += term;
        cout << " * " << term;
    }
    cout << " = " << sum << endl;
}
int main() {
    int choice;
    char again;

    do {
        printMenu();
        cin >> choice;

        // Quit if user chooses to exit (for any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }

        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }

        cout << "Go Again? [Y/N] ";
        cin >> again;

    } while (again == 'y' || again == 'Y"');
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
