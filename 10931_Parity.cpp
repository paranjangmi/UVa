# include<bits/stdc++.h>
using namespace std;

int main(){
	int I;
	while(cin>>I and I){
		int n = I;
		string B = "";
		int cnt = 0;
		while(n){
			cnt += n&1;
			B += '0'+(n&1);
			n >>= 1;			
		}
		reverse(B.begin(),B.end());
		
		cout<<"The parity of "<<B<<" is "<<cnt<<" (mod 2)"<<endl;
	}
	return 0;
}
