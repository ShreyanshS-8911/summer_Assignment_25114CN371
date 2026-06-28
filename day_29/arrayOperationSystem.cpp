#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[100], n;
    int choice;

    cout << "Enter Size of Array: ";
    cin >> n;

    cout << "Enter Array Elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== ARRAY OPERATIONS MENU =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum of Elements\n";
        cout << "3. Find Maximum Element\n";
        cout << "4. Find Minimum Element\n";
        cout << "5. Search an Element\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2: {
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum = " << sum << endl;
                break;
            }

            case 3: {
                int max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max << endl;
                break;
            }

            case 4: {
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum Element = " << min << endl;
                break;
            }

            case 5: {
                int key;
                bool found = false;

                cout << "Enter Element to Search: ";
                cin >> key;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element Found at Index " << i << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Element Not Found!\n";

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