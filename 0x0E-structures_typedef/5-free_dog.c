#include <stdio.h>
#include <stdlib.h> // Include the stdlib.h header for the free function

// Define the 'dog_t' struct
typedef struct dog_t {
    char *name;
    int age;
    char *breed;
} dog_t;

// Function to free a 'dog_t' struct
void free_dog(dog_t *d) {
    if (d != NULL) {
        // Free the dynamically allocated memory for name and breed
        free(d->name);
        free(d->breed);

        // Free the memory occupied by the 'dog_t' struct itself
        free(d);
    }
}

int main() {
    // Create an instance of the 'dog_t' struct
    dog_t *myDog = malloc(sizeof(dog_t));

    // Assign values to the struct members
    myDog->name = strdup("Buddy");
    myDog->age = 3;
    myDog->breed = strdup("Golden Retriever");

    // Call the 'free_dog' function to free the 'myDog' struct
    free_dog(myDog);

    return 0;
}
~ 
