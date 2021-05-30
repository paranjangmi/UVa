# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	string s;
	int cnt=0;
	while(getline(cin,s)){
		for(int i=0;i<s.size();i++){
			if(s[i]=='\"' && cnt%2==0){
				cout<<"``";
				cnt++;
			}else if(s[i]=='\"' && cnt%2){
				cout<<"''";
				cnt++;
			}else{
				cout<<s[i];
			}
			
		}
		cout<<endl;
	}
	
	return 0;
}
