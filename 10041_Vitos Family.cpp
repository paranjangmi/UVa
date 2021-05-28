# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int T;
	cin>>T;
	while(T--){
		int r;
		cin>>r;
		int s[r];
		for(int i=0;i<r;i++){
			cin>>s[i];
		}
		sort(s,s+r);
		int sum=0;
		for(int i=0;i<r;i++){
			sum += abs(s[i]-s[r/2]);
		}
		cout<<sum<<endl;
	}
	

	return 0;
}
