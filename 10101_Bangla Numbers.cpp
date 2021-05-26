# include<bits/stdc++.h>
using namespace std;

string ans; 
string bn[] = {"kuti","lakh","hajar","shata"};
int d[] = {10000000, 100000, 1000, 100};


//string num2str(long long x){
//  	string s="";
//   	while(x){
//   		s+='0'+(x%10);
//   		x/=10;
//	}
//	reverse(s.begin(),s.end());
//	return s;
//}


string solve(long long x){
	if(x>=d[0]){
		solve(x/d[0]);
		ans+=" "+bn[0];
		x %= d[0];
	} 
	for(int i=1;i<4;i++){
		if(x/d[i]>0){
			ans+= " "+ to_string(x/d[i]) + " " +bn[i];
			x %= d[i];
		}
	}
	if(x>0) ans+= " " + to_string(x);
	return ans;
}

int main(){
	long long n;
	int c=0;	
	while(cin>>n){
		c++;
		if(n==0){
			cout<<setw(4)<<c<<". "<<n<<endl;
		}else{
			ans="";
			cout<<setw(4)<<c<<"."<<solve(n)<<endl;				
		}	
	}
	
	return 0;
}
