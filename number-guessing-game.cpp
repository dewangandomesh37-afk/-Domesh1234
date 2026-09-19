#include <iostream>
using namespace std;

int main() {
    int secret = 82;
    int guess;

    cout << "Guess the number between 1 and 100: ";
    cin >> guess;

    while (guess != secret) {
        if (guess < secret)
            cout << "Wrong! Try a higher number: ";
        else
            cout << "Wrong! Try a lower number: ";

        cin >> guess;
    }

    cout << "Congratulations! You guessed it correctly.";

    return 0;
}
