/*
Why it is important to write “using namespace std” in C++ program?

• As the same name can’t be given to multiple **[variables](https://www.geeksforgeeks.org/variables-and-keywords-in-c/)**, **[functions](https://www.geeksforgeeks.org/functions-in-c/)**, **[classes](https://www.geeksforgeeks.org/c-classes-and-objects/)**, etc. in the same scope.

• So to overcome this situation namespace is introduced.

C++ program illustrating the use of namespace with the same name of function and variables:
*/

// C++ program to illustrate the use of namespace with same name of
// function and variables
#include <iostream>
using namespace std;

// Namespace n1
namespace n1
{
    int x = 2;

    // Function to display the message
    // for namespace n1
    void fun()
    {
        cout << "This is fun() of n1"
             << endl;
    }
}

// Namespace n2
namespace n2
{

    int x = 5;

    // Function to display the message
    // for namespace n2
    void fun()
    {
        cout << "This is fun() of n2"
             << endl;
    }
}

// Driver Code
int main()
{
    // The methods and variables called
    // using scope resolution(::)
    cout << n1::x << endl;

    // Function call
    n1::fun();

    cout << n2::x << endl;

    // Function call
    n2::fun();

    return 0;
}

/*
The namespace is used to decrease or limit the scope of any variable or function.

• Every time using the scope resolution operator **(::)** in a variable or a function defined is not required, it can be solved with “**using**” directive.

• The **using** directive means to include the whole code written in the namespace in the closing scope.

• It can be interpreted as “using” copies of the code written in the namespace to the scope in which it has been written.
*/
/*
- It is known that “std” (abbreviation for the standard) is a namespace whose members are used in the program.
- So the members of the “std” namespace are **[cout](https://www.geeksforgeeks.org/difference-between-cout-and-stdcout-in-c/)**, **[cin](https://www.geeksforgeeks.org/cincout-vs-scanfprintf/)**, **[endl](https://www.geeksforgeeks.org/endl-vs-n-in-cpp/)**, etc.
- This namespace is present in the **[iostream.h](https://www.geeksforgeeks.org/c-stream-classes-structure/)** **[header file](https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/)**.
*/

// Code written in the iostream.h file
/*
namespace std
{
    ostream cout;
    iostream cin;
    // and some more code
}
*/
