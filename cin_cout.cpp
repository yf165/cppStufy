#include <iostream>
using namespace std;

int main()
{
	int sum= 0 ,val = 0 ;
		cout<<"please input the numver:"<<endl;			
	while(cin>>val){
		sum+=val;
		cout<<"please input the numver:"<<endl;			
	}
	cout<<"the sum = "<<sum<<endl;
	int *a = new int;
	*a = 100;
	double *b = reinterpret_cast<double *>(a);
	cout<<*a<<" "<<*b<<endl;
	return 0;
}