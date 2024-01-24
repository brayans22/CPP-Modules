#include <iostream>
#include "Contact.hpp"

// Constructor
Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {}

// Getters
const std::string&	Contact::getFirstName(void) const
{
    return (this -> firstName);
}

const std::string&	Contact::getLastName(void) const
{
    return (this -> lastName);
}

const std::string&	Contact::getNickname(void) const
{
    return (this -> nickName);
}

const std::string&	Contact::getPhoneNumber(void) const
{
    return (this -> phoneNumber);
}

const std::string&	Contact::getDarkestSecret(void) const
{
    return (this -> darkestSecret);
}

void Contact::setFirstName(std::string firstName)
{
    this -> firstName = firstName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this -> phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this -> darkestSecret = darkestSecret;
}

void Contact::setLastName(std::string lastName)
{
    this -> lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
    this -> nickName = nickName;
}

Contact::~Contact(){}
