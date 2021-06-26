# include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int C,P,Case=1;
	char s;
	while(cin>>P>>C && P+C){
		deque<int> q;
		for(int i=1;i<=min(P,C);i++){
			q.emplace_back(i);
		}
		cout<<"Case "<<Case++<<":\n";
		for(int i=0;i<C;i++){
			cin>>s;
			if(s=='N'){
				cout<<q.front()<<endl;
				q.push_back(q.front());
				q.pop_front();
			}else{
				cin>>P;
//				for(auto it=q.begin();it!=q.end();it++){
//					if(*it==P){
//						q.erase(it);
//						break;
//					}
//				}
				q.erase(remove(q.begin(),q.end(),P),q.end());
				q.push_front(P);
			}
		}
	}
}
