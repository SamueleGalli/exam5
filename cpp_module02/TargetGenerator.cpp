#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::TargetGenerator(const TargetGenerator &F)
{
    *this = F;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &F)
{
    if (this != &F)
        *this = F;
    return (*this);
}





TargetGenerator::~TargetGenerator()
{
}







//teaches a target to the generator
void    TargetGenerator::learnTargetType(ATarget *target)
{
    if (target != 0)
    {
        std::string nameT = target->getType();
        if (this->map.find(nameT) == this->map.end())
        {
            this->map[nameT] = target;
        }
    }
}




//that makes the generator forget a
//target type if it's known
void    TargetGenerator::forgetTargetType(std::string const &target)
{
    std::map<std::string, ATarget *>::iterator it = this->map.find(target);
    if (it != this->map.end())
    {
        this->map.erase(it);
    }
}



//that creates a target of the
//specified type
ATarget* TargetGenerator::createTarget(std::string const &target)
{
    ATarget *tmp = 0;
    if (this->map.find(target) != this->map.end())
    {
        tmp = this->map[target];
    }
    return (tmp);
}