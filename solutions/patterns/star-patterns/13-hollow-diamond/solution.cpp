#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input odd number only
    do
    {
        cout << "Enter an odd N value: ";
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "Please enter an odd number!\n";
        }
    } while (n % 2 == 0);

    cout << "\nPrinting the inverted hollow pyramid...\n\n";

    for (int row = 1; row <= n; row++)
    {
        int middleOfDiamond = (n / 2) + 1;

        if (row <= middleOfDiamond)
        {
            // TOP HALF (already correct)
            for (int col = 1; col <= (middleOfDiamond - row); col++)
            {
                cout << " ";
            }

            cout << "*";

            if (row > 1)
            {
                for (int space = 1; space <= (2 * row - 3); space++)
                {
                    cout << " ";
                }
                cout << "*";
            }

            cout << endl;
        }
        else
        {
            // ✅ FIXED BOTTOM HALF (MIRROR OF THE TOP)
            int mirrorRow = n - row + 1;

            for (int col = 1; col <= (middleOfDiamond - mirrorRow); col++)
            {
                cout << " ";
            }

            cout << "*";

            if (mirrorRow > 1)
            {
                for (int space = 1; space <= (2 * mirrorRow - 3); space++)
                {
                    cout << " ";
                }
                cout << "*";
            }

            cout << endl;
        }
    }

    return 0;
}
