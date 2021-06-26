# include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	while(cin>>n && n){
		int a[n];
		while(1){
			cin>>a[0];
			if(a[0]==0) break;
			for(int i=1;i<n;i++){
				cin>>a[i];
			}
			int p=1;
			stack<int> stk;
			bool f=true;
			for(int i=0;i<n;i++){
				if(a[i]>=p){
					for(int j=p;j<a[i];j++){
						stk.push(j);
					}
					p=a[i]+1;
				}else if(!stk.empty() && stk.top()==a[i]){
					stk.pop();
				}else{
					f=false;
					break;
				}				
			}
			if(f) cout<<"Yes\n";
			else cout<<"No\n";
		}
		cout<<endl;
	}
	
	return 0;
}
