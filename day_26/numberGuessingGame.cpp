#include <bits/stdc++.h>
using namespace std;
int main() {
    int number = 37; 
    int guess;
    cout << "Guess a number between 1 and 100\n";
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > number) {
            cout << "Too High!\n";
        }
        else if (guess < number) {
            cout << "Too Low!\n";
        }
        else {
            cout << "Congratulations! You guessed the number.\n";
            break;
        }
    }
    return 0;
}