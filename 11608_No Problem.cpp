# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int S,Case=1,a[13],b[12];
	while(cin>>S){
		if(S==-1) break;
		a[0]=S;
		for(int i=1;i<=12;i++){
			cin>>a[i];
		}
		for(int i=0;i<12;i++){
			cin>>b[i];
		}
		cout<<"Case "<<Case++<<":\n";
		S=0;
		for(int i=0;i<12;i++){
			S+=a[i];
			if(S>=b[i]){
				cout<<"No problem! :D\n";
				S-=b[i];
			}else{
				cout<<"No problem. :(\n";
			}
		}
		
	}
	
	return 0;
}
