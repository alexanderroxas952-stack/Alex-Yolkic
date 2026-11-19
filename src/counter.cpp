#include "vex.h"
#include "counter.h"

// Function to count the number of eggs (FAULTY, PLEASE REWRITE)
void countEggs(int& eggCount) {

    while (!counterBumper.pressing()) {}
    eggCount++;
    while (counterBumper.pressing()) {}

    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Eggs counted: ");
    Brain.Screen.print("%d", eggCount);
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