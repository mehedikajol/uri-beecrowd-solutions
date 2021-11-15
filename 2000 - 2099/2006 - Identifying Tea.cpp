#include<iostream>
using namespace std;
int main(void){
	int n, x, total = 0;
	cin>>n;
	for(int i=1; i<=5; i++){
		cin>>x;
		if(x==n)
			total++;
	}
	cout<<total<<endl;
	return 0;
}
