#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8
# define MAX_CONTACT_INDEX 7

class PhoneBook {

    private:
        size_t count;
		Contact contacts[MAX_CONTACTS];

    public:

       /* Constructor */
       PhoneBook();

       /* Methods */
       void addContact(void);
       void searchContact(void);

    private:
        bool containsNumbers(std::string str);
        int isValidNumber(std::string number);
};

#endif // _PHONEBOOK_HPP