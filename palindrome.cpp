#include <iostream>
using namespace std;
int main()
{
    int a[6] = {1, 2, 3, 3, 2, 1};
    int n;
    n = 6;
    bool flag = true;
    // cin>>n;
    // for (int i=0;i<n;i++)
    // cin>>a[i];
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "pallindrome";
    else
        cout << "not pallindrome";
    return 0;
}