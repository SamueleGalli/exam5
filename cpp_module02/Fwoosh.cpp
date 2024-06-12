#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::Fwoosh(Fwoosh &F) : ASpell("Fwoosh", "fwooshed")
{
    *this = F;
}

Fwoosh &Fwoosh::operator=(Fwoosh &F)
{
    if (this != &F)
        *this = F;
    return (*this);
}




ASpell *Fwoosh::clone() const
{
    return (new Fwoosh());
}






Fwoosh::~Fwoosh()
{
}