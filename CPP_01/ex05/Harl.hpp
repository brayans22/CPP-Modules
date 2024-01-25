#include <iostream>

class   Harl
{
    public:
        /* Constructor */
        Harl();

        /* Method */
        void        complain(std::string level);

        /* Destructor */
        ~Harl();
    
    private:
        /* Methods */
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        
};

/* 
   retorno (nombre clase::* nombre_puntero) (los argumentos que reciben todas los metedos de este tipo); 
   en este caso las funciones que agregaremos no recibiran parametros, si una de ellas recibiera 
   no tengo forma de agregarla, ya que deben respetar el mismo prototipo para poder ser guardadas.
*/
typedef void (Harl::* t_harl_function) (void);