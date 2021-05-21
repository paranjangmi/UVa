# include<bits/stdc++.h>
using namespace std;
# define PI acos(0.0)*2.0

int main(){
	double s,a;
	string unit;
	double r = 6440.0;
	double arc, chord;
	
	while(cin>>s>>a>>unit){
		if(unit=="min") a = a/60.0;
		if(a>180.0) a = 360.0-a;
		arc = 2.0*PI*(r+s)*a/360.0;
		chord = 2.0*(r+s)*cos((90.0-a/2.0)/180.0*PI);
		cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
	}
	return 0;
}
