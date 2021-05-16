# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x;
	string a;
	vector<int> vc;
	while(cin>>x){
		getline(cin,a);
		getline(cin,a);
		stringstream ss(a);
		vc.clear();
		while(ss>>a){
			vc.push_back(stoi(a));
		}
		reverse(vc.begin(),vc.end());
		int ans=0;
		long long mul=1;
		// cannot use pow
		for(int i=1;i<vc.size();i++){
			ans+=vc[i]*i*mul;
			mul*=x;
		}
		cout<<ans<<endl;
	
	}
	
	
	return 0;
}
