#include <iostream>
#include <string>
#include "Zombie.hpp"

/* Constructors */
Zombie::Zombie() : name("") {}

Zombie::Zombie(std::string name) : name(name) {}

/* Constructor with parameters */
Zombie::Zombie(std::string name) {
    this -> name = name;
}

/* Setter */
void Zombie::setName(std::string newName) {
    this -> name = newName;
}

/* Method*/
void Zombie::announce() const {
    std::cout << this -> name ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* Destructor */
Zombie::~Zombie() {
    std::cout  << "Zombie: " << this->name << " died!" << std::endl;
}