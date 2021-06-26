# include<bits/stdc++.h> 
using namespace std;
int main(){
	int t,n,x,Case=1;
	map<int,int> mp;
	string s;
	while(cin>>t && t){
		mp.clear();
		queue<int> Q;
		queue<int> q[t];
		for(int i=0;i<t;i++){
			cin>>n;
			for(int j=0;j<n;j++){
				cin>>x;
				mp[x]=i;
			}
		}
		cout<<"Scenario #"<<Case++<<endl; 
		while(cin>>s && s!="STOP"){
			if(s=="ENQUEUE"){
				cin>>x;
				if(mp.count(x)){
					if(q[mp[x]].empty()){
						Q.push(mp[x]);
					}
					q[mp[x]].push(x);
					
				}else{
					Q.push(1000+x);
				}
			}else{
				int team_now = Q.front();
				if(team_now>=1000){
					team_now-=1000;
					cout<<team_now<<endl;
				}else{
					cout<<q[team_now].front()<<endl;
					q[team_now].pop();
					if(q[team_now].empty()){
						Q.pop();
					}
				}
			} 
		}	
	}
	
	
	return 0;
}
