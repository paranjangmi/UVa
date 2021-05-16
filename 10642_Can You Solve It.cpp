# include<bits/stdc++.h>
using namespace std;


int main(){
	
	int T;
	cin>>T;
	for(int c=1; c<=T; c++){
		int ans;
		int x,y,step1,step2;
		cin>>x>>y;
		step1 = (1+x+y)*(x+y)/2+x;
		cin>>x>>y;
		step2 = (1+x+y)*(x+y)/2+x;
		
		
		cout<<"Case "<<c<<": "<<step1-step2<<endl;
	}
	
	return 0;
}
