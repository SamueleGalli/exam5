#include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell::ASpell(const ASpell &S)
{
    *this = S;
}

ASpell &ASpell::operator=(const ASpell &S)
{
    this->name = S.name;
    this->effects = S.effects;
    return (*this);
}




ASpell::ASpell(const std::string &a_n, const std::string &a_e)
{
    this->name = a_n;
    this->effects = a_e;
}




std::string   ASpell::getName() const
{
    return (this->name);
}


std::string   ASpell::getEffects() const
{
    return (this->effects);
}





ASpell::~ASpell()
{}



void    ASpell::launch(const ATarget &T) const
{
    T.getHitBySpell((*this));
}
