#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r,R;
    cin>>n>>l>>r;
    R=r;

    for (int i = 1; i <= n; i++)
    {
        if (i<l||i>R) {
            (i==n)?cout<<i<<"":cout<<i<<" ";
        }else
        {
            if (r>=l)
            {
                cout<<r--<<" ";
            }            
        }        
    }    
}