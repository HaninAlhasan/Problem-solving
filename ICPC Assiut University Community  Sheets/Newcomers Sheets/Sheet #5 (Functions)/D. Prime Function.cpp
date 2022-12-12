#include <bits/stdc++.h>
using namespace std;
bool Prime(int num)
{
    int n = sqrt(num);
    if(num <= 1)
    {
        return false;
    }
    else
    {
        for(int i = 2; i <= n; i++)
        {
            if(num%i == 0)
                return false;
        }
    }
    return true;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int num; cin >> num;
        Prime(num) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
