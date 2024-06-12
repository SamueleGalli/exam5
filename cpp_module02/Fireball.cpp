#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{}

Fireball::Fireball(Fireball &F) : ASpell("Fireball", "burnt to a crisp")
{
    *this = F;
}

Fireball &Fireball::operator=(Fireball &F)
{
    if (this != &F)
        *this = F;
    return (*this);
}




ASpell *Fireball::clone() const
{
    return (new Fireball());
}






Fireball::~Fireball()
{
}