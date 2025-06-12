#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess = 0;
    int numberOfTries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        numberOfTries++;

        if (userGuess > numberToGuess) {
            cout << "Your guess is too high. Try again!" << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Your guess is too low. Try again!" << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << numberToGuess << " in " << numberOfTries << " tries!" << endl;
        }
    } while (userGuess != numberToGuess);

    return 0;
}
