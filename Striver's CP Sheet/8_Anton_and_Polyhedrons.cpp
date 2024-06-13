//CodeForces 785A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        string poly;
        cin>>poly;

        if (poly=="Tetrahedron")
        {
            ans+=4;
        }else if (poly=="Cube")
        {
            ans+=6;
        }else if (poly=="Octahedron")
        {
            ans+=8;
        }else if (poly=="Dodecahedron")
        {
            ans+=12;
        }else if (poly=="Icosahedron")
        {
            ans+=20;
        }
        
    }
    cout<<ans;
}