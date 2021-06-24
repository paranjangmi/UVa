# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,d,r,mn;
	string s;
	while(cin>>n && n){
		mn=2000000;
		d=-1,r=-1;
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='Z'){
				mn=0;
				break;
			}else if(s[i]=='D'){
				d=i;
			}else if(s[i]=='R'){
				r=i;
			}
			if(d>=0 && r>=0) mn=min(abs(d-r),mn);
		}
		cout<<mn<<endl;
	}
	
	return 0;
}
