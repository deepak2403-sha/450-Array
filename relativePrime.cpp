#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;
    int pairs = (r - l + 1) / 2;
    cout << "YES" << endl;
    while (l < r)
    {
        cout << l << " " << l + 1 << " " << endl;
        l += 2;
    }
}