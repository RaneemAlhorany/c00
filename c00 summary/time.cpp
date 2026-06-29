//! time_t :
/*
    * `time_t` is a data type used to represent time values
    * in C and C++.
    $ It is defined in the `<ctime>` header.
    $ Most commonly, it stores the number of seconds
    $ elapsed since the Unix Epoch:
        January 1, 1970
        00:00:00 UTC
*/

//! Why Do We Use time_t ?
/*
    * To store date and time information.
    * To perform time calculations.
    * To measure elapsed time.
    * To work with timestamps.
    # Example :
        time_t currentTime;
*/

//! Getting Current Time :
/*
    * The `time()` function returns the current time
    * as a `time_t` value.

    # Example :

        #include <ctime>

        int main()
        {
            time_t currentTime;
            currentTime = time(NULL);
            std::cout << currentTime;
            return 0;
        }
    ^ The output will be a Unix Timestamp.
*/

//! Example Output :
/*
    # Example :
        1782145000
    $ This number represents the number of seconds
    $ since January 1, 1970 UTC.
    ! The exact value changes every second.

*/

//! Converting time_t to Readable Date :
/*
    * A `time_t` value can be converted into a
    * human-readable date and time.

    # Example :

        time_t currentTime = time(NULL);
        std::cout << ctime(&currentTime);
    # Possible Output :
        Tue Jun 23 15:30:10 2026
    ^ `ctime()` converts a timestamp into a readable string.
*/

//! Common Functions Using time_t :
/*
    # time()

        ^ Returns the current time as a `time_t`.
        ex :
            time_t rawTime;
            time(&rawTime);

    # ctime()
        ^ Converts `time_t` to a readable string.
    # localtime()
        ^ Converts `time_t` into local date/time components.
    # gmtime()
        ^ Converts `time_t` into UTC date/time components.
    # difftime()
        ^ Calculates the difference between two timestamps.


*/


//! Comparing time_t Values :
/*
    * Since `time_t` represents a numeric value,
    * timestamps can be compared directly.

    # Example :

        time_t t1 = time(NULL);

        // later...

        time_t t2 = time(NULL);

        if (t2 > t1)
        {
            std::cout << "t2 is newer";
        }

    ^ Larger values represent more recent times.
*/

//! Calculating Time Differences :
/*
    * The `difftime()` function returns the difference
    * between two timestamps in seconds.
    # Example :
        time_t start = time(NULL);
        // code ...
        time_t end = time(NULL);
        double seconds = difftime(end, start);
    ^ `seconds` contains the elapsed time.
*/


//! In C++98 :
/*
    * `time_t` is heavily used in C++98 projects.

    # Example :

        time_t now;

        now = std::time(NULL);

    $ Many older projects use `time_t`
    $ instead of modern C++ chrono utilities.
*/


//! Important Notes :
/*
    ! `time_t` is defined in `<ctime>`.
    ! It stores time information.
    ! It is usually represented as seconds
      since January 1, 1970 UTC.
    ! The exact underlying type is implementation-dependent.
    ! It is commonly used with:
        time()
        ctime()
        localtime()
        gmtime()
        difftime()

*/

//! Summary :
/*
    ~ `time_t` is a data type for storing time values.
    ~ It is defined in the `<ctime>` header.
    ~ It usually stores seconds since Jan 1, 1970 UTC.
    ~ `time()` returns the current time as a `time_t`.
    ~ `ctime()` converts it into a readable date.
    ~ `difftime()` calculates differences between times.
    ~ Larger `time_t` values represent more recent times.
    ~ Commonly used for timestamps and time calculations.
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////


//! struct tm :
/*
    * `struct tm` is a structure used to store
    * date and time components separately.

    $ Unlike `time_t`, which stores time as a single
    $ timestamp value, `struct tm` breaks time into
    $ individual fields such as:
        Seconds
        Minutes
        Hours
        Day
        Month
        Year
    ! It is defined in the `<ctime>` header.
*/

//! Why Do We Use struct tm ?
/*
    * To access individual date and time components.
    * To format dates and times.
    * To perform date-related calculations.
    * To convert timestamps into readable values.
    # Example :
        Current Time:
            Hour   = 15
            Minute = 30
            Second = 45
    ^ These values can be accessed through `struct tm`.
*/

//! Definition of struct tm :
/*
    # Simplified Definition :

        struct tm
        {
            int tm_sec;
            int tm_min;
            int tm_hour;
            int tm_mday;
            int tm_mon;
            int tm_year;
            int tm_wday;
            int tm_yday;
            int tm_isdst;
        };
    ! Actual implementations may vary slightly.
*/

//! Important Members :
/*
    # tm_sec

        ^ Seconds.
        ^ Range: 0 - 60
    # tm_min
        ^ Minutes.
        ^ Range: 0 - 59
    # tm_hour
        ^ Hours.
        ^ Range: 0 - 23
    # tm_mday
        ^ Day of month.
        ^ Range: 1 - 31
    # tm_mon
        ^ Month.
        ^ Range: 0 - 11
        ! January = 0
        ! February = 1
        ! ...
        ! December = 11
    # tm_year
        ^ Years since 1900.
        # Example :
            126
        ^ Represents:
            2026
        ! Formula :
            Actual Year = tm_year + 1900
*/

//!  strftime();
/*
    * `strftime()` formats date and time information
    * into a string based on a specified format.

    # Parameters :

        1. buffer
            ^ A character array to store the formatted string.
        2. sizeof(buffer)
            ^ The size of the buffer to prevent overflow.
        3. "%Y%m%d_%H%M%S"
            ^ A format string specifying how to format the date/time.
        4. timeInfo
            ^ A pointer to a `struct tm` containing the date/time components.

    # Format Specifiers :

        %Y : Year with century (e.g., 2026)
        %m : Month as a decimal number (01-12)
        %d : Day of the month (01-31)
        %H : Hour in 24-hour format (00-23)
        %M : Minute (00-59)
        %S : Second (00-60)

    # Example Output :

        If the current date and time is:
            June 23, 2026, 15:30:10
        The output will be:
            "20260623_153010"
*/

//! Getting Current Time Using struct tm :
/*
    # Example :

        #include <ctime>

        int main()
        {
            time_t now = time(NULL);

            struct tm *currentTime;

            currentTime = localtime(&now);

            return 0;
        }

    ^ `localtime()`
         converts a `time_t` into a `struct tm`.
*/

//! Accessing Date Components :
/*
    # Example :

        time_t now = time(NULL);
        struct tm *currentTime = localtime(&now);
        std::cout << currentTime->tm_hour;
        std::cout << currentTime->tm_min;
        std::cout << currentTime->tm_sec;
    ^ Individual date and time components
      can be accessed using the arrow operator (`->`).
*/

//! Example Output :
/*
    # Example :

        Hour   : 15
        Minute : 30
        Second : 45

    ^ Values depend on the current local time.
*/

//! localtime() vs gmtime() :
/*
    # localtime()
        ^ Converts a timestamp to local time.
    # gmtime()
        ^ Converts a timestamp to UTC time.
    # Example :
        struct tm *local = localtime(&now);
        struct tm *utc = gmtime(&now);
    $ Both return a pointer to `struct tm`.
*/

//! Why Is It a Pointer ?
/*
    ? Why do we write:

        struct tm *currentTime;
    instead of:
        struct tm currentTime;

    ^ Because functions such as:
        localtime()
        gmtime()
      return a pointer to a `struct tm`.

    # Example :

        struct tm *currentTime =
            localtime(&now);

*/

//! Common Use Case :
/*
    # Formatting a Timestamp :

        time_t now = time(NULL);

        struct tm *currentTime =
            localtime(&now);

        std::cout
            << currentTime->tm_mday << "/"
            << currentTime->tm_mon + 1 << "/"
            << currentTime->tm_year + 1900;

    ^ Produces a readable date format.
*/

//! Important Notes :
/*
    ! `struct tm` stores date/time components separately.
    ! It is defined in `<ctime>`.
    ! `tm_mon` starts from 0.
    ! `tm_year` starts from 1900.
    ! `localtime()` returns local time.
    ! `gmtime()` returns UTC time.
    ! Access members using:
        pointer->member
*/

//! Summary :
/*
    ~ `struct tm` stores date and time components.
    ~ It is defined in `<ctime>`.
    ~ It is commonly obtained using:
        localtime()
        gmtime()
    ~ `tm_hour` stores hours.
    ~ `tm_min` stores minutes.
    ~ `tm_sec` stores seconds.
    ~ `tm_mon` ranges from 0 to 11.
    ~ `tm_year` stores years since 1900.
    ~ Members are accessed using `->`.
*/





