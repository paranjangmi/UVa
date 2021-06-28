// ref:https://www.pinghenotes.com/UVa-10901-Ferry-Loading-III/
#include <bits/stdc++.h>
using namespace std;
struct car{
	int id,T;
};
int main(){
	int n,t,m,c,time;
	string arr;
	cin>>c;
	while(c--){
		deque<car> Q[2];
		cin>>n>>t>>m;
		car C;
		for(int i=0;i<m;i++){
			cin>>time>>arr;
			C.id=i;
			C.T=time;
			if(arr=="left") Q[0].push_back(C);
			else Q[1].push_back(C);
		}
		int time=0,cur=0;
		vector<int> ret(m);
		while(!Q[0].empty() || !Q[1].empty()){
			int close,cnt=0;
			if(Q[0].empty()){
				close=Q[1].front().T;
			}else if(Q[1].empty()){
				close=Q[0].front().T;	
			}else{
				close = min(Q[0].front().T,Q[1].front().T);	
			}
			time = max(time,close);
			
			while(!Q[cur].empty() && cnt<n && Q[cur].front().T<=time){
				ret[Q[cur].front().id]=time+t;
				Q[cur].pop_front();
				cnt++;
			}
			cur=!cur;
			time+=t;
		}
		
		for(auto &i:ret) cout<<i<<endl;
		if(c) cout<<endl;
		
		
	}
	
	return 0;
}
// ref:https://www.pinghenotes.com/UVa-10901-Ferry-Loading-III/
