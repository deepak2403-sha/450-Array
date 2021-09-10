#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        x = x ^ arr[i];
    }
    int temp = x;
    int pos = 0;
    while ((temp & 1) == 0)
    {
        pos++;
        temp = temp >> 1;
    }
    int mask = 1 << pos;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & mask > 0)
            res = res ^ arr[i];
    }
    int ans = res ^ x;
    cout << min(res, ans) << " " << max(res, ans);
    return 0;
}
