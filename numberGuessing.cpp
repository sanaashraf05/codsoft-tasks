#include <iostream>
#include <ctime>
#include <random>
using namespace std;
int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;

    int guess;
    int isGuessed = 0;

    cout << "I'm thinking of a number between 1 and 100. Can you guess it?"<<endl;

    while (!isGuessed)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the number!" << endl;
            isGuessed = 1;
        } else if (guess < randomNumber) {
            cout << "Too low. Try again."<<endl;
        } else {
            cout << "Too high. Try again."<<endl;
        }
    }

    return 0;
}
