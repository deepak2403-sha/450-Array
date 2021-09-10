#include <bits/stdc++.h>
using namespace std;

// Partial recursion
void bubbleSort(int *arr, int n, int i)
{
    if (i == n - 1)
    {
        return;
    }

    for (int j = 0; j <= n - 2 - i; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }

    bubbleSort(arr, n, i + 1);
}

//Complete recursion
void bubbleSortCompleteRec(int *arr, int n, int i, int j)
{
    if (i == n - 1)
        return;
    if (j == n - 1 - i)
    {
        bubbleSortCompleteRec(arr, n, i + 1, 0);
    }
    else
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
        bubbleSortCompleteRec(arr, n, i, j + 1);
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

    bubbleSortCompleteRec(arr, n, 0, 0);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}