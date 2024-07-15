#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "I have generated a random number between 1 and 100."<<endl;
    cout << "Can you guess"<<endl;

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < randomNumber) {
              cout << "Too low! Try again.\n";
        } else 
		{
              cout << "Congratulations! You guessed the correct number.\n";
        }
    }

    return 0;
}
