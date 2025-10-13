#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the N value: ";
    cin >> n;

    cout << "\nPrinting the pattern...\n\n";

    for (int i = 1; i <= n; i++) {
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
