#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Class definition
class Game {
private:
    int secretNumber;

public:
    Game() {
        srand(time(0));
        secretNumber = rand() % 10 + 1; // Random number between 1 and 10
    }

    void start() {
        int guess;
        cout << "Guess a number between 1 and 10: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "You guessed it! You win!" << endl;
        } else {
            cout << "Wrong guess! The number was " << secretNumber << ". Try again next time!" << endl;
        }
    }
};

int main() {
    Game myGame;      // Creating an object
    myGame.start();   // Calling a function
    return 0;
}
