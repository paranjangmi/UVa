# include<bits/stdc++.h>
using namespace std;

bool cmp(string s1, string s2){
	int w=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]) w++;
	}
	
	return (w<=1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	string num;
	cin>>t;
	while(t--){
		cin>>num;
		if(num.size()==5){
			cout<<3<<endl;
		}else{
			if(cmp(num,"one")) cout<<1<<endl;
			if(cmp(num,"two")) cout<<2<<endl;
		}
	}
	return 0;
}
