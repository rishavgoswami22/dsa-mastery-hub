#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the N value: ";
    cin >> n;

    cout << "\nPrinting the centered pyramid pattern...\n\n";

    for (int row = 1; row <= n; row++) {
        // Print leading spaces to center the pyramid
        for (int space = 1; space <= (n - row); space++) {
            cout << " ";
        }

        // Print stars with a space
        for (int star = 1; star <= row; star++) {
            cout << "* ";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
