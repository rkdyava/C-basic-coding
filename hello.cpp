
// my factors program in C++
#include <iostream>
using namespace std;

int main()
{    
    int number, i;

    cout << "Enter an integer: "<<endl;
    cin >> number;

    cout << "Factors of" << number<<" is:"<<endl;
for(i=1;i<=number;i++)
{
if(number%i==0)
cout<< i <<endl;
else
cout<<"---"<<endl;


}    
    return 0;
}


