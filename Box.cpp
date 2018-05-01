//
// Created by djs37549 on 5/1/2018.
//

#include "Box.h"

Box::Box(double len, double w, double h) : length(len), width(w), height(h) {
    // no-op (no operation)
}

double Box::getVolume() const {
    return length * width * height;
}

bool Box::operator<(const Box& rhs) const {
    return getVolume() < rhs.getVolume();
}

bool Box::operator==(const Box &rhs) const {
    return getVolume() == rhs.getVolume();
}

bool Box::operator>(const Box &rhs) const {
    return !(rhs == *this) && !(*this < rhs);
    //*this refers to the object itself
}

Box Box::operator+(const Box &rhs) const {
    double length{rhs.length + this->length};
    double width{rhs.width + this->width};
    double height{rhs.height + this->height};
    Box box{length, width, height};
    return box;
}
