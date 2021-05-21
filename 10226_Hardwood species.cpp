# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	string s;
	cin>>n;
	getline(cin,s);
	getline(cin,s); //blank line
	for(int i=0;i<n;i++){
		if(i>0){
			cout<<endl;	
		}		
		double count = 0.0;
		map<string,int> mp;
		while(getline(cin,s) && s!=""){
			mp[s]++;
			count++;
		}
		for(auto i:mp){
			cout<<i.first<<" "<<fixed<<setprecision(4)<<(i.second/count*100)<<endl;
		}
			
	}
	
	return 0;
}
