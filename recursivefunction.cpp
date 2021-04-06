#include<iostream>
using namespace std;
int sum (int number)
{
		int i=0;
	if(number!=0)
	{
		i=i+1;
		cout<< i<<" "<<endl;
	
		cout<<"number = " <<number + sum(number-1)<<endl;
		int final = number + sum(number-1);
		            5 + 4 = 9
		
		cout<<endl;
		return final;
//		cout<<" "<<(number + sum(number-1))<<" ";
		
	}
	else 
	{ 
//	    cout<<"ELSE NUMBER "<<number<<endl;
		return number;
	}
}
int main()
{
	int num;
	cout<<"enter the number to find the sum"<<endl;
	cin>>num;
	cout<<"Find the sum of this number "<<num;
	cout<<endl;
	int total = sum(num);
	cout<<"total sum of number "<<num<<"is  "<<total<<endl;
	
	
	return 0;
}
