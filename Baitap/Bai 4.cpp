#include<iostream>
using namespace std;
int main()
{
   int x,y,max,bcnn;
   cout<<"Nhap hai so x,y: ";
   cin>>x>>y;
   if(x==0 || y==0)
   {
   	cout<<"x va y khong co boi chung nho nhat.";
   }
   else
   {
   	if(x>y)
   	{
   		max = x;
	   }
	   else
	   {
	   	max = y;
	   }
	   int i = max;
	   while(bcnn=1)
	   {
	   	if(i%x==0 && i%y==0)
	   	{
	   		bcnn = i;
	   		break;
		   }
		   i+=max;
	   }
	   cout<<"Boi chung nho nhat cua x va y la "<<bcnn;
   }
   return 0;
}
