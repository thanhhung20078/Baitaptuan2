#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Nhap tu va mau: ";
	cin >> x >>y;
	cout << "phan so truoc la: " << x << "/" << y<<endl;
	int min = x;
	if(x>y) min = y;
	int ucln;
	for(int i=min;i>=1;i--)
	{
		if(x%i==0&&y%i==0)
		{
			ucln = i;
			break;
		}
	}
	x = x/ucln;y = y/ucln;
	cout << "phan so toi gian: " << x << "/" << y;
	return 0;
}
