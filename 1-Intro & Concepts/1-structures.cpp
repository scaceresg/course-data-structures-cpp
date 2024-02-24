// Practice on Structures

#include <iostream>

using namespace std;

// Define a structure for a Rectangle
struct Rectangle
{
    // Rectangle elements:
    int length;
    int height;
    char x; // (assigns 4bytes due to padding)
};

// You can define and declare a structure for Rectangle
/* 
struct Rectangle
{
    // Rectangle elements:
    int length;
    int height;
} r1, r2, r3; // (global variable)
*/

int main()
{
    // Declare a variable of type structure (local var to the main function)
    // struct Rectangle r1;

    // Declare and initialise a variable of type structure
    struct Rectangle r1 = {10, 5}; // length = 10, height = 5

    // Print the size of Rectangle r1
    printf("%d\n", sizeof(r1));

    // Access the elements of the structure
    r1.length = 15;
    r1.height = 7;

    // Print the new values of elements
    cout<<r1.length<<endl;
    cout<<r1.height<<endl;

    return 0;
}