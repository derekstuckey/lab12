//
// Created by djs37549 on 5/1/2018.
//

#ifndef OPERATORS_BOX_H
#define OPERATORS_BOX_H


class Box {
private:
    double length;
    double width;
    double height;
public:
    Box(double len = 1, double w = 1, double h = 1);
    double getVolume() const;
};


#endif //OPERATORS_BOX_H
