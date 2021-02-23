#pragma once
#include "MinuteHand.h"

class SecondHand{
public:
    SecondHand(MinuteHand& minute) :
        _min_hand {minute}
    {}
    void advance() {
        if (!(_seconds = (_seconds+1)%60)){
            _min_hand.advance();
        }
    }
    int get_seconds() const {return _seconds;}
private:
    int _seconds;
    MinuteHand& _min_hand;
};