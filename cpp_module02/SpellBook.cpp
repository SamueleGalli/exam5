#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::SpellBook(SpellBook &SP)
{
    if (this != &SP)
    {
        *this = SP;
    }
}

SpellBook &SpellBook::operator=(SpellBook &SP)
{
    if (this != &SP)
    {
        *this = SP;
    }
    return (*this);
}







SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator start = this->map.begin();
    std::map<std::string, ASpell *>::iterator finish = this->map.end();
    for(;start != finish; start++)
    {
        delete start->second;
    }
    this->map.clear();
}





//that COPIES a spell in the book
void SpellBook::learnSpell(ASpell *spell)
{
    if (spell != 0)
    {
        std::string name_spell = spell->getName();
        if (map.find(name_spell) == map.end())
        {
            map[name_spell] = spell->clone();
        }

    }
}



//that deletes a spell from the book, except
//  if it isn't there
void SpellBook::forgetSpell(std::string const &spell)
{
    std::map<std::string, ASpell *>::iterator it = map.find(spell);
    if (it != map.end())
        map.erase(it);
}



//that receives a string corresponding to
//the name of a spell, creates it,
// and returns it.
ASpell* SpellBook::createSpell(std::string const &spell)
{
    if (map.find(spell) != map.end())
    {
        return (map[spell]);
    }
    return (0);
}