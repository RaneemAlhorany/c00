
#include "PhoneBook.hpp"

// Constructor
PhoneBook::PhoneBook()
{
    contactCount = 0;
    index = 0;
}    


void checkInput(std::string &input, const std::string &name)
{
    while (input.empty())
    {
        std::cout << name << " cannot be empty. Please enter " << name << ": ";
        std::getline(std::cin, input);
    }
}


std::string PhoneBook::readInput (std::string name )
{
    std::string input;
    std::cout << "Enter " << name  << ":";
    std::getline(std::cin, input);
    if (name == "Phone Number")
    {
        while (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
        {
            std::cout << name << " must be a valid number. Please enter " << name << ": ";
            std::getline(std::cin, input);
        }
    }else
        checkInput(input, name);

    return (input);
}


void PhoneBook::addContact()
{
   
    contacts[index].setFirstName(readInput("First Name"));
    contacts[index].setLastName(readInput("Last Name"));
    contacts[index].setNickName(readInput("Nickname"));
    contacts[index].setPhoneNumber(readInput("Phone Number"));
    contacts[index].setDarkestSecret(readInput("Darkest Secret"));
    
    if (contactCount < 8)
        contactCount++;
    
    index = (index + 1) % 8; // Ensure index wraps around after reaching 8
}



std::string PhoneBook::formatField(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";

    return str;
}


void PhoneBook::displayContacts()
{

    std::cout << std::setw(10) << "Index"
          << "|"
          << std::setw(10) << "First Name"
          << "|"
          << std::setw(10) << "Last Name"
          << "|"
          << std::setw(10) << "Nickname"
          << std::endl;


    for (int i = 0; i < contactCount; i++)
    {
        std::cout << std::setw(10) << i
          << "|"
          << std::setw(10) << formatField(contacts[i].getFirstName())
          << "|"
          << std::setw(10) << formatField(contacts[i].getLastName())
          << "|"
          << std::setw(10) << formatField(contacts[i].getNickName())
          << std::endl;
    }
}

void PhoneBook::printContact(std::string name , std::string value)
{
    std::cout << name << ": "
    << value
    << std::endl;
}


void PhoneBook::displayContactDetails(int index)
{
    if (index >= 0 && index < contactCount)
    {
        printContact("First Name", contacts[index].getFirstName());
        printContact("Last Name", contacts[index].getLastName());
        printContact("Nickname", contacts[index].getNickName());
        printContact("Phone Number", contacts[index].getPhoneNumber());
        printContact("Darkest Secret", contacts[index].getDarkestSecret());
    }else
    {
        std::cout << "Invalid index. Please try again." << std::endl;
    }
}







