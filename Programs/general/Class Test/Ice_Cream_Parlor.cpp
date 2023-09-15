#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int amt, flavours;
        cin >> amt;
        cin >> flavours;
        int arr[flavours];

        for (int i = 0; i < flavours; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < flavours; i++)
        {
            int flag=0;
            for (int j = 0; j < flavours; j++)
            {
                if (j != i)
                {
                    if (arr[i] + arr[j] == amt)
                    {
                        cout << i + 1 << " " << j + 1 << endl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag){break;}
        }
    }

    return 0;
}