#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0,remainder;
    cin>>n;

    while (n!=0)
    {
        remainder = n % 10;
        if (remainder>4)
        {
            remainder = 9 - remainder;
            
        }
        ans = ans * 10 + remainder;
        n /= 10;        
    }    
    cout<<ans;    
}