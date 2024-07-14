#include <iostream>
#include "ContactManager.h"
#include<conio.h>
using namespace std;

void showMenu() {
    cout << "1. Add Contact" << endl;
    cout << "2. View Contacts" << endl;
    cout << "3. Delete Contact" << endl;
    cout << "4. Exit" << endl;
}

int main() {
    ContactManager manager;
    int choice;
    string name, phoneNumber;

    do {
        
        showMenu();
        cout << "Enter your choice: ";
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer

        switch (choice) {
        case 1:
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter phone number: ";
            getline(cin, phoneNumber);
            manager.addContact(name, phoneNumber);
            system("pause");
            system("cls");
            break;
        case 2:
            manager.viewContacts();
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "Enter name to delete: ";
            getline(cin, name);
            manager.deleteContact(name);
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Exiting..." << endl;

            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            system("pause");
            system("cls");
        }
    } while (choice != 4);

    return 0;
}
