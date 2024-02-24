// Practice on Arrays

#include <iostream>

using namespace std;

int main()
{
    // Create an array of size 5
    int A[5]; // An array of 5 zeros
    
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    // Printing: Check the memory size of A
    cout<<sizeof(A)<<endl; // size of array is 20 (4bytes * 5)
    cout<<A[1]<<endl;

    // Can I use printf() from C?
    printf("%d\n", A[2]);

    // Initialise an array of size 5
    int B[5] = {2, 4, 6, 8, 10};

    printf("%d\n", B[1]);
    cout<<B[2]<<endl;

    // Initialise without specifying the size
    int C[10] = {2, 4, 6, 8, 10, 12, 14}; // Other values are zeros

    cout<<sizeof(C)<<endl;
    cout<<C[6]<<endl;

    // Access arrays: for loop
    printf("Printing values of Array C using for loop\n");
    for (int i=0; i<10; i++)
    {
        cout<<C[i]<<endl;
    }

    // Access arrays: foreach loop
    printf("Printing values of Array C using foreach loop\n");
    // foreach loop takes each value in C (according to its size)
    for (int x:C)
    {   
        cout<<x<<endl;
    }

    return 0;
}