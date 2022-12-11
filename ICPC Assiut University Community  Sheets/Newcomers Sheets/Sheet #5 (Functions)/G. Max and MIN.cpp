#include <bits/stdc++.h>
using namespace std;
int minimum(int n, int arr[])
{
    int minimum = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    return minimum;
}
int maximum(int n, int arr[])
{
    int maxi = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << minimum(n, arr) << " " << maximum(n, arr) << endl;
	return 0;
}
 
