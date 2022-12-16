#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int new_arr[n];
    int t = m%n;
  
    for(int i = 0; i <n; i++)
        cin >> arr[i];
  
    int j = 0;
    for(int i = n-t; i < n; i++)
    {
        new_arr[j] = arr[i];
        j++;
    }
  
    for(int i = 0; i < n-t; i++)
    {
        new_arr[j] = arr[i];
        j++;
    }
  
    for(int i = 0; i < n; i++)
        cout << new_arr[i] << " ";
  
    cout << endl;
    return 0;
}
