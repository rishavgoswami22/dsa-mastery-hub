#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the N value: ";
    cin >> n;

    cout << "\nPrinting the right-aligned inverted triangle...\n\n";

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
