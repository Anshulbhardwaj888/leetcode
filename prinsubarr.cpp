#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int k;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
    return 0;
}