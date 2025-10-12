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
        // print top pyramid
        if (row <= n / 2)
        {
            for (int space = 1; space <= (((n / 2) + 1) - row); space++)
            {
                cout << " ";
            }
            // print stars
            for (int star = 1; star <= row; star++)
            {
                cout << "* ";
            }
        }
        else
        {
            // print bottom pyramid
            for (int space = 1; space <= (row - ((n / 2) + 1)); space++)
            {
                cout << " ";
            }
            // print stars
            for (int star = 1; star <= ((n - row) + 1); star++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
    return 0;
}
