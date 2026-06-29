//! class :
/*
    ~ A Class is a blueprint or template used to create objects.
    $ Think of a class as a description of something, 
    $ while an object is an actual instance created from 
    $ that description.

    # For example, a university student has:
        Name
        Age
        ID
        and can perform actions such as:
            Display information
            Update information

    ? These properties and behaviors are defined in a class,
    ?  and actual students are represented as objects.

    ~ A class can contain:
        * Data members (variables)
        * Member functions (methods)

    ! Before Object-Oriented Programming (OOP), 
        programs relied heavily on separate variables and 
        functions.
        As projects grew larger, managing related data and 
        functions became difficult.
        A class groups:
            Data
            Functions that operate on that data
        into a single unit


    ! syntax of a class :
        ~~~cpp
        class ClassName
        {
            // data members (variables)
            // member functions (methods)
        };
        ~~~
        
    $ The `class` keyword is used to define a class, followed by 
    $ the class name and a block of code that contains the data
    $ members and member functions.
    $ The class definition ends with a semicolon (;).



    # ex :
    class Student
    {
    };

    ! In this example, we have defined a class named `Student` that currently has no data members or member functions.

    // create an object of the Student class
    int main()
    {
        Student student1;
        return 0;
    }
    // the class `Student` is a blueprint, 
    // `student1` is an object (instance) created from that blueprint.`

///////////////////////////////////////////////////
*/

//! constructors :
    // in the file (constructors.cpp) we have explained the constructors in details
    
//! destructor :
    // in the file (destructor.cpp) we have explained the destructors in details



//! access specifiers :
/*
    // public :  
            is an access specifier that allows members to be accessed from outside the class.
        ! In this example,
                the member function `displayInfo()` is declared as public, 
                which means it can be called from outside the class to display
                the student's information.
                another public member function `setInfo()` is provided to set the
                values of the private data members `name` and `age`.
        ! In the `main()` function, 
            we create an object `student1` of the `Student` class, 
            set its data members, and call the member function to 
            display the information.


    // private : 
            is an access specifier that restricts access to members from outside the class.
        ! In this example, 
            the data members `name` and `age` are declared as private, 
            which means they cannot be accessed directly from outside the class. 
            To set or get these values, we would need to create public member functions
            (getters and setters) that allow controlled access to these private members.

*/
////////////////////////////////////////////////////////////////////////

//! this pointer :
/*
    * The `this` pointer is an implicit pointer available in all non-static member functions of a class.
    * It points to the current object for which the member function is called.
    * The `this` pointer is used to access members of the current object, especially 
    * when there is a naming conflict between member variables and parameters.

    # example of using the `this` pointer :
        class Student
        {
        private:
            std::string name;
            int age;

        public:
            // Constructor
            Student(const std::string& name, int age)
            {
                this->name = name; // Using 'this' to distinguish between member variable and parameter
                this->age = age;   // Using 'this' to distinguish between member variable and parameter
            }

            void displayInfo()
            {
                std::cout << "Name: " << name << std::endl;
                std::cout << "Age: " << age << std::endl;
            }
        };

        int main()
        {
            Student student1("Alice", 20); // Create an object and call the constructor
            student1.displayInfo(); // Display information about the student
            return 0;
        }

    ^ In this example, we use the `this` pointer in the constructor to differentiate between the 
    ^ member variables `name` and `age` and the parameters with the same names. 
    ^ By using `this->name` and `this->age`, we explicitly refer to the member variables of the 
    ^ current object, ensuring that they are correctly initialized with the values passed as parameters.
///////////////////////////////////////////////////////////////////

! in another way :
inside the hader file :
    #ifndef STUDENT_H
    #define STUDENT_H

    #include <string>

    class Student
    {
        private:
            //attributes (data members)
            std::string name;
            int age;

        public:
            // constructor
            Student(); 
            // parameterized constructor
            Student(const std::string& name, int age);
            // destructor
            ~ Student();
            //methods (member functions)
            void displayInfo();
    };

    #endif // STUDENT_H
! note :
    * inside it we dont write (Student::) because we are defining the class and its members,
    * we only use (Student::) when we are implementing the member functions outside the class definition
/////////////////////////////////////////////

inside the cpp file :
    #include "Student.h"
    #include <iostream>

    Student::Student(const std::string& name, int age)
    {
        this->name = name;
        this->age = age;
    }

    Student::~Student()
    {
        // Destructor code (if needed)
    }

    void Student::displayInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

*/

//! summary :
/*  
    ~ 1) A class is a blueprint for objects.
    ~ 2) An object is an instance of a class.
    ~ 3) Variables inside a class are data members.
    ~ 4) Functions inside a class are member functions.
        # The same member function can work with multiple objects.
        # Each object has its own data, but they all share the same function definition.
    ~ 5) public allows external access.
    ~ 6) private restricts external access.
    ~ 7) Constructors run when objects are created.
    ~ 8) Destructors run when objects are destroyed.
    ~ 9) this points to the current object.
    ~ 10) Encapsulation protects internal data and controls access
*/

/////////////////////////////////////////

//! how to create a class in C++ :

/*
dataType NameClass::NameMethod(parameters)
{
    // method body
    ! how to access data members of the class inside the method :
    // this->dataMemberName
}

# if the method returns a value, we can use the return statement to return that value.
dataType NameClass::NameMethod(parameters) const
{
    // method body
    return value; // return the value to the caller
    or 
    return this->dataMemberName; // return the value of a data member
}

*/







