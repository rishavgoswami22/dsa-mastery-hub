#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the N value: ";
    cin >> n;

    cout << "\nPrinting the pattern...\n\n";

    // Loop through each row
    for (int row = 1; row <= n; row++)
    {
        // Loop through each column
        for (int col = 1; col <= n; col++)
        {
            // Print stars for the first and last row
            if (row == 1 || row == n)
            {
                cout << "* ";
            }
            else
            {
                // For middle rows, print stars only at the borders
                if (col == 1 || col == n)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}
