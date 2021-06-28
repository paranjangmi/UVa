//ref:https://github.com/morris821028/UVa/blob/master/volume108/10858%20-%20Unique%20Factorization.cpp
#include<bits/stdc++.h>
using namespace std;
int cnt=0,dv[10005],dt=0,buf[10000];
vector<int> ans[10000];
void dfs(int N, int idx, int i){
//	cout<<"N: "<<N<<" idx: "<<idx<<" i: "<<i<<endl;
	if(N==1){
		for(i=0;i<idx;i++){
//			cout<<"buf: "<<buf[i]<<endl;
			ans[cnt].push_back(buf[i]);
		}
		cnt++;
		return ;
	}
	for(;i<dt;i++){
//		cout<<"i: "<<i<<" dv[i]: "<<dv[i]<<endl;
		if( (N/dv[i]>=dv[i] || N==dv[i]) && N%dv[i]==0 ) {
//			cout<<"idx: "<<idx<<endl;
			buf[idx] = dv[i];
//			cout<<"in\n";
			dfs(N/dv[i],idx+1,i);
//			cout<<"here\n";
//			cout<<"N2: "<<N<<" idx2: "<<idx<<" i2: "<<i<<endl;
		}
//		cout<<"out\n";
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int N;
	while(cin>>N && N){
		dt=0;
		for(int i=2;i<=sqrt(N);i++){
			if(N%i==0){
				dv[dt++]=i;
				if(i*i!=N){
					dv[dt++]=N/i;
				}
			}
		}
		sort(dv,dv+dt);
		cnt=0;
		if(dt){
			dfs(N,0,0);
		}
		cout<<cnt<<endl;
		for(int i=0;i<cnt;i++){
			for(int j=0;j<ans[i].size();j++){
				cout<<ans[i][j]<<" ";
			}
			ans[i].clear();
			cout<<endl;
		}
		
	}
	
	return 0;
}
//ref:https://github.com/morris821028/UVa/blob/master/volume108/10858%20-%20Unique%20Factorization.cpp
