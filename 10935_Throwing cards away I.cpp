# include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin>>n && n){
		queue<int> q;
		for(int i=1;i<=n;i++){
			q.push(i);
		}
		cout<<"Discarded cards: ";
		for(int i=1;i<n;i++){
			if(i>1) cout<<", "<<q.front();
			else cout<<q.front();
			q.pop();
			q.push(q.front());
			q.pop();
		} 
		cout<<endl<<"Remaining card: "<<q.front()<<endl;
	}
	return 0;
}
