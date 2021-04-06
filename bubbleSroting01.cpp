#include<iostream>
using namespace std;
int  bubblesorting(int arr[],int sizeofarray)
                     // 5/       //5
{
	cout<<"\nbefore sorting"<<endl;
	    for(int i=0;i<sizeofarray;i++)
	{       // 1st i-0;0<5;0++
		cout<<arr[i]<<" ";
	}

	for ( int i=0;i<sizeofarray;i++)
	{
     	for ( int j=0;j<sizeofarray-i-1;j++)
	{
		  
		  if(arr[j] > arr[j+1])
		      
		  {
		  	
		  	int temp =  arr[j];
		  	arr[j] =arr[j+1];
		  	arr[j+1] = temp;
		  }
	cout<<"\nstep # "<<j<<" "<<endl;
	    cout<<"{";
		for(int i=0;i<sizeofarray;i++)
	{
		cout<<arr[i]<<" ";
	}
	  cout<<"}";
	}	
	
	cout<<"\n step # "<<i<<" "<<endl;
	    for(int i=0;i<sizeofarray;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;	
	}
}
int main ()
{
	int sizeofarray;
	cout<<"enter the size of array"<<endl;
	cin>>sizeofarray;
	int array[sizeofarray];
	for(int i=0;i<sizeofarray;i++)
	{
		cout<<"ENTER THE #"<<i<<" ENTRY"<<endl;
		cin>>array[i];
	}
	
	bubblesorting(array,sizeofarray);
	
	cout<<"after sorting"<<endl;
	for(int i=0;i<sizeofarray;i++)
	{
		cout<<array[i]<<" " ;
	}
	return 0;
}
