# include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long S,D;
	while(cin>>S>>D){
		long cnt=0,ans;
		while(1){
			cnt+=S;
			if(cnt<D) S++;
			else{
				ans = S;
				break;
			}
		}
		cout<<ans<<endl;
	}
	
	
	return 0;
}
