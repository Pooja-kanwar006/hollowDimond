#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter rows:";
    cin >> rows;
    for (int i = 0; i < (rows); i++)
    {
        int k = 0;
        // first half

        // 1 spaces
        for (int j = 0; j < (rows - i- 1); j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < i + 1; j++)

        {
            if (k == 0 || k == i)
            {
                cout << "* ";
            }

            else
            {
                cout << "  ";
            }
            k++;
        }
        cout << endl;
    }

    // second half

    for (int i = 0; i < (rows); i++)
    {
        int k = 0;
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < rows - i; j++)
        {
            if (k == 0 || k == (rows - i - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            k++;
        }
        cout << endl;
    }
}