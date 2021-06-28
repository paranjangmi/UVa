# include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		set<int> st;
		queue<int> q;
		int x, ans=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(st.count(x)){
				ans=max(ans,(int)st.size());
				while(q.front()!=x){
					st.erase(q.front());
					q.pop();
				}
				q.pop();
			} 			
			st.insert(x);
			q.push(x);
		} 
		ans=max(ans,(int)st.size());
		cout<<ans<<endl;
	}
	
	return 0;
}
