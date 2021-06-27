# include<bits/stdc++.h>
using namespace std;

struct job{
	int p;
	bool ismy;
};

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,n,m,x;
	deque<struct job> q;
	cin>>t;
	while(t--){
		cin>>n>>m;
		job J;
		q.clear();
		for(int i=0;i<n;i++){
			cin>>x;
			J.p=x;
			if(i==m){
				J.ismy=1;	
			}else{
				J.ismy=0;
			}
			q.push_back(J);
		}
		job tmp;
		int time=0;
		while(1){
			if(!q.empty()){
				tmp=q.front();
				q.pop_front();	
			}
			bool print = true;
			for(int i=0;i<q.size();i++){
				if(tmp.p<q[i].p){
					q.push_back(tmp);
					print=false;
					break;
				}
			}
			if(print){
				if(!tmp.ismy){
					time++;
				}else{
					time++;
					cout<<time<<endl;
					break;
				}
				
			}
		}
		
	}
	
	return 0;
}
