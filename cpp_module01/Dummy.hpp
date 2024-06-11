#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class    Dummy : public ATarget
{
    private:
    public:
        Dummy();
        Dummy(Dummy &D);
        Dummy &operator=(Dummy &D);


        ATarget *clone() const;



        ~Dummy();
};

#endif