#include <bits/stdc++.h>
using namespace std;
int main() {
    const int MAX = 100;
    int bookId[MAX];
    string title[MAX];
    bool issued[MAX];

    int n = 0;
    int choice;

    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter Book ID: ";
                cin >> bookId[n];

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Enter Book Title: ";
                getline(cin, title[n]);

                issued[n] = false;

                n++;

                cout << "Book Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Books Available!\n";
                } else {
                    cout << "\nBook Records:\n";

                    for (int i = 0; i < n; i++) {
                        cout << "\nBook ID : " << bookId[i];
                        cout << "\nTitle   : " << title[i];

                        if (issued[i])
                            cout << "\nStatus  : Issued";
                        else
                            cout << "\nStatus  : Available";

                        cout << "\n-------------------------";
                    }
                }
                break;

            case 3: {
                int id;
                bool found = false;

                cout << "Enter Book ID to Issue: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (bookId[i] == id) {

                        if (!issued[i]) {
                            issued[i] = true;
                            cout << "Book Issued Successfully!\n";
                        } else {
                            cout << "Book Already Issued!\n";
                        }

                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 4: {
                int id;
                bool found = false;

                cout << "Enter Book ID to Return: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (bookId[i] == id) {

                        if (issued[i]) {
                            issued[i] = false;
                            cout << "Book Returned Successfully!\n";
                        } else {
                            cout << "Book is Already Available!\n";
                        }

                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 5: {
                int id;
                bool found = false;

                cout << "Enter Book ID to Search: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (bookId[i] == id) {

                        cout << "\nBook Found!\n";
                        cout << "Book ID : " << bookId[i] << endl;
                        cout << "Title   : " << title[i] << endl;

                        if (issued[i])
                            cout << "Status  : Issued\n";
                        else
                            cout << "Status  : Available\n";

                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}