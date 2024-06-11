#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;


class    ATarget
{
    private:
            std::string type;
    public:
        ATarget();
        ATarget(ATarget &T);
        ATarget &operator=(ATarget &T);



        void    getHitBySpell(const ASpell &spell) const;



        virtual ATarget *clone() const = 0;


        const std::string       &getType() const;



        ATarget(const std::string &type);


        virtual ~ATarget();
};

#endif