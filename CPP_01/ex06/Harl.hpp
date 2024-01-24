#include <iostream>

class   Harl
{
    public:
        /* Constructor */
        Harl();

        /* Method */
        void        activateFilter(std::string level);

        /* Destructor */
        ~Harl();
    
    private:
        /* Methods */
        void    greet(void);
        void    order(void);
        void    warning(void);
        void    error(void);
        
};