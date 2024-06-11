#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include "ATarget.hpp"
#include <map>
#include <algorithm>
class    TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator &TG);
        TargetGenerator &operator=(TargetGenerator &TG);
        std::map<std::string, ATarget *>    map;
    public:
        TargetGenerator();



        void    learnTargetType(ATarget *target);
        void    forgetTargetType(std::string const &target);
        ATarget* createTarget(std::string const &target);



        ~TargetGenerator();
};

#endif