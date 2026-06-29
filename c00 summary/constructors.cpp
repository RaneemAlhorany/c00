//! Constructor :


/*
    * A constructor is a special member function that is
    * automatically called when an object is created.

    $ Its main purpose is to initialize the object's data members.

    ! A constructor has the same name as the class.

    ! A constructor does not have a return type,
    ! not even `void`.

    # Syntax :

        class Student
        {
        public:
            Student();
        };

////////////////////////////////////////////////////
*/




//! Why Do We Need Constructors ?

/*
    * Constructors allow objects to start in a valid state.

    $ Instead of assigning values after creating an object,
    $ we can initialize them immediately.

    # Without Constructor :

        Student student1;
        student1.setName("Ali");

    # With Constructor :

        Student student1("Ali");

    ^ The object is initialized as soon as it is created.

////////////////////////////////////////////////////
*/




//! Default Constructor :

/*
    * A default constructor is a constructor that takes
    * no parameters.

    # Example :

        class Student
        {
        public:
            Student()
            {
                std::cout << "Student Created" << std::endl;
            }
        };

        int main()
        {
            Student student1;
        }

    ^ The constructor is automatically called when
    ^ `student1` is created.

////////////////////////////////////////////////////
*/




//! Parameterized Constructor :

/*
    * A parameterized constructor accepts one or more
    * parameters to initialize the object.

    # Example :

        class Student
        {
        private:
            std::string name;
            int age;

        public:
            Student(std::string name, int age)
            {
                this->name = name;
                this->age = age;
            }
        };

        int main()
        {
            Student student1("Ali", 20);
        }

    $ The provided values are used to initialize
    $ the object's data members.

////////////////////////////////////////////////////
*/




//! Constructor Overloading :

/*
    * A class can have multiple constructors.

    $ Each constructor must have a different parameter list.

    # Example :

        class Student
        {
        public:
            Student();

            Student(std::string name);

            Student(std::string name, int age);
        };

    ^ The compiler chooses the appropriate constructor
    ^ based on the arguments provided.

////////////////////////////////////////////////////
*/




//! Constructor and this Pointer :

/*
    * Constructors often use the `this` pointer to distinguish
    * between data members and parameters.

    # Example :

        Student(std::string name, int age)
        {
            this->name = name;
            this->age = age;
        }

    ? Why use `this` ?

        ^ Because both the parameter and the data member
        ^ have the same name.

////////////////////////////////////////////////////
*/




//! Constructor Initialization List :

/*
    * C++ provides a more efficient way to initialize
    * data members called the Initialization List.

    # Example :

        Student(std::string name, int age)
            : name(name), age(age)
        {
        }

    $ The data members are initialized directly.

    % This is usually more efficient than assigning
      values inside the constructor body.

////////////////////////////////////////////////////
*/




//! Constructor Call Order :

/*
    * Constructors are called automatically when an object
    * is created.

    # Example :

        Student student1;

    ^ The constructor executes before the object
    ^ starts being used.

    ! A constructor cannot be called manually like
    ! a normal member function.

////////////////////////////////////////////////////
*/
//  # example of a constructor :
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

    ^ In this example, we have defined a constructor for the `Student` class that takes two parameters: `studentName` and `studentAge`. 
    ^ When we create an object `student1` of the `Student` class, we pass the name and age as arguments to the constructor, which initializes the data members. 
    ^ We can then call the `displayInfo()` member function to display the student's information.
///////////////////////////////////////////////////
*/




//! Important Notes :

/*
    ! Constructor name must match the class name.

    ! Constructors have no return type.

    ! Constructors are called automatically.

    ! Constructors are used for object initialization.

    ! A class may have multiple constructors.

    ! Constructors can be overloaded.

////////////////////////////////////////////////////
*/




//! Summary :

/*
    ~ A constructor is a special member function.
    ~ It is automatically called when an object is created.
    ~ It initializes the object's data members.
    ~ It has the same name as the class.
    ~ It has no return type.
    ~ A class can have multiple constructors.
    ~ Constructors can be overloaded.
    ~ `this` is often used inside constructors.
    ~ Initialization Lists provide direct initialization.
*/