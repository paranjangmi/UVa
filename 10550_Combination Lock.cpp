# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int s,a,b,c,deg;
	while(cin>>s>>a>>b>>c && s+a+b+c){
		deg=1080;
		deg+=(40+s-a)%40*9;
		deg+=(40-a+b)%40*9;
		deg+=(40+b-c)%40*9;
		cout<<deg<<endl;		
	}
	return 0;
}
