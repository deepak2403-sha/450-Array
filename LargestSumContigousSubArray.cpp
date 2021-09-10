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
    int sum = 0;
    int element = INT_MIN;
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (arr[i] < 0)
        {
            element = std::max(element, arr[i]);
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    if (max == 0)
    {
        cout << element << endl;
    }
    else
    {
        cout << max << endl;
    }
}