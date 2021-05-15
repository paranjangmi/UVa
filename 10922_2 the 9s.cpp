# include<bits/stdc++.h>
using namespace std;

int degree(string s, int cnt){
	int sum=0;
	for(int i=0;i<s.size();i++){
		sum+=s[i]-'0';
	}
	cnt++;
	if(sum%9!=0){
		return 0;
	}else if(sum==9){
		return cnt;
	}else{
		return degree(to_string(sum),cnt);
	}
}

int main(){
	string s;
	while(cin>>s){
		if(s=="0") break;
		int ans;
		int cnt = 0;
		ans = degree(s,cnt);
		if(ans==0) cout<<s<<" is not a multiple of 9.\n";
		else cout<<s<<" is a multiple of 9 and has 9-degree "<<ans<<"."<<endl;
		
		
	}
	return 0;
}
