#include <string>

class Person {
    std::string name;
    std::string address;
    
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
};
