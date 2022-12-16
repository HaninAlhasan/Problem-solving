#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cntr = 0;
    for(int i = 0; i < n; i++)
    {
        int val; cin >> val;
        if(val != 0)
            cout << val << " ";
        else
            cntr++;
    }
    while(cntr--)
        cout << 0 << " ";
    cout << endl;
    return 0;
}
