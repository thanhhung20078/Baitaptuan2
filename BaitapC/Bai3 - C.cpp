#include <iostream>
using namespace std;
 int main()
 {
 	int n;
 	cout<<"Hay nhap vao so n: ";
 	cin>>n;
 	for(int i = 0; i<n; i++)
 	{
 		for(int j = 0; j<=n+i-1; j++)
 		{
 			if(j<=n-i)
 			{
 				cout<<" ";
			 }
			 else
			 {
			 	cout<<"*";
			 }
		 }
		 cout<<endl;
	 }
	 return 0;
 }
