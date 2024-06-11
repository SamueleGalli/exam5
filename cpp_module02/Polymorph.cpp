#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{}

Polymorph::Polymorph(Polymorph &P) : ASpell("Polymorph", "turned into a critter")
{
    if (this != &P)
    {
        *this = P;
    }
}

Polymorph &Polymorph::operator=(Polymorph &P)
{
    if (this != &P)
    {
        *this = P;
    }
    return (*this);
}




ASpell *Polymorph::clone() const
{
    return (new Polymorph());
}






Polymorph::~Polymorph()
{
}