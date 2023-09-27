#include "dog.h"
#include <stdio.h>

// Define the struct 'dog'
struct dog {
    char name[50];
    int age;
    char breed[50];
};

// Function to print a 'dog' struct
void printDog(struct dog myDog) {
    printf("Name: %s\n", myDog.name);
    printf("Age: %d\n", myDog.age);
    printf("Breed: %s\n", myDog.breed);
}

int main() {
    // Create an instance of the 'dog' struct
    struct dog myPet;

    // Assign values to the struct members
    strcpy(myPet.name, "Buddy");
    myPet.age = 3;
    strcpy(myPet.breed, "Golden Retriever");

    // Call the 'printDog' function to print the 'myPet' struct
    printf("My Pet:\n");
    printDog(myPet);

    return 0;
}
