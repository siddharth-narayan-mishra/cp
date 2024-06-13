//CodeForces 510A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    for (int i = 1; i <= n; i++)
    {   
        if (i%4==2)
        {
            for (int i = 0; i < m-1; i++)
            {
                cout<<'.';
            }
            cout<<'#';
        }else if (i%4==0)
        {
            cout<<'#';
            for (int i = 0; i < m-1; i++)
            {
                cout<<'.';
            }           
        }else
        {
            for (int i = 0; i < m; i++)
            {
                cout<<'#';
            }
        }     
        
        if (i!=n)cout<<endl;
    }    
}
