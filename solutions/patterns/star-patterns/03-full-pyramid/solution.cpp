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
        // print spaces
        for (int space = 1; space <= (n - row); space++)
        {
            cout << " ";
        }

        // print stars
        for (int star = 1; star <= row; star++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
