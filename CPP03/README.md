# C++ Module 03
# Introduction
This module introduces inheritance in C++. It creates classes that extend existing ones and learn how constructors and destructors work in an inheritance hierarchy.
# Exercises
## Exercise 00: ClapTrap (Basic Class)
Create a class ClapTrap with:
- Attributes:
    - name (string)
    - hitPoints (10)
    - energyPoints (10)
    - attackDamage (0)
- Functions:
    - attack(const std::string &target);
    - takeDamage(unsigned int amount);
    - beRepaired(unsigned int amount);
- Usage:
```bash
cd ex00
make
./ClapTrap
```
## Exercise 01: ScavTrap (Inheritance)
- Create a derived class ScavTrap that inherits from ClapTrap.
- Modify attributes:
    - hitPoints = 100
    - energyPoints = 50
    - attackDamage = 20
- Add a special function:
    - guardGate(): Prints a message about being in "Gatekeeper mode".
- Usage:
```bash
cd ex01
make
./ScavTrap
```

## Exercise 02: FragTrap (More Inheritance)
- Create another derived class FragTrap from ClapTrap.
- Modify attributes:
    - hitPoints = 100
    - energyPoints = 100
    - attackDamage = 30
- Add a special function:
    - highFivesGuys(): Prints a message requesting a high five.

- Usage:
```bash
cd ex02
make
./FragTrap
```

## Exercise 03:DiamondTrap (Multiple Inheritance)
- Create DiamondTrap, which inherits from both FragTrap and ScavTrap.
- Both FragTrap and ScavTrap inherit from ClapTrap, so they must use virtual inheritance to prevent multiple ClapTrap instances from being created.
- Modify attributes:
    - name (stored in DiamondTrap)
    - ClapTrap::name = name + "_clap_name"
    - hitPoints → From FragTrap
    - energyPoints → From ScavTrap
    - attackDamage → From FragTrap
- Add a special function:
    - void whoAmI(); → Prints both its own name and its ClapTrap name.
- Usage:
```bash
cd ex03
make
./DiamondTrap
```

# Result: 100%

![Result](https://github.com/tranhieutrung/CPP/blob/main/CPP03/CPP03_result.png)
