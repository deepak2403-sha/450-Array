#include <iostream>
using namespace std;

void findIntersection(int *arr1, int *arr2, int *arr3)
{
    int i = 0, j = 0, k = 0;
    while (!(i >= arr1.size() || j >= arr2.size() || k >= arr3.size()))
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}

int main()
{
    int n, m, o;
    cin >> n >> m >> o;
    int arr1[n];
    int arr2[m];
    int arr3[o];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < 0; i++)
    {
        cin >> arr3[i];
    }

    findIntersection(arr1, arr2, arr3);
}
