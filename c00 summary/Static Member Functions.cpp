//! Static Member Functions :

/*
    * A static member function is a function that belongs
    * to the class itself rather than to a specific object.

    $ Unlike regular member functions, a static member function
    $ can be called without creating an object.

    ! Since it belongs to the class, it does not operate on
    ! a specific object.

    # Syntax :

        class Student
        {
        public:
            static void displayMessage();
        };

////////////////////////////////////////////////////
*/




//! Defining a Static Member Function :

/*
    * Static member functions are declared inside the class
    * using the `static` keyword.

    # Example :

        class Student
        {
        public:
            static void displayMessage();
        };

        void Student::displayMessage()
        {
            std::cout << "Welcome Students" << std::endl;
        }

    $ The implementation is similar to regular member functions.

////////////////////////////////////////////////////
*/




//! Calling a Static Member Function :

/*
    * Since static member functions belong to the class,
    * they can be called directly using the class name.

    # Example :

        Student::displayMessage();

    $ No object is required.

    # Object call (allowed) :

        Student student1;
        student1.displayMessage();

    ! Although this works, using the class name is preferred.

////////////////////////////////////////////////////
*/




//! Accessing Class Members :

/*
    * A static member function can directly access:

        # Static attributes
        # Other static member functions

    ! A static member function cannot directly access
    ! non-static data members or non-static member functions.

    ? Why?

        ^ Because non-static members belong to specific objects,
        ^ while static functions are not associated with any object.

////////////////////////////////////////////////////
*/




//! Example :

/*
    class Student
    {
    public:
        static int studentsCount;

        static void displayCount()
        {
            std::cout << studentsCount << std::endl;
        }
    };

    int Student::studentsCount = 0;

    int main()
    {
        Student::studentsCount = 5;

        Student::displayCount();

        return 0;
    }

    ^ The static function accesses the static attribute
    ^ because both belong to the class itself.

////////////////////////////////////////////////////
*/




//! Static Functions and this Pointer :

/*
    ! Static member functions do NOT have a `this` pointer.

    ? Why?

        ^ The `this` pointer refers to the current object.

        ^ Since static functions are not called for a specific
        ^ object, there is no current object to reference.

    # Invalid Example :

        static void displayInfo()
        {
            std::cout << this->name;
        }

    ! This will cause a compilation error.

////////////////////////////////////////////////////
*/




//! Common Use Cases :

/*
    * Accessing static attributes.

    * Managing shared class information.

    * Creating utility/helper functions related to the class.

    * Returning statistics about all objects.

    # Example :

        class Student
        {
        public:
            static int getStudentsCount()
            {
                return studentsCount;
            }
        };

////////////////////////////////////////////////////
*/




//! Important Notes :

/*
    ! Static member functions belong to the class.

    ! They can be called without creating objects.

    ! They can directly access only static members.

    ! They do not have a `this` pointer.

    ! They cannot directly access non-static members.

////////////////////////////////////////////////////
*/




//! Summary :

/*
    ~ Static member functions belong to the class itself.
    ~ They are declared using the `static` keyword.
    ~ They can be called using:
        ClassName::FunctionName()
    ~ No object is required to call them.
    ~ They can access static attributes and static functions.
    ~ They cannot directly access non-static members.
    ~ They do not have a `this` pointer.
    ~ Commonly used for class-wide operations and statistics.
*/