#include <bits/stdc++.h>
using namespace std;
struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product products[100];
    int n = 0, choice;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Product ID: ";
                cin >> products[n].id;

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Enter Product Name: ";
                getline(cin, products[n].name);

                cout << "Enter Quantity: ";
                cin >> products[n].quantity;

                cout << "Enter Price: ";
                cin >> products[n].price;

                n++;
                cout << "Product Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Products Available!\n";
                } else {
                    cout << "\nProduct Details:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nID       : " << products[i].id;
                        cout << "\nName     : " << products[i].name;
                        cout << "\nQuantity : " << products[i].quantity;
                        cout << "\nPrice    : " << products[i].price;
                        cout << "\n------------------------";
                    }
                    cout << endl;
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter Product ID to Search: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (products[i].id == searchId) {
                        cout << "\nProduct Found!\n";
                        cout << "ID       : " << products[i].id << endl;
                        cout << "Name     : " << products[i].name << endl;
                        cout << "Quantity : " << products[i].quantity << endl;
                        cout << "Price    : " << products[i].price << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product Not Found!\n";

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