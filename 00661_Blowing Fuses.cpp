# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,c,seq=1;
	while(cin>>n>>m>>c && n+m+c){
		int a[n],s[n],k[m],amt=0,mx=0;
		memset(s,0,sizeof(s));
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>k[i];
			s[k[i]-1]++;
			s[k[i]-1]%=2;
			if(s[k[i]-1]){
				amt+=a[k[i]-1];
			}else{
				amt-=a[k[i]-1];
			}
			mx=max(mx,amt);
		}
		if(seq>1) cout<<endl;
		if(amt>c){
			cout<<"Sequence "<<seq<<"\nFuse was blown.\n";
		}else{
			cout<<"Sequence "<<seq<<"\nFuse was not blown.\nMaximal power consumption was "<<mx<<" amperes.\n";  
		}
		seq++;
	}
	return 0;
}
