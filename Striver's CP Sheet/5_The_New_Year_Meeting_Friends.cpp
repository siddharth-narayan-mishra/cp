//CodeForces 723A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    int ans = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+3);

    for (int i = arr[0]; i < arr[2]; i++)
    {
        int totalDistance = abs(i-arr[0])+abs(arr[1]-i)+abs(arr[2]-i);
        if (totalDistance<ans)
        {
            ans=totalDistance;
        }        
    }

    cout<<ans;       
}