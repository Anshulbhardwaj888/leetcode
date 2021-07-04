#include <iostream>
using namespace std;

int maxsumsubb(int a[], int n)
{
    int maxsum = 0;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum = currsum + a[i];
        if (currsum > maxsum)
        {
            maxsum = currsum;
            
        }
        if (currsum < 0)
            {
                currsum = 0;
            }
    }
    return maxsum;
}

int main()
{
    int a[] = {-2, -3, 4, -1, 28,-2, 1, 5, -3};
    int n = 9;
    int max_sum = maxsumsubb(a, n);
    cout << "Maximum contiguous sum of array is " << max_sum;
    return 0;
}