# include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	map<char,vector<int>> mp;
	mp['c'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
	mp['d'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['e'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['f'] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['g'] = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['a'] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['b'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    mp['C'] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['D'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['E'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['F'] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['G'] = {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['A'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['B'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    
	string s;
	getline(cin, s);
	while(n--){
		getline(cin,s);
		int cnt[11]={0};
		int a[11]={0}; //status
		for(int i=0;i<s.size();i++){
			for(int j=1;j<11;j++){
				if(mp[s[i]][j]){
					if(a[j]) continue;
					else{
						cnt[j]+=1;
						a[j]=1;
					}
				}else{
					a[j]=0;
				}
				
			}
			
		} 
		for(int i=1;i<11;i++){
			if(i==10) cout<<cnt[i];
			else cout<<cnt[i]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
