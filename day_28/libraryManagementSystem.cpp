#include <bits/stdc++.h>
using namespace std;
struct Book {
    int id;
    string title;
    string author;
};

int main() {
    Book books[100];
    int n = 0, choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> books[n].id;

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, books[n].title);

                cout << "Enter Author Name: ";
                getline(cin, books[n].author);

                n++;
                cout << "Book Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Books Available!\n";
                } else {
                    cout << "\nBook Records:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nBook ID : " << books[i].id;
                        cout << "\nTitle   : " << books[i].title;
                        cout << "\nAuthor  : " << books[i].author;
                        cout << "\n----------------------";
                    }
                    cout << endl;
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter Book ID to Search: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (books[i].id == searchId) {
                        cout << "\nBook Found!\n";
                        cout << "Book ID : " << books[i].id << endl;
                        cout << "Title   : " << books[i].title << endl;
                        cout << "Author  : " << books[i].author << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Book Not Found!\n";
                }
                break;
            }

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}