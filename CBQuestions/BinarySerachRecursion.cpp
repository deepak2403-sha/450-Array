#include <bits/stdc++.h>
using namespace std;

int binarySerachRec(int *arr, int n, int s, int e, int target)
{
    if (s > e)
    {
        return -1; //
    }

    int mid = (s + e) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return binarySerachRec(arr, n, s, mid - 1, target);
    }
    else
    {
        return binarySerachRec(arr, n, mid + 1, e, target);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target = 0;
    cin >> target;
    cout << binarySerachRec(arr, n, 0, n - 1, target);
    return 0;
}