# include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,m,x=0;
	while(cin>>n>>m){
		if(n==0 && m==0) break;
		x++;
		
		char a[150][150];
		for(int i=0;i<=n+1;i++){
			for(int j=0;j<=m+1;j++){
				if(i==0 || j==0 || i==n+1 || j==m+1)
					a[i][j]='.';
				else
					cin>>a[i][j];
			}
		}
		if(x>1) cout<<endl;
		cout<<"Field #"<<x<<":"<<endl;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				int count=0;
				if(a[i][j]=='*'){
					cout<<'*';
				}else{
					if(a[i-1][j-1]=='*') count++;
					if(a[i-1][j]=='*') count++;
					if(a[i-1][j+1]=='*') count++;
					if(a[i][j-1]=='*') count++;
					if(a[i][j+1]=='*') count++;
					if(a[i+1][j-1]=='*') count++;
					if(a[i+1][j]=='*') count++;
					if(a[i+1][j+1]=='*') count++;
					cout<<count;
				}
			}
			cout<<endl;
		}
		
	}
	
	
	return 0;
}
