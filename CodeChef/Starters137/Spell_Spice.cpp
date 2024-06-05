#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int arr[n][2];
        int sum,ans = 0;

        for (int j = 0; j < n; j++)
        {
            cin>>arr[j][0]>>arr[j][1];
        }    

        for (int j = 0; j < n; j++)
        {
          for(int k = j+1; k < n; k++){
            sum = arr[j][0]*arr[k][1]+arr[j][1]*arr[k][0];
            if(sum>ans){
              ans = sum;
            }
          }
        }
      
       cout<<ans<<endl;
    } 
  
    return 0;
}