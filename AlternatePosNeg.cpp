#include <bits/stdc++.h>
using namespace std;

void fill1(int arr[], int neg, int pos)
{
    if (neg % 2 == 1)
    {
        for (int i = 1; i < neg; i += 2)
        {
            int c = arr[i];
            int d = arr[i + neg];
            int temp = c;
            arr[i] = d;
            arr[i + neg] = temp;
        }
    }
    else
    {
        for (int i = 1; i <= neg; i += 2)
        {
            int c = arr[i];
            int d = arr[i + neg - 1];
            int temp = c;
            arr[i] = d;
            arr[i + neg - 1] = temp;
        }
    }
}

void fill2(int arr[], int neg, int pos)
{
    if (pos % 2 == 1)
    {
        for (int i = 0; i < pos; i += 2)
        {
            int c = arr[i];
            int d = arr[i + pos];
            int temp = c;
            arr[i] = d;
            arr[i + pos] = temp;
        }
    }
    else
    {
        for (int i = 1; i <= pos; i += 2)
        {
            int c = arr[i];
            int d = arr[i + pos - 1];
            int temp = c;
            arr[i] = d;
            arr[i + pos - 1] = temp;
        }
    }
}

void reverse(int arr[], int n)
{
    int i, k, t;
    for (int i = 0; i < n / 2; i++)
    {
        t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
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
    int neg = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }
    sort(arr, arr + n);
    if (neg <= pos)
    {
        fill1(arr, neg, pos);
    }
    else
    {
        reverse(arr, n);
        fill2(arr, neg, pos);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}