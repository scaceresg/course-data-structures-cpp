// Practice on Pointers

#include <iostream>

using namespace std;

int main()
{   
    // Define a data variable
    int a = 10;

    // Declare and initialise a pointer for data variable a
    int *p;
    p = &a;

    // Print the value of a using pointer p
    printf("Using pointer %d, to get value of a: %d\n", p, *p);
    printf("The value of p %d is the same as the address of a %d\n", p, &a);
    
    // Example using Arrays
    // Define array and pointer
    int A[5] = {2, 4, 6, 8, 10};
    // int *p;

    /* 
    For arrays, you don't need to pass the aspersand (&)
    since name of the array (A) is itself the starting address of this array
    */
    p = A;

    // Print all the array elements
    printf("Printing array elements\n");
    
    for (int i=0; i<5; i++)
    {
        cout<<A[i]<<endl;
    }

    // Print all the array elements using its pointer
    printf("Printing array elements using its pointer\n");

    for (int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }
    
    // Example using Array in Heap section of memory
    // Assign pointer to an array in heap -> malloc function (C Language)
    // p = (int *)malloc(5 * sizeof(int));

    // In C++:
    p = new int[5];

    p[0] = 10; p[1] = 15; p[2] = 14; p[3] = 21; p[4] = 31;

    // Print all the array elements in heap using its pointer
    printf("Printing array elements in heap section using pointer\n");
    for (int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }

    // After using memory in heap, we should delete that memory usage
    delete []p;
    // free(p); // when using C Language

    return 0;
}