#include "ContactManager.h"
#include <iostream>
#include <algorithm>

using namespace std;

void ContactManager::addContact(const string& name, const string& phoneNumber) {
    contacts.emplace_back(name, phoneNumber);
}

void ContactManager::viewContacts() const {
    for (const auto& contact : contacts) {
        cout << "Name: " << contact.getName() << ", Phone Number: " << contact.getPhoneNumber() << endl;
    }
}

void ContactManager::deleteContact(const string& name) {
    auto it = remove_if(contacts.begin(), contacts.end(), [&name](const Contact& contact) {
        return contact.getName() == name;
        });

    if (it != contacts.end()) {
        contacts.erase(it, contacts.end());
        cout << "Contact deleted successfully." << endl;
    }
    else {
        cout << "Contact not found." << endl;
    }
}
