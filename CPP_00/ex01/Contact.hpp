#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>

class Contact {

    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

    public:

        // Constructor
        Contact();

        // Getters
        const std::string&	getFirstName(void) const;
        const std::string&	getLastName(void) const;
        const std::string&	getNickname(void) const;
        const std::string&	getPhoneNumber(void) const;
        const std::string&	getDarkestSecret(void) const;

        // Setters
        void setFirstName(std::string firstName);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkestSecret);
        void setLastName(std::string lastName);
        void setNickName(std::string nickName);

        // Destructor
        ~Contact();
};


#endif // _CONTACT_HPP_