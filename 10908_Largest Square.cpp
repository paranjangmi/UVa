# include<bits/stdc++.h>
using namespace std;


int main(){
	
	int T,M,N,Q;
	int a[105][105],mx[105][105],r,c,ans;
	char ch;
	cin>>T;
	while(T--){
		cin>>M>>N>>Q;
		cout<<M<<" "<<N<<" "<<Q<<endl;
		for(int i=0;i<M;i++){
			for(int j=0;j<N;j++){
				cin>>ch;
				a[i][j] = (int)ch;
			}
		}
		
		while(Q--){
			cin>>r>>c;
			ans = 1;
			bool flag = true;
			for(int i=1;i<=100;i++){
				for(int x=r-i; x<=r+i; x++){
					for(int y=c-i; y<=c+i; y++){
						if(x<0 || y<0 || x>=M || y>=N){
							flag = false;
							break;
						}
						if(a[r][c]!=a[x][y]){
							flag = false;
							break;
						}
					}
					if(!flag) break;
				}
				if(!flag) break;
				else ans+=2;
			}
			cout<<ans<<endl;
		}
	}
		
	

		
	return 0;
}
