#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::TargetGenerator(TargetGenerator &F)
{
    if (this != &F)
    {
        *this = F;
    }
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator &F)
{
    if (this != &F)
    {
        *this = F;
    }
    return (*this);
}





TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget *>::iterator start = this->map.begin();
    std::map<std::string, ATarget *>::iterator finish = this->map.end();
    for(;start != finish; start++)
    {
        delete start->second;
    }
    this->map.clear();
}







//teaches a target to the generator
void    TargetGenerator::learnTargetType(ATarget *target)
{
    if (target != 0)
    {
        std::string nameT = target->getType();
        if (this->map.find(nameT) != this->map.end())
        {
            this->map[nameT] = target->clone();
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
        delete it->second;
        this->map.erase(it);
    }
}



//that creates a target of the
//specified type
ATarget* TargetGenerator::createTarget(std::string const &target)
{
    std::map<std::string, ATarget *>::iterator it = this->map.find(target);
    if (it != this->map.end())
    {
        return (this->map[target]);
    }
    return (0);
}