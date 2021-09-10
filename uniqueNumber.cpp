// 1 1 1 2 2 2 3 4 4 4
// 3

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < n; i++)
    {
        ones = ((ones ^ nums[i]) & (~twos));
        twos = ((twos ^ nums[i]) & (~ones));
    }
    cout << ones;
    return 0;
}