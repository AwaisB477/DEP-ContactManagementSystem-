
#include <vector>
#include "Contact.h"

using namespace std;

class ContactManager {
private:
    vector<Contact> contacts;

public:
    void addContact(const string& name, const string& phoneNumber);
    void viewContacts() const;
    void deleteContact(const string& name);
};

