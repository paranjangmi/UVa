# include<bits/stdc++.h> 
using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){
	if(a.second==b.second){
		return a.first>b.first; 
	}else{
		return a.second<b.second;
	}	
	
}


int main(){
	
	string s;
	int r=0;
	while(getline(cin,s)){
		map<int,int> mp;
		for(int i=0;i<s.size();i++){
			if((int)s[i]>=32 && (int)s[i]<=128){
				mp[(int)s[i]]++;
			}
		}
		vector<pair<int,int>> vec;
		for(auto itr=mp.begin(); itr!=mp.end(); itr++){
			vec.push_back(make_pair(itr->first, itr->second));
		}
		sort(vec.begin(), vec.end(), cmp);
		if(r){
			cout<<endl;
		}
		for(auto i:vec){
			cout<<i.first<<" "<<i.second<<endl;
		}
		r++;
		
	}
	
	return 0;
}
