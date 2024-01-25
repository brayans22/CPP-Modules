#include "PhoneBook.hpp"
#include <iostream>

int PhoneBook::isValidNumber(std::string number)
{
    for (int i = 0; number[i]; i++)
    {
        if (!std::isdigit(number[i]))
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
PhoneBook::PhoneBook() : count(0){}

bool PhoneBook::containsNumbers(std::string str)
{
	int i = 0;
	bool contains = 0;

	while (!contains && str[i])
	{
		contains = isdigit(str[i]);
		i++;
	}
	return (contains);
}

void PhoneBook::addContact(void)
{
	Contact	new_contact;
	std::string	input = "";

	while (input.empty() || containsNumbers(input))
	{
		std::cout << "First name? ";
		getline(std::cin, input);
	}
	new_contact.setFirstName(input);

	input = "";
	while (input.empty() || containsNumbers(input))
	{
		std::cout << "Last name? ";
		getline(std::cin, input);
	}
	new_contact.setLastName(input);

	input = "";
	while (input.empty())
	{
		std::cout << "Nickname? ";
		getline(std::cin, input);
	}
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
		else
			break ;
	}

	input = "";
	while (input.empty())
	{
		std::cout << "Darkest secret? ";
		getline(std::cin, input);
	}
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
	std::string index_str;

	if (count == 0)
	{
		std::cout << "There are no contacts to display!" << std::endl;
		return ;
	}

	std::cout << "\n|Index|First Name| Last Name|  Nickname|" << std::endl;
	for (size_t i = 0; i < this->count; i++)
	{
		std::cout << "|" << i << "|";
		std::cout << contacts[i].getFirstName() << "|";
        std::cout << contacts[i].getLastName() << "|";
        std::cout <<  contacts[i].getNickname() << "|";
		std::cout << std::endl;
	}

	while (1)
	{
		std::cout << "Please insert the contact index: ";
		getline(std::cin, index_str);
        
		if (stoi(index_str) > (int)(count - 1))
			std::cout << "index not founded" << std::endl;
		else	
		{
			display_contact_info(this->contacts[stoi(index_str)]);
			break ;
		}	
	}
}