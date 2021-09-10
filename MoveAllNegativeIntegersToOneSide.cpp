#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (arr[l] < 0 && arr[r] < 0)
        {
            l++;
        }
        else if (arr[l] > 0 && arr[r] < 0)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
        else if (arr[l] > 0 && arr[r] > 0)
        {
            r--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*  

If we are allowed to use extra space then --> 

void segregateArray(int arr[], int n){
    int temp[n];
    int j=0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            temp[j++] = arr[i];
        }
    }
    if(j == n || j == 0) --> checking if temp contains all +ve or -ve 
    return;

    for(int i = 0; i < n; i++){
        if(arr[i]<0){
            temp[j++] = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        cout<< arr[i];
    }
}

*/