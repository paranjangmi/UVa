# include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		for(int i=1;i<=b;i++){
			for(int j=1;j<=a;j++){
				for(int k=1;k<=j;k++){
					cout<<j;
				}
				cout<<endl;
			}
			for(int j=a-1;j>=1;j--){
				for(int k=1;k<=j;k++){
					cout<<j;
				}
				cout<<endl;
			}
			cout<<endl;
		}
	}	
}
