#include <bits/stdc++.h>
using namespace std;
int Distinct(int n,int arr[])
{
    sort(arr,arr+n);
    int cntr = n;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            cntr--;
        }
            
    }
    return cntr;
}
int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    cout << Distinct(n,arr) << endl;
	return 0;
}
