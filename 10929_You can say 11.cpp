# include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		if(s=="0") break;
		int sum=0;
		for(int i=0;i<s.size();i=i+2){
			sum-=s[i]-'0';
			if(i+1<s.size()) sum+=s[i+1]-'0';
		}
		if(sum%11==0) cout<<s<< " is a multiple of 11.\n";
        else cout << s << " is not a multiple of 11.\n";
	}
	return 0;
}
