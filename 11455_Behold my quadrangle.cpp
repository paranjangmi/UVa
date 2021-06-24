# include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a[4];
	cin>>t;
	while(t--){
		cin>>a[0]>>a[1]>>a[2]>>a[3]; 
		sort(a,a+4);
		if(a[0]==a[3]){
			cout<<"square\n";
		}else if(a[0]==a[1] && a[2]==a[3]){
			cout<<"rectangle\n";
		}else if(a[0]+a[1]+a[2]>a[3]){
			cout<<"quadrangle\n";
		}else{
			cout<<"banana\n";
		}
	}
}
