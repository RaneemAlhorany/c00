//! Encapsulation :

/*
    * Encapsulation is one of the fundamental principles
    * of Object-Oriented Programming (OOP).

    $ It means bundling data (attributes) and the functions
    $ that operate on that data into a single unit called a class.

    $ It also means hiding internal implementation details
    $ and controlling access to the object's data.

    ? Why is Encapsulation important?

        ^ It protects data from unauthorized access.

        ^ It prevents accidental modification of object data.

        ^ It makes code easier to maintain and modify.

////////////////////////////////////////////////////
*/




//! How Encapsulation Works :

/*
    * Encapsulation is achieved using access specifiers.

    # private :
        ^ Data can only be accessed inside the class.

    # public :
        ^ Functions can be accessed from outside the class.

    $ Typically, data members are declared as private,
    $ while public member functions are used to interact
    $ with those data members.

////////////////////////////////////////////////////
*/




//! Example of Encapsulation :

/*
    # Example :

        class Student
        {
        private:
            std::string name;
            int age;

        public:
            void setName(std::string name)
            {
                this->name = name;
            }

            std::string getName()
            {
                return name;
            }
        };

    ! External code cannot directly access `name`.

    # Invalid :

        Student s1;
        s1.name = "Ali";

    ^ This will cause a compilation error because
      `name` is private.

////////////////////////////////////////////////////
*/




//! Getters and Setters :

/*
    * Getters and Setters are public functions used
    * to access private data safely.

    # Setter :
        ^ Used to assign a value.

    # Getter :
        ^ Used to retrieve a value.

    # Example :

        void setAge(int age)
        {
            this->age = age;
        }

        int getAge()
        {
            return age;
        }

    $ These functions provide controlled access
    $ to private data members.

////////////////////////////////////////////////////
*/




//! Data Protection :

/*
    * Encapsulation allows validation before modifying data.

    # Example :

        void setAge(int age)
        {
            if (age > 0)
                this->age = age;
        }

    ! Invalid values can be rejected.

    ^ This helps maintain object integrity.

////////////////////////////////////////////////////
*/




//! Encapsulation Benefits :

/*
    * Better Security.

    * Better Data Protection.

    * Easier Maintenance.

    * Improved Code Organization.

    * Reduced Dependency Between Components.

    $ Internal implementation can change without affecting
    $ code that uses the class.

////////////////////////////////////////////////////
*/




//! Real-Life Example :

/*
    # ATM Machine :

        ^ You interact with buttons and options.

        ^ You do not know how the internal system works.

    $ The ATM hides its internal implementation and
    $ exposes only the operations you are allowed to use.

    ? This is exactly how encapsulation works in OOP.

////////////////////////////////////////////////////
*/




//! Encapsulation vs Direct Access :

/*
    # Without Encapsulation :

        class Student
        {
        public:
            int age;
        };

    ! Any code can modify age freely.

    # With Encapsulation :

        class Student
        {
        private:
            int age;

        public:
            void setAge(int age);
            int getAge();
        };

    ^ Access is controlled and protected.

////////////////////////////////////////////////////
*/




//! Important Notes :

/*
    ! Encapsulation combines data and methods into one unit.

    ! Private members cannot be accessed directly from outside.

    ! Public functions provide controlled access.

    ! Getters and Setters are commonly used.

    ! Encapsulation improves security and maintainability.

////////////////////////////////////////////////////
*/




//! Summary :

/*
    ~ Encapsulation is an OOP principle.
    ~ It bundles data and functions inside a class.
    ~ It hides internal implementation details.
    ~ private restricts direct access to data.
    ~ public provides controlled access.
    ~ Getters retrieve data.
    ~ Setters modify data safely.
    ~ Encapsulation protects object integrity.
    ~ It improves security, organization, and maintainability.
*/