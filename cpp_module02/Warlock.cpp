#include "Warlock.hpp"

Warlock::Warlock()
{
    std::map<std::string, ASpell *>::iterator start = this->map.begin();
    std::map<std::string, ASpell *>::iterator finish = this->map.end();
    for(;start != finish; start++)
    {
        delete start->second;
    }
    this->map.clear();
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



//takes a pointer to ASpell, 
//that makes the Warlock learn a spell
void    Warlock::learnSpell(ASpell *spell)
{
    book.learnSpell(spell);
}


//takes a string corresponding a to a spell's name,
// and makes the Warlock forget it.
//If it's not a known spell, does nothing.
void    Warlock::forgetSpell(std::string spell)
{
    book.forgetSpell(spell);

}

//takes a string (a spell name) and a reference to ATarget,
// that launches the spell on the selected target.
//If it's not a known spell, does nothing.
void    Warlock::launchSpell(std::string spell_name, const ATarget &at)
{
    ASpell *spell = this->book.createSpell(spell_name);
    if (spell)
        spell->launch(at);
}

