#include<iostream>
using namespace std;


void printtwoelements (int arr[] ,int size)
{
    int i;
    
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            cout << (i + 1);
    }
}
}
    int main()

{
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = 7;
    printtwoelements(arr, 7);
}
