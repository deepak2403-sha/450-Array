#include <iostream>
using namespace std;
string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printP(int n)
{
    if (n == 0)
    {
        return;
    }
    int digits = n % 10;
    cout << numbers[digits] << " ";

    printP(n / 10);
}
int main()
{
    int n;
    cin >> n;
    printP(n);
}