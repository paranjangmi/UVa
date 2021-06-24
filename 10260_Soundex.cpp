# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	map<char,int> mp;
	string sc[]={"","BFPV","CGJKQSXZ","DT","L","MN","R"};
	for(int i=1;i<=6;i++){
		for(int j=0;j<sc[i].size();j++){
			mp[sc[i][j]]=i;
		}
	}
	while(getline(cin,s)){
		int pst=0;
		for(int i=0;i<s.size();i++){
			if(mp.count(s[i])){
				if(mp[s[i]]!=pst){
					cout<<mp[s[i]];
				}
				pst=mp[s[i]];
			}else{
				pst=0;
			}
		}
		cout<<endl;
	}
	
	return 0;
}
