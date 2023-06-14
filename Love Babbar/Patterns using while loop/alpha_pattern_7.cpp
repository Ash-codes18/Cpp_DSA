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
        char alpha = 'A';
        int j = 0;
        alpha = alpha + i;
        while (j <= i)
        {
            cout << alpha << " ";
            j++;
            alpha++;
        }
        cout << endl;
        i++;
    }

    return 0;
}