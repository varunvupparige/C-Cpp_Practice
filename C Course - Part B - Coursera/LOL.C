// C Program to pass array of structures to a function
#include <stdio.h>

// Defining the struct
struct MyStruct {
    int id;
    char name[20];
};

// Function to print the array of structures
void printStructs(struct MyStruct* array, int size)
{
    for (int i = 0; i < size; i++) {
        printf("Struct at index %d: ID = %d, Name = %s\n",
               i, array[i].id, array[i].name);
    }
}

int main()
{
    // Declaring an array of structs
    struct MyStruct myArray[] = {
        { 1, "P1" },
        { 2, "P2" },
    };

    // Passing the array of structures to the function
    printStructs(myArray, 2);

    return 0;
}