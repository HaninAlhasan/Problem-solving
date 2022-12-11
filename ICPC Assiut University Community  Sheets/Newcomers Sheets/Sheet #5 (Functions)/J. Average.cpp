#include <bits/stdc++.h>
using namespace std;
double average(double sum, short n)
{
    float res = sum/n;
    return res;
}
int main()
{
    int n; cin >> n;
    double sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        double val;
        cin >> val;
        sum += val;
    }
    cout << fixed << setprecision(6) <<  average(sum, n) << endl;
	return 0;
}
