//CodeForces 1532A
#include<bits/stdc++.h>
using namespace std;

int powerOfTen(int x){
    int result = 1;
    for (int i = 0; i < x; i++)
    {
        result*=10;
    }
    return result;
}

int main(){
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        string n;
        cin>>n;
        vector<int> arr;

        int count = 0;
        for (int j = 0; j < n.size(); j++)
        {
            if (n[j]!='0')
            {
                int digit = n[j]-'0';

                int ans = digit*powerOfTen(n.size()-j-1);

                arr.push_back(ans);

                count++;
            }            
        }
        cout<<count<<endl;

        for (int j = 0; j < count; j++)
        {
            cout<<arr[j]<<" ";
        }

        cout<<endl;
             
    }    
}