#include<bits/stdc++.h>
using namespace std;
int sumOfDigit(int n){
    int sum = 0;

    while(n !=0){
        int  last = n % 10;
        sum +=last;
        n = n / 10 ;
    }
    return sum ;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;

    cout<<sumOfDigit(n)<<endl;
    cout<<sumOfDigitre(n)<<endl;

 return 0;
}
