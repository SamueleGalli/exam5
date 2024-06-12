#include "ATarget.hpp"

ATarget::ATarget()
{}

ATarget::ATarget(const ATarget &T)
{
        *this = T;
}

ATarget &ATarget::operator=(const ATarget &T)
{
    this->type = T.type;
    return (*this);
}






ATarget::ATarget(std::string type_t)
{
    this->type = type_t;
}






ATarget::~ATarget()
{}




void    ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}





std::string       ATarget::getType() const
{
    return (this->type);
}