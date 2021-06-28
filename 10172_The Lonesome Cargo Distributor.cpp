// ref:https://www.pinghenotes.com/UVa-10172-The-Lonesome-Cargo-Distributor/ 
# include<bits/stdc++.h> 
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int c,n,s,q,Q,Qi;
	cin>>c;
	while(c--){
		cin>>n>>s>>q;
		vector<queue<int>> vc;
		stack<int> stk;
		for(int i=0;i<n;i++){
			queue<int> qu;
			cin>>Q;
			for(int i=0;i<Q;i++){
				cin>>Qi;
				qu.push(Qi-1);
			}
			vc.push_back(qu);
		}
		int cur=0,time=0;
		while(1){
			
			while(!stk.empty() && (stk.top()==cur || vc[cur].size()<q)){
				if(stk.top()==cur){
					stk.pop();
					time++;
				}else{
					vc[cur].push(stk.top());
					time++;
					stk.pop();
				}	
			}
			while(!vc[cur].empty() && stk.size()<s){
				stk.push(vc[cur].front());
				vc[cur].pop();
				time++; 
			}
			bool out=true;
			for(int i=0;i<n;i++){
				if(!vc[i].empty() || !stk.empty()){
					cur+=1;
					cur%=n;
					time+=2;
					out=false;
					break;
				}
			}
			if(out) break;
			
			
		}
		cout<<time<<endl;
		
	}
	
	return 0;
}
//ref:https://www.pinghenotes.com/UVa-10172-The-Lonesome-Cargo-Distributor/
