//CodeForces 1030A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        ans = ans&&(!a);
    }

    if (ans)
    {
        cout<<"EASY";
    }else{
        cout<<"HARD";
    }
    
    
}