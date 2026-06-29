//! Timestamp :

/*
    * A timestamp is a value that represents a specific
    * date and time.

    $ It is commonly used to record when an event occurred.

    # Examples :

        - User login time
        - File creation time
        - Message sent time
        - Database record creation time

////////////////////////////////////////////////////
*/




//! Unix Timestamp :

/*
    * The most common timestamp format is the Unix Timestamp.

    $ It represents the number of seconds that have passed
    $ since:

        January 1, 1970
        00:00:00 UTC

    # Example :

        0

    ^ Represents:
        January 1, 1970 00:00:00 UTC

////////////////////////////////////////////////////
*/




//! Why Use Timestamps ?

/*
    * Easy to store in databases.

    * Easy to compare dates and times.

    * Independent of date formatting.

    * Widely used in operating systems and applications.

    $ Computers can compare timestamps faster than
    $ comparing formatted date strings.

////////////////////////////////////////////////////
*/




//! Timestamp in C++ :

/*
    * C++ provides functions to obtain the current timestamp.

    # Example :

        #include <ctime>

        int main()
        {
            time_t currentTime = time(NULL);

            std::cout << currentTime;

            return 0;
        }

    ^ `time(NULL)` returns the current Unix Timestamp.

////////////////////////////////////////////////////
*/




//! Converting Timestamp to Readable Date :

/*
    * A timestamp can be converted into a human-readable
    * date and time.

    # Example :

        time_t currentTime = time(NULL);

        std::cout << ctime(&currentTime);

    ^ Output Example :

        Sun Jun 22 12:30:00 2026

////////////////////////////////////////////////////
*/




//! Common Use Cases :

/*
    * Logging systems.

    * Authentication systems.

    * File management.

    * Databases.

    * Tracking user activity.

    # Example :

        User logged in at:
        1782105000

////////////////////////////////////////////////////
*/




//! Timestamp Comparison :

/*
    * Timestamps can be compared directly.

    # Example :

        if (timestamp1 > timestamp2)
        {
            // timestamp1 is newer
        }

    $ Larger timestamp values represent more recent times.

////////////////////////////////////////////////////
*/




//! Important Notes :

/*
    ! Unix Timestamp starts from:
        January 1, 1970 UTC

    ! It is usually measured in seconds.

    ! Some systems use milliseconds or microseconds.

    ! Timestamps are commonly used for storing
      and comparing time values.

////////////////////////////////////////////////////
*/




//! Summary :

/*
    ~ A timestamp represents a specific moment in time.
    ~ Unix Timestamp counts seconds since Jan 1, 1970 UTC.
    ~ Used for logging, databases, and event tracking.
    ~ Easy to store and compare.
    ~ Larger values represent newer times.
    ~ C++ can generate timestamps using:
        time(NULL)
*/
