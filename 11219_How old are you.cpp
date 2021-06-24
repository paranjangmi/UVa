# include<bits/stdc++.h>
using namespace std;

int str2int(string s,int start,int len){
	int r=0;
	for(int i=start;i<start+len;i++){
		r*=10;
		r+=s[i]-'0';
	}
	return r;
}

int main(){
	int T,d1,d2;
	string s1,s2;
	cin>>T;
	for(int t=1;t<=T;t++){
		cin>>s1>>s2;
		d1 = str2int(s1,0,2)+(str2int(s1,3,2)-1)*31+str2int(s1,6,4)*372;
		d2 = str2int(s2,0,2)+(str2int(s2,3,2)-1)*31+str2int(s2,6,4)*372;
		cout<<"Case #"<<t<<": ";
		if(d1<d2) cout<<"Invalid birth date\n";
		else if((d1-d2)/372>130) cout<<"Check birth date\n";
		else cout<<(d1-d2)/372<<endl;
		
	}
	
	return 0;
}
