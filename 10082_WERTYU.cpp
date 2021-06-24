# include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string s;
	bool f = true;
	while(getline(cin,s)){
		for(int i=0;i<s.size();i++){
//			if(s[i]==' '){
//				cout<<" ";
//				continue;
//			} 
			for(int j=0;j<a.size();j++){
				if(s[i]==a[j]){
					cout<<a[j-1];
					f = false;
					break;
				}
			}
			if(f) cout<<s[i];
			f = true;
		}
		cout<<endl;
	}
	
	
	return 0;
}
