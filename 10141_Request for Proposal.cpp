# include<bits/stdc++.h>
using namespace std;

struct Company{
	int id,check;
	double quote;
	string name;
};

bool cmp(Company a, Company b){
	if(a.check==b.check){
		if(a.quote==b.quote){
			return a.id<b.id;
		}else{
			return a.quote<b.quote;
		}
	}else{
		return a.check>b.check;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,p,Case=1;
	string s;
	while(cin>>n>>p && n+p){
		getline(cin,s); //clear buffer
		for(int i=0;i<n;i++){
			getline(cin,s);
		}
		string name;
		int check;
		double quote;
		Company company[p];
		for(int i=0;i<p;i++){
			getline(cin,name);
			cin>>quote>>check;
			getline(cin,s); //clear buffer
			company[i]={i,check,quote,name};
			for(int j=0;j<check;j++){
				getline(cin,s);
			}
		}
		sort(company,company+p,cmp);
		cout<<"RFP #"<<Case<<endl<<company[0].name<<endl;
		Case++;
	}
	return 0;
}
