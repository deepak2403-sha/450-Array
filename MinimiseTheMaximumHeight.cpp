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
    int k;
    cin >> k;
    int minElement, maxElement;
    sort(arr, arr + n);
    int result = arr[n - 1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= k && arr[n - 1] >= k)
        {
            maxElement = max(arr[i - 1] - k, arr[n - 1] + k);
            minElement = min(arr[0] + k, arr[i] + k);
            result = min(result, maxElement - minElement);
        }
    }
    cout << result << endl;
}