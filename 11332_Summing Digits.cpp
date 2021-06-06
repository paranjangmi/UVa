#include <bits/stdc++.h>
using namespace std;

int sumD(int num){
	int sum=0;
	while(num/10){
		sum+=num%10;
		num/=10;
	}
	sum+=num;
	if(sum/10) return sumD(sum);
	else return sum;
}

 
int main() {
    
    int n;
    while(cin>>n && n){
    	cout<<sumD(n)<<endl;
	}
    
    return 0;
}
