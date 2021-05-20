# include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	int cnta[26], cntb[26];
	while(getline(cin,a) && getline(cin,b)){
		memset(cnta,0,sizeof(cnta));
		memset(cntb,0,sizeof(cntb));
		for(int i=0;i<a.size();i++){
			cnta[a[i]-'a']++;
		}
		for(int i=0;i<b.size();i++){
			cntb[b[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			for(int j=min(cnta[i],cntb[i]); j>0; j--){
				cout<<(char)('a'+i);
			}
		}
		cout<<endl;	
	}
		
	return 0;
}
