#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int start = 0, end = n - 1;
        while (start <= end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}