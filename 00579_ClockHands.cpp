# include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	string s;
	while(cin>>s){
		if(s=="0:00") break;
		int h=0,m=0;
		int colon = find(s.begin(),s.end(),':')-s.begin();
		for(int i=0;i<colon;i++){
			h *= 10;
			h += s[i]-'0';
		}
		for(int i=colon+1;i<s.size();i++){
			m *= 10;
			m += s[i]-'0';
		}
		double a_h = h*30.0+m*0.5;
		double a_m = m*30.0/5.0;
		double a = abs(a_h-a_m);
		cout<<fixed<<setprecision(3)<<min(a,360.0-a)<<endl;
	} 
	 
	
	return 0;
}
