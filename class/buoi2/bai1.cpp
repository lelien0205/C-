#include<iostream>
using namespace std;
class HCN
{
	private:
		float a,b;
	public:
		void nhap()
		{
			cout<<"\n Nhap chieu dai : ";cin>>this->a;
			cout<<"\n Nhap chieu rong : ";cin>>this->b;
		}
		float S()
		{
			return (a*b);
		}
		float C()
		{
			return (2*(a+b));
		}
		void xuat()
		{
			cout<<"\n Chieu dai : "<<a;
			cout<<"\n Chieu rong : "<<b;
		}
};

int main()
{
	HCN a;
	a.nhap();
	a.xuat();
	cout<<"\n -> Chu vi cua HCN la : "<<a.C();
	cout<<"\n -> Dien tich cua HCN la : "<<a.S();
	return 0;
}