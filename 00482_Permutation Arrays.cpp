# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T,p;
	string s,x;
	stringstream ss;
	cin>>T;
	vector<int> a;
	vector<string> b;
	getline(cin,s); //clear buffer
	while(T--){
		getline(cin,s); //a blank line
		ss.str("");
		ss.clear();
		getline(cin,s);		
		ss<<s;
		while(ss>>p){
			a.push_back(p);
		}
		getline(cin,s);
		ss.str("");
		ss.clear();
		ss<<s;
		while(ss>>x){
			b.push_back(x);
		}
		string arr[(int)a.size()+1];
		for(int i=0;i<a.size();i++){
			arr[a[i]]=b[i];
		}
		
		for(int i=1;i<=a.size();i++){
			cout<<arr[i]<<endl;
		}
		a.clear();
		b.clear();
	}
	return 0;
}
