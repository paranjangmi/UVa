# include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,c=0;
	set<string> sa,sb;
	string s;
	stringstream ss;
	while(getline(cin,s)){
		ss.str("");
		ss.clear();
		ss<<s;
		while(ss>>s){
			if(ss.fail()) break;
			if(!(c%2)) sa.insert(s);
			else sb.insert(s);
		}
		int cnt=0;
		if(c%2){
			for(auto a:sa){
				for(auto b:sb){
					if(a==b) cnt++;
				}
			}
			if(!cnt && !sa.empty() && !sb.empty()){
				cout<<"A and B are disjoint\n";
			}else if(cnt==sa.size() && cnt==sb.size()){
				cout<<"A equals B\n";
			}else if(cnt==sa.size() || sa.empty()){
				cout<<"A is a proper subset of B\n";
			}else if(cnt==sb.size() || sb.empty()){
				cout<<"B is a proper subset of A\n";
			}else{
				cout<<"I'm confused!\n";
			}
			sa.clear();
			sb.clear();
		}
		c++;		
	}
	
	return 0;
}
