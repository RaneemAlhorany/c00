#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook 
{

    private:
        // attributes
        Contact contacts[8];
        int contactCount;
        int index;

    public:
        // constructor
        PhoneBook();
        // functions member
        void addContact();
        void displayContacts();
        std::string formatField(std::string str);
        std::string readInput (std::string name );
        void printContact(std::string name , std::string value);
        void displayContactDetails(int index);

        
};
#endif