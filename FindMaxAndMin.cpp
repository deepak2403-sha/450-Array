#include <iostream>
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
    int mini = arr[0];
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << mini << endl;
    cout << mx << endl;
    return 0;
}