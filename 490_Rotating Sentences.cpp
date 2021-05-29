# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	string s[105];
	int col,row=0;
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	while(getline(cin,s[col])){
		row = max(row,(int)s[col].size());
		col++; 
	}
	for(int j=0;j<row;j++){
		for(int i=col-1;i>=0;i--){
			if(s[i].size()<=j){
				cout<<" ";
			}else
				cout<<s[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
