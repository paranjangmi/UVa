# include<bits/stdc++.h> 
using namespace std;

bool cmp(pair<char,int>a, pair<char,int>b){
	if(a.second==b.second){
		return a.first<b.first;
	}else{
		return a.second>b.second;
	}
}


int main(){
	
	int n;
	string s;
	map<char,int> mp;
	cin>>n;
	getline(cin,s);
	while(n--){
		getline(cin,s);		
		for(int i=0;i<s.size();i++){
			if(s[i]>='A' && s[i]<='Z')
				mp[s[i]]++;
			else if(s[i]>='a' && s[i]<='z'){
				mp[(char)(s[i]-'a'+65)]++;
			}
		}
	}
	vector<pair<char,int>> vec;
	for(auto itr=mp.begin(); itr!=mp.end(); itr++){
		vec.push_back(make_pair(itr->first,itr->second));
	}
	sort(vec.begin(),vec.end(),cmp);
	for(auto i:vec){
		cout<<i.first<<" "<<i.second<<endl; 
	}
	
	return 0;
}
