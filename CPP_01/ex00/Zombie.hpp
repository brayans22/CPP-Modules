#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>

class Zombie 
{
    private:
        /* Atribute */
		std::string name;

	public:

        /* Constructor */
		Zombie();

        /* Constructor with parameters */
		Zombie(std::string name);

        /* Setter */
        void setName(std::string newName);

        /* Method*/
        void announce() const;

        /* Destructor */
		~Zombie();
};

#endif