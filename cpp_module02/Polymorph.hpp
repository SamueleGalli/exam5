#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include "ASpell.hpp"

class    Polymorph : public ASpell
{
    private:
    public:
        Polymorph();
        Polymorph(Polymorph &P);
        Polymorph &operator=(Polymorph &P);


        ASpell *clone() const;



        ~Polymorph();
};

#endif