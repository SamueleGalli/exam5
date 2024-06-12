#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::BrickWall(BrickWall &BW) : ATarget("Inconspicuous Red-brick Wall")
{
    *this = BW;
}

BrickWall &BrickWall::operator=(BrickWall &BW)
{
    if  (this != &BW)
        *this = BW;
    return (*this);
}




ATarget *BrickWall::clone() const
{
    return (new BrickWall());
}






BrickWall::~BrickWall()
{}