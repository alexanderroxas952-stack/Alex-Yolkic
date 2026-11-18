#include "vex.h"
#include "counter.h"

// Function to count the number of eggs
void countEggs(int& eggCount) {

    while (counterBumper.pressing()) {}
    while (!counterBumper.pressing()) {}

    eggCount++;
}

// Function to update the egg count after an egg has been cracked
void updateEggCount(int& eggCount) {
    eggCount -= 1; // Decrement the egg count by 1
}


// Function to check if all eggs have been cracked
bool allEggsCracked(int eggCount) {

    // Logic to determine if all eggs have been cracked
    if (eggCount == 0) {
        return true;
    } else {
        return false;
    }
}