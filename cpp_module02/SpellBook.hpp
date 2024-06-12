#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>
#include <algorithm>
class    SpellBook
{
    private:
        std::map<std::string, ASpell *> map;
        SpellBook(const SpellBook &SB);
        SpellBook &operator=(const SpellBook &SB);
    public:
        SpellBook();

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spell);
        ASpell* createSpell(std::string const &spell);


        ~SpellBook();
};

#endif