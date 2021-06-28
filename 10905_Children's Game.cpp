//ref:https://yuihuang.com/zj-d385/
# include<bits/stdc++.h> 
using namespace std;

bool cmp(int a, int b){
	return ( stoll(to_string(a)+to_string(b)) > stoll(to_string(b)+to_string(a)) );
	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int N;
	while(cin>>N && N){
		int a[N];
		for(int i=0;i<N;i++){
			cin>>a[i];
		}
		sort(a,a+N,cmp);
		for(auto i:a){
			cout<<i;
		}
		cout<<endl;
 	}
	return 0;	
}
//ref:https://yuihuang.com/zj-d385/
