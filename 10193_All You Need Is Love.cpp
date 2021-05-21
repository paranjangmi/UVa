# include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
	while((x%=y) && (y%=x));
	return x+y;
}

int main(){
	int n;
	cin>>n;
	string s1,s2;
	for(int c=1;c<=n;c++){
		cin>>s1>>s2;
		int n1=1,n2=1;
		int sum1=0,sum2=0;
		for(int i=s1.size()-1;i>=0;i--){
			sum1 += (s1[i]-'0')*n1;
			n1 *= 2;
		}
		for(int i=s2.size()-1;i>=0;i--){
			sum2 += (s2[i]-'0')*n2;
			n2 *= 2;
		}
		int ans;
		if(gcd(sum1,sum2)>1)
			cout<<"Pair #"<<c<<": All you need is love!"<<endl;
		else
			cout<<"Pair #"<<c<<": Love is not all you need!"<<endl;
				
	}
	return 0;
}
