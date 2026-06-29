 //! getline
 /*
    ? to read a string with spaces
    # syntax :
        getline(cin, variable_name);
    # example :
        string my_string;
        cout << "Enter a string: ";
        getline(cin, my_string);
        cout << "You entered: " << my_string << endl;
    % if you have some problems with getline() function, you can use the 
    % cin.ignore() function to ignore the newline character left in the input 
    % buffer by the previous input operation
        cin.ignore(1, '\n'); 
        getline(cin, variable_name);

*/

//////////////////////////////////////////////////////

//! length() :
/*
    ? returns the length of the string
    string my_string = "Hello, World!";
    int length = my_string.length(); // length will be 13
*/


///////////////////////////////////////////////////////////

//! substr() :
/*
    ? returns a substring of the string
    # syntax :
        string substr (size_t pos = 0, size_t len = npos) const;
    # example :
        string my_string = "Hello, World!";
        string sub_string = my_string.substr(7, 5); // sub_string will be "World"

*/

////////////////////////////////////////////////////


//! setw() : manipulator from <iomanip> header
/*
    ? sets the width of the next input/output field
    # syntax :
        setw(int n);
    # example :
        cout << setw(10) << "Hello" << endl; // will print "     Hello"
        cout << setw(5) << "42 amman and 42 irbid" << endl; 
        // will print "42 amman and 42 irbid" without truncation because the width is less than the string length
*/

///////////////////////////////////////////////////////

//! stringstream : from <sstream> header
/*
    ? allows you to read and write strings as if they were streams
    # example :
        string choice;
        int index;
        cout << "Enter a number: ";
        std::getline(std::cin, choice); // read the input as a string
        std::stringstream ss(choice); // create a stringstream object from the input string to parse it
        ss >> index; // extract the integer from the stringstream
        cout << "You entered: " << index << endl;
*/

/////////////////////////////////////////////////////////


//! object_String.empty()
/*
    ? returns true if the string is empty, false otherwise
    # example :
        string my_string = "";
        if (my_string.empty()) {
            cout << "The string is empty." << endl;
        } else {
            cout << "The string is not empty." << endl;
        }
*/

//////////////////////////////////////////////////////////

//! object_String.find_first_not_of("characters")
/*
    ? returns the index of the first character in the string that is not in the specified set of characters
    # syntax :
        size_t find_first_not_of (const string& str, size_t pos = 0) const;
    # example :
        string my_string = "   Hello, World!";
        size_t index = my_string.find_first_not_of(" "); // index will be 3
    ? note : 
        if it returns (std::string::npos), it means that all characters in the string are
         in the specified set of characters
        example :
            string my_string = " 42 ";
            size_t index = my_string.find_first_not_of("kjbgkfjbkdbjg");
             // index will be std::string::npos     
             // because all characters in the string are in the specified set of characters

*/


