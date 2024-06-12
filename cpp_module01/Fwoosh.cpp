#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::Fwoosh(Fwoosh &F) : ASpell("Fwoosh", "fwooshed")
{
    if (this != &F)
        *this = F;
}

Fwoosh &Fwoosh::operator=(Fwoosh &F)
{
    (void)F;
    return (*this);
}




ASpell *Fwoosh::clone() const
{
    return (new Fwoosh());
}






Fwoosh::~Fwoosh()
{
}