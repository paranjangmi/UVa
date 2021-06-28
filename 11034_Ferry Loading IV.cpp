#include <bits/stdc++.h>
using namespace std;
int main(){
	int c,l,m,len;
	string s;
	cin>>c;
	while(c--){
		cin>>l>>m;
		l*=100;
		queue<int> q[2];
		for(int i=0;i<m;i++){
			cin>>len>>s;
			if(s=="left") q[0].push(len);
			else q[1].push(len);
		}
		int cur=0,tmp,cnt=0;
		while(!q[0].empty() || !q[1].empty()){
			tmp=0;
			while(!q[cur].empty() && tmp+q[cur].front()<=l){
				tmp+=q[cur].front();
				q[cur].pop();				
			}
			cnt++;
			cur=!cur;
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}
