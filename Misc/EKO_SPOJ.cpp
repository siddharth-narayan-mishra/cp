#include<bits/stdc++.h>
using namespace std;

int isPossibleSolution(vector<int> v,int n,int m,int sol){
    int wood = 0;

    for (int i = 0; i < n; i++)
    {
        if(v[i]>sol)wood += v[i] - sol;
    }

    cout<<"Checking if mid is a solution......."<<endl<<"Total wood cut = "<<wood<<endl;
    
    if (wood>=m)
    {
        cout<<"Total wood cut > M."<<endl<<"Mid is a possible answer."<<endl;
        return true;
    }else{
        cout<<"Total wood cut < M."<<endl<<"Mid is NOT a possible answer."<<endl;
        return false;
    }
    
}

int EKO(vector<int> v,int n,int m){
    int start = 0;
    int end = *max_element(v.begin(),v.end());
    int ans = -1;
    cout<<endl<<"Initial Start :"<<start<<endl<<"Initial End: "<<end<<endl;
    int count = 0;

    while (start<=end)
    {   
        cout<<endl<<"Iteration number: "<<++count<<endl;
        cout<<"Start: "<<start<<endl;
        cout<<"End: "<<end<<endl;
        int mid = start + (end - start)/2;
        cout<<"Mid: "<<mid<<endl;
        if (isPossibleSolution(v,n,m,mid))
        {
            ans = mid;
            start = mid + 1;
            cout<<"Start updated to: "<<start<<endl<<"New Answer: "<<ans<<endl;
        }else{
            end = mid - 1;
            cout<<"End updated to: "<<end<<endl;
        }        
    }

    cout<<"Start: "<<start<<endl<<"End: "<<end<<endl;
    cout<<endl<<"Start > End."<<endl<<"Breaking out of loop....."<<endl;
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n,0);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v[i]=a;
    }

    cout<<endl<<"Maximum possible height: "<<EKO(v,n,m)<<endl;
    

    return 0;
}