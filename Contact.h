#include <string>

using namespace std;

class Contact {
private:
    string name;
    string phoneNumber;

public:
    Contact(const string& name, const string& phoneNumber);
    string getName() const;
    string getPhoneNumber() const;
    void setName(const string& name);
    void setPhoneNumber(const string& phoneNumber);
};
