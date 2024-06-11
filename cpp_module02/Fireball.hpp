#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"

class    Fireball : public ASpell
{
    private:
    public:
        Fireball();
        Fireball(Fireball &F);
        Fireball &operator=(Fireball &F);


        ASpell *clone() const;



        ~Fireball();
};

#endif