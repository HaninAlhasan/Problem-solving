#include <bits/stdc++.h>
using namespace std;
int sum(int x,int y);
int main()
{
    int x,y;
    cin >> x >> y;
    cout << sum(x,y) << endl;
	return 0;
}
int sum(int x,int y)
{
    int sum;
    sum = x + y;
    return sum;
}
