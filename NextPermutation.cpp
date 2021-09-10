#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "deepak";
    bool val = next_permutation(s.begin(), s.end());
    if (val == false)
    {
        cout << "Not valid" << endl;
    }

    cout << s << endl;
}