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
    int maxsum=0;
    int currsum=0;
    int left =-1;
    int right =-1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            currsum=0;
            for (k = i; k <= j; k++)
            {
                currsum+=arr[k];
            }
            if(currsum>maxsum){
                maxsum=currsum;
                left =i;
                right=j;
            }
            
        }
    }

    cout<<"sabse bada sum  is  "<<maxsum <<endl;
    for(int k=left;k<=right;k++){
        cout<<arr[k]<<" ,";

    }
    

    return 0;
} 