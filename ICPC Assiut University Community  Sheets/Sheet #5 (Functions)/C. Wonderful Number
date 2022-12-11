#include <bits/stdc++.h>
using namespace std;
string Binary(int num)
{
    string binary = "";
    while(num != 0)
    {
        if(num%2 == 0)
        {
            binary.push_back('0');
            int t = num/2;
            //cout << "(" << num << ")/2 = " << t << " and remain is: " << 0 << "\n";
        }
        else
        {
            binary.push_back('1');
            int t = num/2;
            //cout << "(" << num << ")/2 = " << t << " and remain is: " << 1 << "\n";
        }
        num /= 2;
    }
    reverse(binary.begin(), binary.end());
    //cout << binary << endl;
    return binary;
}
bool palindrome(string bin)
{
    int n = (bin.size()+1)/2;
    int s = bin.size()-1;
    for(int i = 0; i < n; i++)
    {
        if(bin[i] != bin[s-i])
        {
            //cout << bin << " is not palindrome." << endl;
            return false;
        }
    }
    //cout << bin << " is palindrome." << endl;
    return true;
}
bool odd(int num)
{
    if(num%2 == 0)
    {
        //cout << "your number is even!\n";
        return false;
    }
    return true;
}
int main()
{
    int num;
    cin >> num;
    //cout << Binary(num) << endl;
    //cout << palindrome(Binary(num)) << endl;
    if(odd(num))
    {
        palindrome(Binary(num))? cout << "YES\n" : cout << "NO\n";
        return 0;
    }
    cout << "NO\n";
	return 0;
}
