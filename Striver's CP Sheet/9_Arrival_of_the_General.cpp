//CodeForces 144A
#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
int max=0;
int min=1000;
int maxP=0;
int minP=0;
cin>>n;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
if(x>max){
	maxP=i;
	max=x;
}
 if(x<=min){
	minP=i;
	min=x;
 }
}
if(maxP>minP){
	cout<<(maxP-1)+(n-minP)-1;
}
else{
	cout<<(maxP-1)+(n-minP);

}
	return 0;
}