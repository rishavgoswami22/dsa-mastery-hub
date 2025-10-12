#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the N value: ";
    cin >> n;
    cout << "Printing the pattern ..." << endl;

    for (int row = 1; row <= n; row++)
    {
        // --- TOP HALF ---
        if (row <= (n / 2) + 1)
        {
            // print spaces
            for (int space = 1; space < row; space++)
            {
                cout << "  "; // double space for alignment
            }

            // print stars
            int stars = n - (2 * (row - 1)); // decreasing odd sequence
            for (int star = 1; star <= stars; star++)
            {
                cout << "* ";
            }
        }
        // --- BOTTOM HALF ---
        else
        {
            int bottomRow = row - ((n / 2) + 1);

            // print spaces
            for (int space = 1; space <= ((n / 2) - bottomRow); space++)
            {
                cout << "  ";
            }

            // print stars
            int stars = (2 * bottomRow) + 1;
            for (int star = 1; star <= stars; star++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}
