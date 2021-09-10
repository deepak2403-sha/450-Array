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
    unordered_set<int> s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0 || s.find(sum) != s.end())
        {
            cout << "True";
            return 0;
        }
        s.insert(sum);
    }
    cout << "False" << endl;
    return 0;
}