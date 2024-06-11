#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class    Warlock
{
    private:
        std::string name;
        std::string title;



        Warlock();
        Warlock(Warlock &W);
        Warlock &operator=(Warlock &W);
    public:
        Warlock(const std::string &n_w, const std::string &t_w);

        void    introduce() const;


        const std::string   &getName() const;
        const std::string   &getTitle() const;


        void    setTitle(const std::string &t_w);



        ~Warlock();
};

#endif