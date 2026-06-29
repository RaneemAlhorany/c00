//! Destructor :

/*
    * A destructor is a special member function that is
    * automatically called when an object is destroyed.

    $ Its main purpose is to perform cleanup tasks before
    $ the object is removed from memory.

    *  such as releasing resources or memory that the object may
    *  have acquired during its lifetime.


    ! A destructor has the same name as the class,
    ! preceded by a tilde (~).

    ! A destructor does not have a return type.

    # Syntax :

        class Student
        {
        public:
            ~Student();
        };

////////////////////////////////////////////////////
*/




//! Why Do We Need Destructors ?

/*
    * Destructors are used to release resources that were
    * acquired during the object's lifetime.

    # Examples of resources :

        - Dynamic memory
        - Open files
        - Database connections
        - Network sockets

    $ Without proper cleanup, resources may remain allocated,
    $ causing memory leaks or resource leaks.

////////////////////////////////////////////////////
*/




//! Basic Destructor Example :

/*
    # Example :

        class Student
        {
        public:
            Student()
            {
                std::cout << "Constructor Called" << std::endl;
            }

            ~Student()
            {
                std::cout << "Destructor Called" << std::endl;
            }
        };

        int main()
        {
            Student student1;
        }

    ^ When `student1` is created,
      the constructor is called.

    ^ When `student1` goes out of scope,
      the destructor is called automatically.

////////////////////////////////////////////////////
*/




//! When Is a Destructor Called ?

/*
    * A destructor is automatically called when:

        # An object goes out of scope.

        # A local function object finishes its lifetime.

        # A dynamically allocated object is deleted.

        # The program terminates (for global/static objects).

    # Example :

        void func()
        {
            Student student1;
        }

    ^ When `func()` ends,
      `student1` is destroyed and the destructor runs.

////////////////////////////////////////////////////
*/




//! Destructor and Dynamic Memory :

/*
    * Destructors are commonly used to free dynamically
    * allocated memory.

    # Example :

        class Student
        {
        private:
            int* grade;

        public:
            Student()
            {
                grade = new int(100);
            }

            ~Student()
            {
                delete grade;
            }
        };

    ! If `delete` is not used,
      memory leakage may occur.

////////////////////////////////////////////////////
*/




//! Destructor Characteristics :

/*
    * A class can have only one destructor.

    ! Destructors cannot be overloaded.

    ! Destructors do not accept parameters.

    ! Destructors do not return values.

    # Valid :

        ~Student();

    # Invalid :

        ~Student(int age);

////////////////////////////////////////////////////
*/




//! Constructor vs Destructor :

/*
    * Constructor:
        ^ Called when an object is created.
        ^ Used for initialization.

    * Destructor:
        ^ Called when an object is destroyed.
        ^ Used for cleanup.

    # Example Lifecycle :

        Student student1;

    ^ Constructor executes first.

    ^ Object is used.

    ^ Destructor executes when the object is destroyed.

////////////////////////////////////////////////////
*/




//! Destructor Call Order :

/*
    * Objects are destroyed in the reverse order
    * of their creation.

    # Example :

        Student s1;
        Student s2;
        Student s3;

    ^ Creation Order :
        s1 -> s2 -> s3

    ^ Destruction Order :
        s3 -> s2 -> s1

    ! Last created object is destroyed first.

////////////////////////////////////////////////////
*/

// # example of a destructor :

/*

        class Student
        {
        private:
            std::string name;
            int age;

        public:
            // Constructor
            Student(const std::string& studentName, int studentAge)
            {
                name = studentName;
                age = studentAge;
                std::cout << "Constructor called for " << name << std::endl;
            }

            // Destructor
            ~Student()
            {
                std::cout << "Destructor called for " << name << std::endl;
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
            return 0; // Destructor will be called automatically when student1 goes out of scope
        }

    ^ In this example, we have defined a destructor for the `Student` class that outputs a message when it is called. 
    ^ When the `main()` function ends and `student1` goes out of scope, the destructor is automatically called, 
    ^ and we see the message indicating that the destructor has been invoked for that object.

////////////////////////////////////////////////////////
*/



//! Virtual Destructor :

/*
    * In inheritance, destructors are often declared as `virtual`.

    $ This ensures the correct destructor chain is executed
    $ when deleting derived objects through base class pointers.

    # Example :

        class Animal
        {
        public:
            virtual ~Animal()
            {
            }
        };

    % Without a virtual destructor,
      some derived-class cleanup code may not execute.

    ! Important when using polymorphism.

////////////////////////////////////////////////////
*/




//! Important Notes :

/*
    ! Destructor name starts with (~).

    ! Destructor has no return type.

    ! Destructor is automatically called.

    ! Used for cleanup and resource release.

    ! Only one destructor is allowed per class.

    ! Destructors cannot be overloaded.

    ! Destructors cannot receive parameters.

////////////////////////////////////////////////////
*/




//! Summary :

/*
    ~ A destructor is a special member function.
    ~ It is automatically called when an object is destroyed.
    ~ It performs cleanup operations.
    ~ Its name is the class name preceded by (~).
    ~ It has no return type and no parameters.
    ~ A class can have only one destructor.
    ~ Destructors cannot be overloaded.
    ~ They are commonly used to release dynamic memory.
    ~ Objects are destroyed in reverse order of creation.
    ~ Virtual destructors are important in inheritance.
*/