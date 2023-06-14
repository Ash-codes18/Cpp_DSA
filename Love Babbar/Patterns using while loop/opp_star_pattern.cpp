#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the no. of rows in the pattern : ";
    cin >> n;

    int i = 0;

    while (i < n)
    {

        int j = 0;
        int c = n - 1;
        while (c >= i)
        {

            cout << "*";
            c--;
        }

        cout << endl;
        i++;
    }

    return 0;
}