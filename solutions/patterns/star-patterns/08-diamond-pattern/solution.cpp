#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the N value: ";
    cin >> n;

    cout << "\nPrinting the pattern...\n\n";

    for (int row = 1; row <= n; row++) {
        // Top half of the diamond
        if (row <= n / 2) {
            // Print leading spaces
            for (int space = 1; space <= ((n / 2 + 1) - row); space++) {
                cout << " ";
            }
            // Print stars
            for (int star = 1; star <= row; star++) {
                cout << "* ";
            }
        } 
        // Bottom half of the diamond
        else {
            // Print leading spaces
            for (int space = 1; space <= (row - (n / 2 + 1)); space++) {
                cout << " ";
            }
            // Print stars
            for (int star = 1; star <= (n - row + 1); star++) {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}
