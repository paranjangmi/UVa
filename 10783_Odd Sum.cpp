# include<bits/stdc++.h>
using namespace std;


int main(){
	
	int T;
	cin>>T;
	for(int c=1; c<=T; c++){
		int a,b,odd=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(i%2) odd+=i ;
		}
		cout<<"Case "<<c<<": "<<odd<<endl;
	}
	
	return 0;
}
