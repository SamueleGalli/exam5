#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;


class    ATarget
{
    protected:
            std::string type;
    public:
        ATarget();
        ATarget(const ATarget &T);
        ATarget &operator=(const ATarget &T);



        void    getHitBySpell(const ASpell &spell) const;



        virtual ATarget *clone() const = 0;


        std::string       getType() const;



        ATarget(std::string type_t);


        virtual ~ATarget();
};

#endif