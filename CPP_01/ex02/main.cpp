#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPtr = &str;
    std::string &stringRef = str;

    std::cout << "The memory address of the string: " << &str << std::endl;
    std::cout << "The memory address held by: " << stringPtr << std::endl;
    std::cout << "The memory address held by: " << &stringRef << std::endl;

    std::cout << "Value String Variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPtr << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringRef << std::endl;

    return (0);
}