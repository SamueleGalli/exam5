#include "ATarget.hpp"

ATarget::ATarget()
{}

ATarget::ATarget(ATarget &T)
{
    if (this != &T)
        *this = T;
}

ATarget &ATarget::operator=(ATarget &T)
{
    this->type = T.type;
    return (*this);
}






ATarget::ATarget(const std::string &type)
{
    this->type = type;
}










ATarget::~ATarget()
{}





void    ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}