# include<bits/stdc++.h>
using namespace std;

int main(){
	string s[]={"~!@#$%^&*()_+",
				"`1234567890-=",
			    "qwertyuiop[]\\",
				"asdfghjkl;'",
			    "zxcvbnm,./"};
	map<char,char> mp;
	for(int i=0;i<5;i++){
		for(int j=2;j<s[i].size();j++){
			mp[s[i][j]] = s[i][j-2];
		}
	}
	string line;
	while(getline(cin,line)){
		transform(line.begin(),line.end(),line.begin(),::tolower);
		for(int i=0;i<line.size();i++){
			if(mp.count(line[i]))
				cout<<mp[line[i]];
			else
				cout<<line[i];
		}	
		cout<<endl;
	}
	
	return 0;
}
