# C++ Module 01
# Introduction
This module introduces basic C++ concepts, focusing on memory allocation, pointers, references, and the switch statement. 

# Exercises
## Exercise 00: Zombie Introduction
- Create a Zombie class with a name attribute.
- Implement a function announce() that prints: 
```
<name>: BraiiiiiiinnnzzzZ...
```
- Implement two functions:
    - newZombie(std::string name): Creates a zombie on the heap.
    - randomChump(std::string name): Creates a zombie on the stack and announces it.
- Usage:
```bash
cd ex00
make
./Zombie
```
## Exercise 01: Zombie Horde
- Implement zombieHorde to creates N zombies at once.
- Ensure proper memory management (no memory leaks).
- Usage:
```bash
cd ex01
make
./ZombieHorde
```

## Exercise 02: Pointers and References
- Create a pointer and a reference to this string.
- Print their memory addresses and values to understand the difference between pointers and references.
- Usage:
```bash
cd ex02
make
./Address
```

## Exercise 03: Weapons and Humans
- Create a Weapon class with getType() and setType().
- Implement two classes:
    - HumanA: Always has a weapon (passed in the constructor).
    - HumanB: Can have a weapon, but it’s optional.
- Both should have an attack() function that prints:
```
<name> attacks with their <weapon type>
```
- Usage:
```bash
cd ex03
make
./Weapon
```
## Exercise 04: Text Replacement
- Create a program that takes a filename and two strings (s1, s2).
- Replace all occurrences of s1 with s2 and save to a new file <filename>.replace.
- Do not use std::string::replace() and C file manipulation functions is.
- Usage:
```bash
cd ex04
make
./Replace
```
## Exercise 05: Harl’s Complaints
- Create a Harl class with four private functions: debug(), info(), warning(), and error().
- Implement a complain(std::string level) function that calls the corresponding function based on level.
- Use function pointers instead of multiple if-else statements.
- Usage:
```bash
cd ex05
make
./Harl
```

## Exercise 06: Filtering Harl’s Complaints
- Modify the Harl class to filter messages based on severity level.
- Use a switch statement to determine which messages to print.
```bash
cd ex06
make
./harlFilter
```
# Result: 100%

![Result](https://github.com/tranhieutrung/CPP/blob/main/CPP01/CPP01_result.png)
