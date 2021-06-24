# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,a[100],x;
	while(cin>>n && n){	
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++){
			cin>>x;
			a[x]++;
		}	
		for(int i=0;i<100;i++){
			while(a[i]--){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
