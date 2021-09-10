#include <iostream>
using namespace std;
int helprahul(int *arr, int n, int s, int e, int k)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    if (arr[mid] == k)
        return mid;
    if (arr[s] <= arr[mid])
    {
        if (k >= arr[s] && k <= arr[mid])
        {
            return helprahul(arr, n, s, mid - 1, k);
        }
        else
        {
            return helprahul(arr, n, mid + 1, e, k);
        }
    }
    else
    {
        if (k >= arr[mid] && k <= arr[e])
        {
            return helprahul(arr, n, mid + 1, e, k);
        }
        else
        {
            return helprahul(arr, n, s, mid - 1, k);
        }
    }
}
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
    cout << helprahul(arr, n, 0, n - 1, k);
    return 0;
}