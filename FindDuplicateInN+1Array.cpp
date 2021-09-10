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
    int slow = arr[0], fast = arr[arr[0]];
    if (n <= 1)
    {
        cout << "-1";
    }
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    fast = 0;
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    cout << slow << endl;
}