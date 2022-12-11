#include <bits/stdc++.h>
using namespace std;
long long equation(short x,short n);
int main()
{
    short x,n;
    cin >> x >> n;
    cout << equation(x,n) << endl;
	return 0;
}
long long equation(short x,short n)
{
    long long sum = pow(x,0)-1;
    for(short i = 2; i <= n; i+=2)
    {
        sum += pow(x,i);
        //cout << i << " : " << sum << "\n";
    }
    return sum;
}
