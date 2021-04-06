#include<iostream>
using namespace std;
int bubbleSorting(int arr[],int SizeOfArr)
{
	for(int i=0;i<=SizeOfArr;i++)
	{

		for(int j=0;j<=SizeOfArr-1;j++)
		{

            
			 if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                   
	            arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
			 
		 
		 }
		 cout<<"step "<<i<<endl;
	     for(int i=0;i<SizeOfArr;i++)
	     {
	     	cout<<arr[i]<<" ";
		 }
		 cout<<endl;
	}
}
int  main ()
{
	
	int SizeOfArr ;
	cout<<"enter the size of array"<<endl;
	cin>>SizeOfArr;
	int arr[SizeOfArr];
	
	for(int i=0 ; i<SizeOfArr;i++)
	{
		cout<<"Enter the data at slot # "<<i<<endl;
		cin>>arr[i];
	}
//	cout<<"Before sorting "<<endl;
	for(int i=0 ; i<SizeOfArr;i++)
	{
	    
//		cout<<"Data at the slot"<<i<<" In array is = " <<arr[i]<<endl;
		
	}
	bubbleSorting(arr,SizeOfArr);
	
	return 0;
}
