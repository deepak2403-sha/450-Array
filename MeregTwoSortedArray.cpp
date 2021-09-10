#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int nums1[n];
    int nums2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }
    int arr[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (nums1[i] <= nums2[j])
        {
            arr[k++] = nums1[i++];
        }
        else
        {
            arr[k++] = nums2[j++];
        }
    }
    while (i < n)
    {
        arr[k++] = nums1[i++];
    }
    while (j < m)
    {
        arr[k++] = nums2[j++];
    }

    for (int a = 0; a < m + n; a++)
    {
        cout << arr[a] << " ";
    }
}