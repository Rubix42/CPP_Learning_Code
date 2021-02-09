#pragma once

#include <array>

class PhoneNumber {
    public:
        PhoneNumber(int,int,int,int,int);
        bool is_valid();
    private:
        std::array<int,5> _numbers;
};