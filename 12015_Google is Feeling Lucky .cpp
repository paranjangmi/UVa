# include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	string s[10];
	int r[10];
	for(int t=1;t<=T;t++){
		int maxn=0;
		for(int i=0;i<10;i++){
			cin>>s[i]>>r[i];
			maxn = max(r[i],maxn);
		}
		cout<<"Case #"<<t<<":\n";
		for(int i=0;i<10;i++){
			if(r[i]==maxn){
				cout<<s[i]<<endl;
			}
		}
	}
	
	return 0;
}
