#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock(Warlock &W)
{
    if (this != &W)
        *this = W;
}

Warlock &Warlock::operator=(Warlock &W)
{
    if (this != &W)
    {
        this->name = W.name;
        this->title = W.title;
    }
    return (*this);
}

Warlock::Warlock(const std::string &n_w, const std::string &t_w)
{
    this->name = n_w;
    this->title = t_w;
    std::cout << this->name << ": This looks like another boring day.\n";
}







void    Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}





const std::string   &Warlock::getName() const
{
    return(this->name);
}

const std::string   &Warlock::getTitle() const
{
    return(this->title);
}




void    Warlock::setTitle(const std::string &t_w)
{
    this->title = t_w;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
}