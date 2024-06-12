// CodeForces 151A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink = k*l;
    int slices = c*d;
    int salt = p;

    int drinkReq = n*nl;
    int slicesReq = n;
    int saltReq = n*np;

    int maxDrink = drink/drinkReq;
    int maxSlice = slices/slicesReq;
    int maxSalt = salt/saltReq;

    cout<<min<int>({maxDrink,maxSlice,maxSalt});
}