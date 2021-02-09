#pragma once

#include "PhoneNumber.h"

#include <string>

class Person{
    public:
        Person(const std::string& firstname,const std::string& lastname);
        Person(const std::string& firstname,const std::string& lastname, const PhoneNumber&);
        std::string get_full_name();
        PhoneNumber get_phone_number();
        void set_phone_number(const PhoneNumber&);
    private:
        std::string _firstname;
        std::string _lastname;
        PhoneNumber _phoneNumber;
};