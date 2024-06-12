#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::SpellBook(const SpellBook &SP)
{
    *this = SP;
}

SpellBook &SpellBook::operator=(const SpellBook &SP)
{
    if (this != &SP)
        *this = SP;
    return (*this);
}







SpellBook::~SpellBook()
{
}





//that COPIES a spell in the book
void SpellBook::learnSpell(ASpell *spell)
{
    if (spell != 0)
    {
        std::string name_spell = spell->getName();
        if (this->map.find(name_spell) == this->map.end())
        {
            this->map[name_spell] = spell;
        }

    }
}



//that deletes a spell from the book, except
//  if it isn't there
void SpellBook::forgetSpell(std::string const &spell)
{
    std::map<std::string, ASpell *>::iterator it = this->map.find(spell);
    if (it != this->map.end())
    {
        this->map.erase(it);
    }
}



//that receives a string corresponding to
//the name of a spell, creates it,
// and returns it.
ASpell* SpellBook::createSpell(std::string const &spell)
{
    ASpell *tmp = NULL;
    if (this->map.find(spell) != this->map.end())
    {
        tmp = this->map[spell];
    }
    return (tmp);
}