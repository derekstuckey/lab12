#include <iostream>
#include "Box.h"

int main() {
    Box box1{};
    std::cout << "box1.getVolume() = " << box1.getVolume() << std::endl;
    Box box2{1,2,3};
    std::cout << "box2.getVolume() = " << box2.getVolume() << std::endl;
    std::cout << "box1 < box2? " << (box1 < box2? "Yes" : "No") << std::endl;

    Box box3{};
    std::cout << "box1 == box3? " << (box1 == box3? "Yes" : "No") << std::endl;
    Box box4 = box1 + box2;
    std::cout << "box4.getVolume() = " << box4.getVolume() << std::endl;

    return 0;
}