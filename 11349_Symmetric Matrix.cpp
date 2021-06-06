# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int T,n;
	char s;
	cin>>T;
	for(int c=1;c<=T;c++){
		cin>>s>>s>>n;
		long long a[n][n];
		bool flag = true;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				if(a[i][j]<0){
					flag = false;
				}
			} 
		}
		if(!flag){
			cout<<"Test #"<<c<<": Non-symmetric.\n";
		}else{
			for(int i=0;i<ceil(n/2.0);i++){
				for(int j=0;j<n;j++){
					if(a[i][j]!=a[n-1-i][n-1-j]){
						flag = false;
						break;
					}
				}
				if(!flag) break;
			}
			if(!flag){
				cout<<"Test #"<<c<<": Non-symmetric.\n";
			}else{
				cout<<"Test #"<<c<<": Symmetric.\n";
			}	
		}
		
	}
	
	
	return 0;
}
