#include <bits/stdc++.h>
using namespace std;
int main() {
    int answer;
    int score = 0;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++?\n";
    cout << "1. Programming\n2. Markup\n3. Query\n4. Styling\n";
    cin >> answer;

    if (answer == 1)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << "/3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}