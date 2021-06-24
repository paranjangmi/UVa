# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T,a[10][10];
	cin>>T;
	while(T--){
		memset(a,0,sizeof(a));
		for(int i=0;i<5;i++){
			for(int j=0;j<=i;j++){
				cin>>a[2*i+1][2*j+1];
			}
		}
		for(int i=2;i<=8;i+=2){
			for(int j=1;j<=i;j+=2){
				a[i+1][j+1] = (a[i-1][j]-a[i+1][j]-a[i+1][j+2])/2;
				a[i][j] = a[i+1][j]+a[i+1][j+1];
				a[i][j+1] = a[i+1][j+2]+a[i+1][j+1];
			}
		}
		for(int i=1;i<=9;i++){
			for(int j=1;j<=i;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
	
	return 0;
}
