//! Static Attributes :

/*
    * Static attributes (static data members) are variables that belong
    * to the class itself, not to individual objects.

    $ Normally, each object has its own copy of the class attributes.
    $ However, a static attribute is shared among all objects created
    $ from the same class.

    ? What does this mean?
        ^ If one object changes the value of a static attribute,
        ^ the change is visible to all other objects.

    ! Only one copy of a static attribute exists in memory,
    ! regardless of how many objects are created.

    # Example :

        class Student
        {
        private:
            std::string name;

        public:
            static int studentsCount;
        };

    $ The variable `studentsCount` belongs to the class itself,
    $ not to any specific object.

////////////////////////////////////////////////////
*/




//! Defining a Static Attribute :

/*
    * Static attributes are declared inside the class.

    ! They must also be defined outside the class.

    # Example :

        class Student
        {
        public:
            static int studentsCount;
        };

        int Student::studentsCount = 0;

    $ The definition outside the class allocates memory
    $ for the static attribute.

    ! Without this definition, a linker error may occur.

////////////////////////////////////////////////////
*/




//! Accessing Static Attributes :

/*
    * Since static attributes belong to the class,
    * they can be accessed without creating an object.

    # Using the class name :

        Student::studentsCount = 10;

    $ This is the preferred way because it clearly shows
    $ that the attribute belongs to the class.

    # Using an object :

        Student student1;
        student1.studentsCount = 10;

    ! Although this is allowed, using the class name
    ! is considered better practice.

////////////////////////////////////////////////////
*/




//! Shared Among All Objects :

/*
    * All objects share the same static attribute.

    # Example :

        class Student
        {
        public:
            static int studentsCount;
        };

        int Student::studentsCount = 0;

        int main()
        {
            Student s1;
            Student s2;

            Student::studentsCount++;

            std::cout << Student::studentsCount;

            return 0;
        }

    ^ The value of `studentsCount` is shared between
    ^ s1 and s2 because only one copy exists.

////////////////////////////////////////////////////
*/




//! Common Use Cases :

/*
    * Counting the number of created objects.

    * Storing information common to all objects.

    * Keeping global class statistics.

    # Example :

        class Student
        {
        private:
            std::string name;

        public:
            static int studentsCount;

            Student()
            {
                studentsCount++;
            }
        };

    $ Every time a new object is created,
    $ the counter increases.

////////////////////////////////////////////////////
*/




//! Important Notes :

/*
    ! Static attributes belong to the class, not objects.

    ! Only one copy exists in memory.

    ! They must be defined outside the class.

    ! They can be accessed using:
        Student::attributeName

    % Static attributes exist even if no object
      has been created yet (after program initialization).

////////////////////////////////////////////////////
*/




//! Summary :

/*
    ~ Static attributes belong to the class itself.
    ~ All objects share the same static attribute.
    ~ Only one copy exists in memory.
    ~ Declared inside the class using `static`.
    ~ Defined outside the class using:
        ClassName::attributeName
    ~ Can be accessed using the class name.
    ~ Often used for counters and shared class data.
*/