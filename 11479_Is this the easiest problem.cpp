#include<bits/stdc++.h>
using namespace std;

int main(){
  	int T;
  	long long a[3];
  	bool flag;
	cin>>T;
  	for(int i=1;i<=T;i++){
  		flag = true;
  		for(int j=0;j<3;j++){
  			cin>>a[j];	
  			if(a[j]<=0){
  				flag=false;
			}
			
		}		
			
		if(!flag){
			cout<<"Case "<<i<<": Invalid\n";	
			continue;
		}
		
		sort(a,a+3);		
		if(a[0]+a[1]<=a[2]){
			cout<<"Case "<<i<<": Invalid\n";
		}else if(a[0]==a[2]){
			cout<<"Case "<<i<<": Equilateral\n";
		}else if(a[0]==a[1] || a[1]==a[2]){
			cout<<"Case "<<i<<": Isosceles\n"; 
		}else{
			cout<<"Case "<<i<<": Scalene\n"; 
		}
  		
	}
	
	return 0;
}
