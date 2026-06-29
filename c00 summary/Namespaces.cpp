//! Namespace
/*
    ? is a mechanism used to organize 
    ? identifiers (names) and prevent naming conflicts
    // In other words :
        ~ when variables, functions, or classes have the same name, 
        ~ they can be placed inside different namespaces so the compiler 
        ~ can distinguish between them.
    # why we need it ?
        * Imagine working on a large project or using multiple libraries.
        * Two different libraries may contain a function with the same name.
        * Without namespaces, this would lead to a naming conflict and make it 
        * difficult to use both libraries together.
        * By placing each library's functions inside a unique namespace,
        *  we can avoid these conflicts and use both libraries without issues.
    # How to define a namespace ?
        * In C++, you can define a namespace using the `namespace` keyword 
        * followed by the name of the namespace and a block of code that contains 
        * the declarations and definitions that belong to that namespace.
        * For example:
            ~~~cpp
            namespace Name
            {
                // variables
                // functions
                // classes
            }
            ~~~
/////////////////////////////////////////////////////
$ builtin namespaces :
    * std : contains all the standard library functions and classes,
    * std::cout, std::cin, std::string, etc.
    you can call it :
        using namespace std; // This allows you to use names from the std namespace without the std:: prefix
        or you can call it directly :
        using std::cout; // This allows you to use cout without the std:: prefix, but other names from the std namespace will still require the std:: prefix
        using std::cin; // This allows you to use cin without the std:: prefix, but other names from the std namespace will still require the std:: prefix
/////////////////////////////////////////////////////////
    ^ example without namespace :

        #include <iostream>
        void print()
        {
            std::cout << "First print" << std::endl;
        }

        void print()
        {
            std::cout << "Second print" << std::endl;
        }

        $ int main() {
            print(); // This will cause a compilation error due to the naming conflict
            return 0;
        }
    ! The compiler will generate an error because two functions 
    ! with the exact same signature exist in the same scope.

    ^ example with namespace :

        #include <iostream>

        namespace FirstNamespace {
            void print() {
                std::cout << "First print" << std::endl;
            }
        }

        namespace SecondNamespace {
            void print() {
                std::cout << "Second print" << std::endl;
            }
        }

        int main() {
            FirstNamespace::print(); // Calls the print function from the first namespace
            SecondNamespace::print(); // Calls the print function from the second namespace
            return 0;
        }

    ! Each function belongs to a different namespace, 
    ! so there is no naming conflict.
////////////////////////////////////////////////////////////
*/

//! The scope resolution operator (::)  
/*
        # is used to access members inside a namespace.

    ~ example :
    #include <iostream>

        namespace Data
        {
            int age = 22;
        }

        int main()
        {
            std::cout << Data::age << std::endl;
        }

    ~ example :
        #include <iostream>
        namespace School
        {
            class Student
            {
            public:
                void display()
                {
                    std::cout << "Student" << std::endl;
                }
            };
        }

        int main()
        {
            School::Student s;
            s.display();
        }

    ~ example :
        namespace Company
    {
        namespace IT
        {
            void work()
            {
            }
        }
    }

    int main()
    {
        Company::IT::work();
    }
    ^ another way :
        namespace Company::IT
        {
            void work()
            {
            }
        }
/////////////////////////////////////////////
    ^ you can also use the `using` directive to avoid having to type the namespace name repeatedly
        #include <iostream>
        namespace Data
        {
            int age = 22;
        }

        using namespace Data;

        int main()
        {
            std::cout << age << std::endl; // No need to use Data::age
        }
/////////////////////////////////////////////////////
*/

//! Anonymous Namespace
/*
    ? An anonymous namespace is a special type of namespace that does not have a name.
    ? It is used to declare entities that are only accessible within the same translation unit (source file).
    # When you declare something inside an anonymous namespace, it has internal linkage,
    # which means it cannot be accessed from other translation units.
    ~ example :
        #include <iostream>

        namespace {
            int secretValue = 42; // This variable is only accessible within this source file
        }

        int main() {
            std::cout << secretValue << std::endl; // This will work
            return 0;
        }
    ! In this example, `secretValue` is declared inside an anonymous namespace,
    ! so it cannot be accessed from other source files, preventing naming conflicts and ensuring that 
    ! it is only used within this file.
*/



//! quick review :
/*
    Namespaces organize code and prevent name collisions.
    Members are accessed using ::.
    They can contain variables, functions, classes, structs, and templates.
    Namespaces can be nested.
    std is the standard library namespace.
    using namespace std; imports everything from std.
    Large projects usually prefer explicit std:: usage or selective using declarations

*/




