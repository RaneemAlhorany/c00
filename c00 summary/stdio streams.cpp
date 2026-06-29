//! Standard I/O Streams (stdio streams) :

/*
    * Standard I/O Streams are predefined streams used
    * for input, output, and error handling in C++.

    $ A stream is a flow of data between a program
    $ and an external source such as the keyboard,
    $ screen, or file.

    ? Why are streams important?

        ^ They provide a standard way for programs
          to receive input and display output.

////////////////////////////////////////////////////
*/




//! Main Standard Streams :

/*
    * C++ provides three standard streams:

        # std::cin
            ^ Standard Input Stream.

        # std::cout
            ^ Standard Output Stream.

        # std::cerr
            ^ Standard Error Stream.

////////////////////////////////////////////////////
*/




//! std::cin :

/*
    * `std::cin` is used to receive input from the user.

    $ Data usually comes from the keyboard.

    # Example :

        int age;

        std::cin >> age;

    ^ The entered value is stored in `age`.

////////////////////////////////////////////////////
*/




//! std::cout :

/*
    * `std::cout` is used to display output.

    $ Data is usually displayed on the terminal/screen.

    # Example :

        std::cout << "Hello World";

    ^ The text is printed to the console.

////////////////////////////////////////////////////
*/




//! std::cerr :

/*
    * `std::cerr` is used to display error messages.

    ! Unlike `std::cout`, it is unbuffered.

    $ Error messages are displayed immediately.

    # Example :

        std::cerr << "Error: Invalid Input";

////////////////////////////////////////////////////
*/




//! Buffered vs Unbuffered Streams :

/*
    * Buffered Stream :

        # std::cout

        ^ Output may be stored temporarily in a buffer
          before being displayed.

    * Unbuffered Stream :

        # std::cerr

        ^ Output is displayed immediately.

    ! This makes `std::cerr` useful for reporting errors.

////////////////////////////////////////////////////
*/




//! Stream Operators :

/*
    * Extraction Operator :

        >>

        ^ Used with input streams.

    # Example :

        std::cin >> age;

    * Insertion Operator :

        <<

        ^ Used with output streams.

    # Example :

        std::cout << age;

////////////////////////////////////////////////////
*/




//! Standard Stream Objects :

/*
    * These stream objects are automatically available
      when including:

        #include <iostream>

    # Example :

        #include <iostream>

        int main()
        {
            std::cout << "Hello";
            return 0;
        }

////////////////////////////////////////////////////
*/




//! Standard Streams in Unix/Linux :

/*
    * Every running program normally has:

        # Standard Input (stdin)

        # Standard Output (stdout)

        # Standard Error (stderr)

    $ C++ stream objects are connected to these
      operating system streams.

    # Mapping :

        std::cin   -> stdin

        std::cout  -> stdout

        std::cerr  -> stderr

////////////////////////////////////////////////////
*/




//! Redirection :

/*
    * Standard streams can be redirected.

    # Example :

        ./program > output.txt

    ^ Redirects stdout (`std::cout`)
      into a file.

    # Example :

        ./program < input.txt

    ^ Redirects stdin (`std::cin`)
      from a file.

////////////////////////////////////////////////////
*/




//! Important Notes :

/*
    ! `std::cin` is used for input.

    ! `std::cout` is used for normal output.

    ! `std::cerr` is used for errors.

    ! `>>` is the extraction operator.

    ! `<<` is the insertion operator.

    ! Standard streams are automatically connected
      to the terminal by default.

////////////////////////////////////////////////////
*/




//! Summary :

/*
    ~ A stream is a flow of data.
    ~ std::cin handles standard input (stdin).
    ~ std::cout handles standard output (stdout).
    ~ std::cerr handles standard error (stderr).
    ~ >> is used for input.
    ~ << is used for output.
    ~ std::cerr is unbuffered and displays immediately.
    ~ Standard streams can be redirected to files.
*/