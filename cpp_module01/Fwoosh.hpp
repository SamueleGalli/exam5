#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class    Fwoosh : public ASpell
{
    private:
    public:
        Fwoosh();
        Fwoosh(Fwoosh &F);
        Fwoosh &operator=(Fwoosh &F);


        ASpell *clone() const;



        ~Fwoosh();
};

#endif