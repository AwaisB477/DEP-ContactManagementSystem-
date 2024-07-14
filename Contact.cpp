#include "Contact.h"

Contact::Contact(const string& name, const string& phoneNumber)
    : name(name), phoneNumber(phoneNumber) {}

string Contact::getName() const {
    return name;
}

string Contact::getPhoneNumber() const {
    return phoneNumber;
}

void Contact::setName(const string& name) {
    this->name = name;
}

void Contact::setPhoneNumber(const string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}
