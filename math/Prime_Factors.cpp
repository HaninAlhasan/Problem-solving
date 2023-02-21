 #include <bits/stdc++.h>
using namespace std;
int main(){
    int value; cin >> value;
    int SquareRootOfValue;
    int FrequencyArray[SquareRootOfValue] = {0};
    //we start with 2 because value%0 and value%1 will always be 0 (infinite loop)
    for(int i = 2; i < SquareRootOfValue; i++){
        while(value%i == 0){
            value /= i;
            FrequencyArray[i]++;
        }
    }
    for(int i = 0; i < SquareRootOfValue; i++){
        if(FrequencyArray[i] != 0){
            cout << i << "\n";
        }
    }
}
