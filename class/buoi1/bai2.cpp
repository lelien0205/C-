#include<iostream>
#include<math.h>
using namespace std;

struct phanso {
	int tu;
	int mau;
};
int uc(int a, int b)
{
	
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}

		return a;
}
void nhapps(phanso ps[] , int& n)
{
	int k;
	cout << "Nhap so luong phan so : ";
	do
	{
		cin >> n;
		if (n < 0) cout << "Nhap lai : ";
	} while (n < 0);

	for (int i = 0; i < n; i++)
	{
		cout << "Phan so thu " << i + 1 << " : \n";
		
		cout << "\tTu so : ";
		cin >> ps[i].tu;

		cout << "\tMau so : ";
		do
		{
			cin >> ps[i].mau;
			if (ps[i].mau == 0) cout << "\tNhap lai :";
		} while (ps[i].mau == 0);

		k = uc(ps[i].tu, ps[i].mau);

		ps[i].tu = ps[i].tu / k;
		ps[i].mau = ps[i].mau / k;

		if (ps[i].tu == 0) cout << "\tPhan so vua nhap bang : 0 ";
		
		else {
			cout << "\tPhan so vua nhap bang : " << ps[i].tu << '/' << ps[i].mau;
			cout << endl;
		}
	}
}
void cong(phanso ps[], int& n)
{
	int ts; //tu so
	int ms; // mau so
	int k;
	ts = ps[0].tu;
	ms = ps[0].mau;
	for (int i = 1; i < n; i++)
	{
		ts = (ts * ps[i].mau) + (ps[i].tu * ms);
		ms = ms * ps[i].mau;
	}
	k = uc(ts, ms);
	ts = ts / k;
	ms = ms / k;
	cout << "Tong cac phan so vua nhap la : " << ts << "/" << ms << endl;
}
int main()
{
	int n;
	phanso ps[10000];
	nhapps(ps, n);
	cong(ps, n);
}