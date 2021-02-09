#include "Person.h"



Person::Person(const std::string& firstname,const std::string& lastname, const PhoneNumber& phone):
    _firstname {firstname},
    _lastname {lastname},
    _phoneNumber {phone}
{};

Person::Person(const std::string& firstname, const std::string& lastname) :
    Person {firstname, lastname, PhoneNumber(-1,0,0,0,0)}
{};

std::string Person::get_full_name(){
    return _firstname + " " +  _lastname;
}
PhoneNumber Person::get_phone_number(){
    return _phoneNumber;
}
void Person::set_phone_number(const PhoneNumber& phone){
    _phoneNumber = phone;
}