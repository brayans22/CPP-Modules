#include "PhoneBook.hpp"
#include <iostream>

/*

using std::cout;
using std::cin;
using std::endl;

*/

int PhoneBook::isValidNumber(std::string number)
{
    int i;

    i = -1;
    while (number[i])
    {
        if (!std::isdigit(number[++i]))
            return (0);
    }
    return 1;
}

void display_contact_info(Contact contact)
{
	std::cout << std::endl;
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

// Default constructor
PhoneBook::PhoneBook() { this -> count = 0; };

void PhoneBook::addContact(void)
{
	Contact	new_contact;
	std::string	input;

	std::cout << "First name? ";
	getline(std::cin, input);
	new_contact.setFirstName(input);

	std::cout << "Last name? ";
	getline(std::cin, input);
	new_contact.setLastName(input);

	std::cout << "Nickname? ";
	getline(std::cin, input);
	new_contact.setNickName(input);

	while (1)
	{
		std::cout << "Phone number? ";
		getline(std::cin, input);
		if (!input.empty() && !isValidNumber(input)) 
		{
			std::cin.clear();
			std::cout << "Phone number has to be numbers" << std::endl;
		}
	}

	std::cout << "Darkest secret? ";
	getline(std::cin, input);
	new_contact.setDarkestSecret(input);

	if (count > MAX_CONTACT_INDEX)
		this->contacts[count - 1] = new_contact;
	else
	{
		this->count += 1;
		this->contacts[count - 1] = new_contact;
	}
	std::cout << "Contact has been added correctly!!! " << std::endl;
}

void PhoneBook::searchContact(void)
{
	if (count == 0)
	{
		std::cout << "There are no contacts to display! ❌" << std::endl;
		return ;
	}
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (size_t i = 0; i < this->count; i++)
	{
		std::cout << "|" << i << "|";
		std::cout << contacts[i].getFirstName() << "|";
        std::cout << contacts[i].getLastName() << "|";
        std::cout <<  contacts[i].getNickname() << "|";
		std::cout << std::endl;
	}

	std::string index;
	int conv_index;

	while (1)
	{
		std::cout << "Please insert the contact index: ";
		getline(std::cin, index);
        
		std::cin.clear();
		std::cout << "Invalid input" << std::endl;
	}
	if ((size_t)conv_index > (count - 1))
		std::cout << "index not founded" << std::endl;
	else
		display_contact_info(this->contacts[conv_index]);
}