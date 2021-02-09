#include "PhoneNumber.h"

PhoneNumber::PhoneNumber(int a, int b, int c, int d, int e):
    _numbers {a,b,c,d,e}
{};

bool PhoneNumber::is_valid(){
    for(auto number : _numbers){
        if (number < 0 || 100 <= number){
            return false;
        }
    }
    return true;
}