
// my math program in C++
#include <iostream>
using namespace std;

int main()
{    
    int number, i, option;
bool prime=true;

    	cout<< "select the mathametical operation"<<endl
	<< "Factors enter: 1"<<endl
	<<"Prime number enter:2"<<endl
	<<"empty"<<endl;
	cin>>option;

    	cout << "Enter an integer: "<<endl;

    	cin >> number;

if(option==1)
{
cout << "Factors of" << number<<" is:"<<endl;
for(i=1;i<=number;i++)
{
if(number%i==0)
cout<< i <<endl;
}

} 
if(option==2) 
{
	for(i=2;i<=number/2;++i)
	{
	if(number % i == 0)
	{
		prime=false;
		break;
	}

	}

	if(prime)
	cout<<number<<"--->This number is a prime "<<endl;
	else
	cout<<number<<"--->This number is not a prime"<<endl;
}  

    return 0;
}


