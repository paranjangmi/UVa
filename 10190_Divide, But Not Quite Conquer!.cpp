# include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		vector<int> ans;
		bool flag=true;
		if(n==0 || m==0 || n<m || m==1) {
			cout<<"Boring!"<<endl;
		}else{
			ans.push_back(n);
			while(n!=1){
				if(n%m==0){
					ans.push_back(n/m);
					n /= m;
				}else{
					cout<<"Boring!"<<endl;
					flag = false;
					break;
				}
			}
			
			if(flag){
				for(int i=0;i<ans.size();i++){
					if(i==0) cout<<ans[i];
					else cout<<" "<<ans[i];
				}
				cout<<endl;
			}					
		}
			
		
	}
	return 0;
}
