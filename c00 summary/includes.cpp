#include <iostream>
/*
    # it is a header file that contains the definitions 
    # of the input and output stream objects

    ~ iostream
        = Input Output Stream

    ~ using for :
        = cin :  Character Input    
        = cout : Character Output
        = endl : End Line
    ~ how to use :
        std::cout << "Hello, World!" << std::endl;
        std::cin >> variable;
        std::cout << "You entered: " << variable << std::endl;
*/

/////////////////////////////////////////////////////////////////////////

#include <cctype>
/*
    # it is a header file that contains functions to 
    # classify and transform individual characters
     ~ cctype
        = character handling functions

     ~ using for :
        = isalpha()
        = isdigit()
        = isalnum()
        = isspace()
        = toupper()
            % note : toupper() is used to convert a character to uppercase,
            % and it returns the uppercase equivalent if the character is a lowercase letter. 
            % If the character is not a lowercase letter, it returns the character unchanged.
            $ when you use toupper() or tolower(), make sure to include the <cctype> header 
            $ and use the std:: namespace, as these functions are part of the C++ standard library.      
        = tolower()

        ! note for (toupper() and tolower()) :
            ? make sure use casting to char when using toupper() or tolower() functions, 
            ? because these functions return an int, 
            ? and if you directly assign the result to a char variable without casting,
            ? it may lead to unexpected behavior or incorrect results, 
            ? since the char variable may not be able to hold the full range of 
            ? values returned by toupper() or tolower().
             * for example: 
                char ch = 'a';
                char upperCh = std::toupper(ch); // This may cause issues because toupper() returns an int.
            ! to avoid this, you should cast the result back to char:
                char upperCh = std::toupper(static_cast<char>(ch)); // This is the correct way to use toupper().
            ! the same applies to tolower() function as well, since it also returns an int.
                 char lowerCh = std::tolower(static_cast<char>(ch)); // This is the correct way to use tolower().
                * in summary, when using toupper() or tolower(), always remember to cast the result back to char to
                * ensure you get the correct character output,

    ~ how to use :
        char ch = 'A';
        if (std::isalpha(ch)) {
            std::cout << ch << " is an alphabetic character." << std::endl;
        }
        char ch2 = '1';
        if (std::isdigit(ch2)) {
            std::cout << ch2 << " is a digit." << std::endl;
        }
        char ch3 = 'A';
        if (std::isalnum(ch3)) {
            std::cout << ch3 << " is an alphanumeric character." << std::endl;
        }
        char ch4 = ' ';
        if (std::isspace(ch4)) {
            std::cout << "The character is a whitespace character." << std::endl;
        }
        char ch5 = 'a';
        char ch6 = std::toupper(ch5);
        std::cout << "Uppercase of " << ch5 << " is " << ch6 << std::endl;

*/


/////////////////////////////////////////////////

#include <ctime>
/*
    # it is a header file that contains functions to manipulate and format date and time information
     ~ ctime
        = C Time Library

     ~ using for :
        = time()
        = localtime()
        = gmtime()
        = mktime()
        = difftime()
        = asctime()
        = ctime()

     ~ how to use :
        std::time_t currentTime = std::time(nullptr); // Get the current time
        std::cout << "Current time: " << std::ctime(&currentTime) << std::endl; // Convert to string and print
*/



