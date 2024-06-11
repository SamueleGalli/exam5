#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <algorithm>
#include <map>

class    Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *>   map;
        SpellBook   book;


        Warlock();
        Warlock(Warlock &W);
        Warlock &operator=(Warlock &W);
    public:
        Warlock(const std::string &n_w, const std::string &t_w);

        void    introduce() const;


        const std::string   &getName() const;
        const std::string   &getTitle() const;


        void    setTitle(const std::string &t_w);



        void    learnSpell(ASpell *spell);
        void    forgetSpell(std::string spell);
        void    launchSpell(std::string spell_name, const ATarget &at);

        ~Warlock();
};

#endif