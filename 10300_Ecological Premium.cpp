# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,f;
	long long a,tmp,ans;
	cin>>n;
	while(n--){
		cin>>f;
		ans=0;
		for(int j=0;j<f;j++){
			tmp=1;
			for(int i=0;i<3;i++){
				cin>>a;
				if(i!=1){
					tmp*=a;
				}
			}
			ans+=tmp;	
		}	
		cout<<ans<<endl;		
	}
	return 0;
}
