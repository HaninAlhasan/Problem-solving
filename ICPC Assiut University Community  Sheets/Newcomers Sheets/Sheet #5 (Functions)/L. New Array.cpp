#include <bits/stdc++.h>
using namespace std;
void merge(int n, int first_arr[], int second_arr[])
{
    for(int i = 0; i < n; i++)
        cout <<  second_arr[i] << " ";
        
    for(int i = 0; i < n; i++)
        cout << first_arr[i] << " ";
}
int main()
{
    int n;
    cin >> n;
    int first_arr[n];
    int second_arr[n];
    //taking inputs
    for(int i = 0; i < n; i++)
        cin >> first_arr[i];
        
    for(int i = 0; i < n; i++)
        cin >> second_arr[i];
        
    merge(n,first_arr,second_arr);
    cout << endl;
	return 0;
}
