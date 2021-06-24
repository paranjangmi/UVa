# include<bits/stdc++.h>
using namespace std;

int main(){
	int c=0;
	map<string,string> mp;
	mp["HELLO"]="ENGLISH";
	mp["HOLA"]="SPANISH";
	mp["HALLO"]="GERMAN";
	mp["BONJOUR"]="FRENCH";
	mp["CIAO"]="ITALIAN";
	mp["ZDRAVSTVUJTE"]="RUSSIAN";
	string s;
	while(cin>>s){
		if(s=="#") break;
		c++;
		cout<<"Case "<<c<<": ";
		if(mp.count(s)) cout<<mp[s]<<endl;
		else cout<<"UNKNOWN\n";
	}
	
	return 0;
}
