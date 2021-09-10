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
    int l = 0;
    int m = 0;
    int r = n - 1;
    while (m <= r)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else if (arr[m] == 2)
        {
            swap(arr[m], arr[r]);
            r--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}