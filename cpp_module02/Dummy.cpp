#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

Dummy::Dummy(Dummy &D) : ATarget("Target Practice Dummy")
{
    if (this != &D)
    {
        *this = D;
    }
}

Dummy &Dummy::operator=(Dummy &D)
{
    if (this != &D)
    {
        *this = D;
    }
    return (*this);
}




ATarget *Dummy::clone() const
{
    return (new Dummy());
}






Dummy::~Dummy()
{}