//
//  Circle.cpp
//  assign2
//
//  Created by Frederick Arnanda on 2/20/19.
//  Copyright © 2019 Frederick Arnanda. All rights reserved.
//

#include "Circle.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

ostream& operator << (ostream& os, const Circle& cir) {
    os << "Radius = " << cir.rad;
}

istream& operator >> (istream& is, Circle& cir) {
    is >> cir.rad;
    return is;
}

Circle Circle::operator +(const Circle& cir) const {
    cir tempCir;
    tempCir.rad = rad + cir.rad;
    return tempCir;
}

Circle::getRad(double) {
    return rad;
}
