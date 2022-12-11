#include <bits/stdc++.h>
using namespace std;
const int s = 500;
void SwapRow_X_and_Y(int n,int x,int y, int arr[s][s])
{
    for(int i = 0; i < n; i++)
    {
        //swap row x and row y
        int temp_row = arr[x][i];
        arr[x][i] = arr[y][i];
        arr[y][i] = temp_row;
    }
}
void SwapColumn_X_and_Y(int n,int x,int y, int arr[s][s])
{
    for(int i = 0; i < n; i++)
    {
        //swap column x and column y        
        int temp_col = arr[i][x];
        arr[i][x] = arr[i][y];
        arr[i][y] = temp_col;
    }
}
void Print2DArray(int arr[s][s], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
           cout << arr[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    int arr[s][s];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    x--; y--;
    SwapRow_X_and_Y(n, x, y, arr);
    SwapColumn_X_and_Y(n, x, y, arr);
    Print2DArray(arr,n);
    
	return 0;
}
