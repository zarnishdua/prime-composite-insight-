#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number :";
	cin>>n;
	bool prime =true;
	for(int i=2; i<n; i++){
		if(n%i==0)
		 prime=false;
		 break;
	}
	if(n==1)
        cout<<n<<" is neither prime nor composite :";
	else if(prime==true)
	cout<<n<<" is a Prime number ";
	else
	cout<<n<<" is a composite  number ";
	return 0;
}
