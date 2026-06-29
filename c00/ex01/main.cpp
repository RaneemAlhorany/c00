
#include "PhoneBook.hpp"
#include <sstream>



void implementOperations(PhoneBook phoneBook)
{
    std::string choice;
    int index;

    while (1) 
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, choice);

        for (int j = 0; choice[j]; j++)
            choice[j] = static_cast<char>(std::toupper(choice[j]));

        if (choice == "ADD") 
            phoneBook.addContact();
        else if (choice == "SEARCH") 
        {
            phoneBook.displayContacts();
            std::cout << "Enter the index of the contact to view details: ";
            std::getline(std::cin, choice);
            std::stringstream ss(choice);
            ss >> index;
            phoneBook.displayContactDetails(index);
        } 
        else if (choice == "EXIT") 
            break;
        else 
            std::cout << "Invalid command. Please try again." << std::endl;
    }
}

int main() 
{
    PhoneBook phoneBook;

    implementOperations(phoneBook);

    return 0;
}

