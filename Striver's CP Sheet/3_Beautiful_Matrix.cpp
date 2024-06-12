//CodeForces 263A
#include<iostream>
using namespace std;

int absolute(int num){
    if (num<0) {
        return num*=-1;
    }else{
        return num;
    }

}

int main(){
    int x,y;
    for (int i = 0; i < 25; i++)
    {
        int input;
        cin>>input;
        if (input == 1)
        {
            x = (i+1)%5;
            y = (i+1)/5+1;
            if(x==0) x=5,y-=1;   
        }        
    }

    int X = 3-x;
    int Y = 3-y;

    cout<<absolute(X)+absolute(Y);
    
}