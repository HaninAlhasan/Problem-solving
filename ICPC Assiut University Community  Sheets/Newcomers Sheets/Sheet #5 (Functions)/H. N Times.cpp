#include <bits/stdc++.h>
using namespace std;
int print(short n, char c);
int main()
{
    short t; cin >> t;
    while(t--)
    {
        short n; char c;
        cin >> n >> c;
        print(n,c);
        cout << "\n";
    }
	return 0;
}
int print(short n, char c)
{
    for(int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    return 0;
}
