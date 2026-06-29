//! Const Member Functions :

/*
    * A const member function is a member function that
    * promises not to modify the object's data members.

    $ It is declared by placing the keyword `const`
    $ after the function parameter list.

    # Syntax :

        returnType functionName(parameters) const;

    ! The `const` keyword becomes part of the function signature.

////////////////////////////////////////////////////
*/




//! Why Use Const Member Functions ?

/*
    * They protect object data from accidental modification.

    * They make the code safer and easier to understand.

    * They allow member functions to be called on
      const objects.

    $ When a function is marked as const, the compiler
    $ ensures that no object data is modified inside it.

////////////////////////////////////////////////////
*/




//! Basic Example :

/*
    # Example :

        class Student
        {
        private:
            std::string name;

        public:
            std::string getName() const
            {
                return name;
            }
        };

    ^ The function only returns data and does not
      modify any data member.

    ! Therefore, it should be marked as const.

////////////////////////////////////////////////////
*/




//! What Happens Inside a Const Function ?

/*
    * Inside a const member function, the object is
    * treated as read-only.

    ! Modifying data members is not allowed.

    # Invalid Example :

        class Student
        {
        private:
            int age;

        public:
            void setValue() const
            {
                age = 20;
            }
        };

    ! This causes a compilation error because
      a const function cannot modify object data.

////////////////////////////////////////////////////
*/




//! Accessing Data Members :

/*
    * Const member functions can read data members.

    * Const member functions cannot modify data members.

    # Valid :

        int getAge() const
        {
            return age;
        }

    # Invalid :

        int getAge() const
        {
            age++;
            return age;
        }

////////////////////////////////////////////////////
*/




//! Const Objects :

/*
    * A const object can only call const member functions.

    # Example :

        const Student student1;

    # Valid :

        student1.getName();

    # Invalid :

        student1.setName("Ali");

    ? Why?

        ^ Because a const object must remain unchanged.

////////////////////////////////////////////////////
*/




//! Example :

/*
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

        std::string getName() const
        {
            return name;
        }

        int getAge() const
        {
            return age;
        }
    };

    int main()
    {
        const Student student1("Ali", 20);

        std::cout << student1.getName() << std::endl;
        std::cout << student1.getAge() << std::endl;

        return 0;
    }

    ^ Both functions are const,
      so they can be called using a const object.

////////////////////////////////////////////////////
*/




//! Const and this Pointer :

/*
    * In a const member function, the `this` pointer
    * becomes a pointer to a const object.

    # Normal Function :

        Student* const this;

    # Const Function :

        const Student* const this;

    $ Therefore, object data cannot be modified.

////////////////////////////////////////////////////
*/




//! When Should We Use Const ?

/*
    * Whenever a member function does not modify
      object data.

    # Common Examples :

        getName()

        getAge()

        displayInfo()

        calculateTotal()

    ! Marking such functions as const is considered
      good programming practice.

////////////////////////////////////////////////////
*/




//! Important Notes :

/*
    ! Const member functions cannot modify data members.

    ! Const member functions can read data members.

    ! Const objects can only call const member functions.

    ! The keyword `const` is written after the parameter list.

    ! Using const improves code safety and readability.

////////////////////////////////////////////////////
*/




//! Summary :

/*
    ~ Const member functions do not modify object data.
    ~ They are declared using `const` after parameters.
    ~ They can read data members.
    ~ They cannot modify data members.
    ~ Const objects can only call const functions.
    ~ The `this` pointer becomes a pointer to a const object.
    ~ Commonly used with getter functions.
    ~ They improve safety and maintainability.
*/ 