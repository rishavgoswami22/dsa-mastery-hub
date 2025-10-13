#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the N value: ";
    cin >> n;

    cout << "\nPrinting the inverted star pattern...\n\n";

    for (int i = 1; i <= n; i++) {
        // Print stars
        for (int j = 0; j <= n - i; j++) {
            cout << "* ";
        }

        // Print spaces (optional alignment)
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
