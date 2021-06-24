# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	while(cin>>a>>b){
		if(a==-1 && b==-1) break;
		cout<<min((100+a-b)%100,(100-a+b)%100)<<endl;
	}
	return 0;
}
