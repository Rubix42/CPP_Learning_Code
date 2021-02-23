#pragma once
#include "MinuteHand.h"
#include "SecondHand.h"

class Clock{
public:
    Clock():
        _min_hand {MinuteHand{}}, _sec_hand{ SecondHand {_min_hand} }
    {}
    void tick() {_sec_hand.advance();}
private:
    SecondHand _sec_hand;
    MinuteHand _min_hand;
};