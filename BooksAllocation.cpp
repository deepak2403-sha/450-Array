#include <bits/stdc++.h>
using namespace std;

bool isAllocationPossible(int *arr, int barrier, int students, int n)
{
    int stduentsReq = 1, current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > barrier)
            return false;
        if (arr[i] + current_sum > barrier)
        {
            stduentsReq++;
            current_sum += arr[i];
        }
        else
        {
            current_sum += arr[i];
        }
    }
    if (stduentsReq > students)
        return false;
    return true;
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
    int students;
    cin >> students;
    int start = arr[0], sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        start = min(start, arr[i]);
    }
    int end = sum, res = -1;
    while (start < end)
    {
        int mid = (start + end) >> 1;
        if (isAllocationPossible(arr, mid, students, n))
        {
            res = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << res << endl;
}