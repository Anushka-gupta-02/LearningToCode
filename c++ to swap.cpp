#include<iostream>
using namespace std;
int main ()
{
	int a,b,swap;
	cout << "Enter no. a:" << endl;
	cin >> a;
	cout << "Enter no. b:" << endl;
	cin >> b;
	cout << "Values before swapping are: " << a << ", " << b << "." <<endl;
    {
    	swap=a;
    	a=b;
    	b=swap;
    	cout << "Values after swapping are: " << a << ", " << b << ". " <<endl;
	}
	return 0;
}
