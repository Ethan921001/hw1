#include<iostream>

using namespace std;

main(){
	int n,i,max=0;
	cin>>n;
	for(i=0;i<=n;i++){
		cout<<"("<<i<<","<<n-i<<")"<<endl;
		if(i*(n-i)>max){
			max=i*(n-i);
		}
	}
	cout<<max;
} 
