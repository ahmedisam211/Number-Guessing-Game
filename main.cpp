#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <chrono>

using namespace std;
using namespace chrono;

int getValidatedInput() {
    int input;
    while (true) {
        cin >> input;
        if (cin.fail() || input < 1 || input > 100) {
            cout << "Invalid input! Please enter a number between 1 and 100: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return input;
        }
    }
}

int selectDifficulty() {
    int choice;
    cout << "\nPlease select the difficulty level:\n"
         << "1. Easy (10 chances)\n"
         << "2. Medium (5 chances)\n"
         << "3. Hard (3 chances)\n"
         << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Great! You have selected Easy difficulty.\n";
            return 10;
        case 2:
            cout << "Great! You have selected Medium difficulty.\n";
            return 5;
        case 3:
            cout << "Great! You have selected Hard difficulty.\n";
            return 3;
        default:
            cout << "Invalid choice. Defaulting to Medium difficulty.\n";
            return 5;
    }
}

void playGame(int& highScore) {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int chances = selectDifficulty();
    int attempts = 0;
    int guess;

    cout << "Let's start the game! You have " << chances << " chances.\n";

    auto startTime = steady_clock::now();

    while (chances > 0) {
        cout << "\nEnter your guess (1-100): ";
        guess = getValidatedInput();
        attempts++;
        chances--;

        if (guess == secretNumber) {
            auto endTime = steady_clock::now();
            auto duration = duration_cast<seconds>(endTime - startTime).count();
            cout << "🎉 Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
            cout << "⏱️ Time taken: " << duration << " seconds.\n";

            if (highScore == 0 || attempts < highScore) {
                highScore = attempts;
                cout << "🏆 New High Score!\n";
            }
            return;
        } else if (guess < secretNumber) {
            cout << "Incorrect! The number is greater than " << guess << ".";
        } else {
            cout << "Incorrect! The number is less than " << guess << ".";
        }

        if (chances == 1) {
            cout << "\n💡 Hint: The number is " << ((secretNumber % 2 == 0) ? "even." : "odd.");
        }

        cout << " You have " << chances << " chances left.\n";
    }

    cout << "\n❌ You've run out of chances! The number was: " << secretNumber << "\n";
}

int main() {
    int highScore = 0;
    char playAgain;

    cout << "========================================\n";
    cout << "🎮 Welcome to the Number Guessing Game! 🎮\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    cout << "Try to guess it in as few attempts as possible.\n";
    cout << "========================================\n";

    do {
        playGame(highScore);
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank you for playing! See you next time.\n";
    return 0;
}
