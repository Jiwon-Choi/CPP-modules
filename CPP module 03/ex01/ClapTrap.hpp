#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

# include <iostream>
# include <string>

# define CT_MAX_HP 10

class ClapTrap {
    protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

    public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& ref);
    ~ClapTrap(void);

    ClapTrap& operator=(const ClapTrap& ref);

    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
