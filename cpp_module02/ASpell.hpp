#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class    ASpell
{
    private:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(ASpell &S);
        ASpell &operator=(ASpell &S);



        void    launch(const ATarget &T) const;




        ASpell(const std::string &a_n, const std::string &a_e);



        const std::string   &getName() const;
        const std::string   &getEffects() const;




        virtual ASpell  *clone() const = 0;


        virtual ~ASpell();
};

#endif