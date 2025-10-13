#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the N value: ";
    cin >> n;

    cout << "\nPrinting the inverted pattern...\n\n";

    for (int row = n; row >= 1; row--)
    {
        // Print leading spaces
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }

        if (row == 1)
        {
            // Last row (tip of the inverted pyramid)
            cout << "*";
        }
        else if (row == n)
        {
            // First row (widest row)
            for (int star = 1; star <= n; star++)
            {
                cout << "* ";
            }
        }
        else
        {
            // Middle rows
            cout << "*"; // Left star

            // Inner spaces
            for (int space = 0; space < (2 * row - 3); space++)
            {
                cout << " ";
            }

            cout << "*"; // Right star
        }

        cout << endl;
    }

    return 0;
}
