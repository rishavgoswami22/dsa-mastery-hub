#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the N value: ";
    cin >> n;

    cout << "\nPrinting the pattern...\n\n";

    for (int row = 1; row <= n; row++) {
        // Print leading spaces
        for (int space = 1; space <= (row - 1); space++) {
            cout << " ";
        }

        // Print stars in each row
        for (int star = 1; star <= n; star++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
