#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include "ATarget.hpp"

class    BrickWall : public ATarget
{
    private:
    public:
        BrickWall();
        BrickWall(BrickWall &D);
        BrickWall &operator=(BrickWall &D);


        ATarget *clone() const;



        ~BrickWall();
};

#endif