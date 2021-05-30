# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int N,L;
	cin>>N;
	while(N--){
		cin>>L;
		int a[L];
		for(int i=0;i<L;i++){
			cin>>a[i];
		}
		int s=0;
		for(int i=L-1;i>0;i--){
			for(int j=0;j<i;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					s++;
				}
			}	
		}
		cout<<"Optimal train swapping takes "<<s<<" swaps.\n";
	}
	
	return 0;
}
