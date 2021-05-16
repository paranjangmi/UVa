# include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	string s;
	
	
	while(cin>>n){
		if(n==0) break;
		getline(cin,s);
		
		            //0, 1, 2, 3, 4, 5
				    //T, N, E, S, W, B
		int arr[6] = {1, 2, 4, 5, 3, 6};
		for(int i=0;i<n;i++){
			getline(cin,s);
			int tmp;
			if(s=="north"){
				tmp = arr[5];
				arr[5] = arr[1];
				arr[1] = arr[0];
				arr[0] = arr[3];
				arr[3] = tmp;
			}else if(s=="east"){
				tmp = arr[5];
				arr[5] = arr[2];
				arr[2] = arr[0];
				arr[0] = arr[4];
				arr[4] = tmp; 
			}else if(s=="south"){
				tmp = arr[5];
				arr[5] = arr[3];
				arr[3] = arr[0];
				arr[0] = arr[1];
				arr[1] = tmp;
			}else{ // west
				tmp = arr[5];
				arr[5] = arr[4];
				arr[4] = arr[0];
				arr[0] = arr[2];
				arr[2] = tmp;
			}
		}
		cout<<arr[0]<<endl;
		
	}
	
	
	return 0;
}
