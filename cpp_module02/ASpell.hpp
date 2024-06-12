#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class    ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(const ASpell &S);
        ASpell &operator=(const ASpell &S);



        void    launch(const ATarget &T) const;




        ASpell(const std::string &a_n, const std::string &a_e);



        std::string   getName() const;
        std::string   getEffects() const;




        virtual ASpell  *clone() const = 0;


        virtual ~ASpell();
};

#endif