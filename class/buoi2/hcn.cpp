#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
typedef struct
{
	int ngay,thang,nam;
}NS;
class KH
{
	private:
		char ht[30];
		NS ns;
		char cmt[10];
		char k[50];
	public:
		void nhap()
		{
			fflush(stdin);
			cout<<" Nhap ho ten : ";cin.getline(ht,30);
			cout<<" Nhap ngay sinh : "<<endl;
			do
			{
				cout<<" + Nhap ngay sinh : ";cin>>ns.ngay;
				if(ns.ngay < 1 || ns.ngay > 31)
					cout<<"\n !!! Nhap lai ngay sinh !!!"<<endl;
			}while(ns.ngay < 1 || ns.ngay > 31);
			do
			{
				cout<<" + Nhap thang sinh : ";cin>>ns.thang;
				if(ns.thang < 1 || ns.thang > 12)
					cout<<"\n !!! Nhap lai thang sinh !!!"<<endl;
			}while(ns.thang < 1 || ns.thang > 12);
			cout<<" + Nhap nam sinh : ";cin>>ns.nam;
			cin.ignore();
			cout<<" Nhap so CMT : ";cin.getline(cmt,10);
			cout<<" Nhap ho khau : ";cin.getline(k,50);
		}
		void xuat()
		{
			cout<<"\n"<<setw(20)<<ht<<setw(20)<<ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<setw(20)<<cmt<<setw(30)<<k<<endl;
		}
		string getHT()
		{
			return ht;
		}
		int getThang()
		{
			return ns.thang;
		}
};
void hienthi()
{
	cout<<"\n\n"<<setw(20)<<"Ho_ten"<<setw(20)<<"Ngay_sinh"<<setw(20)<<"So_CMT"<<setw(30)<<"Ho_khau"<<endl;
}

int main()
{
	KH *a;
	int n;
	a = new KH[n];
	cout<<"\n Nhap so khach hang : ";cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cout<<"\n -- Nhap thong tin cho khach hang thu "<<i+1<<endl;
		a[i].nhap();
	}
	system("cls");
	for(int i = 0; i < n-1; i++)
	for(int j = i+1; j < n; j++)
	{
		if(a[i].getHT() > a[j].getHT())
		{
			KH tg = a[i];
			a[i] = a[j];
			a[j] = tg;
		}
	}
	cout<<"\n\n\t\t\t\t\t***DANH SACH TEN TANG DAN***"<<endl;
	hienthi();
	for(int i = 0; i < n; i++)
	{
		a[i].xuat();
	}
	cout<<"\n\n\t\t\t***DANH SACH KHACH HANG CO SINH NHAT VAO THANG 12***"<<endl;
	hienthi();
	for(int i = 0; i < n; i++)
	if(a[i].getThang() == 12)
	{
		a[i].xuat();
	}
	
	cout<<endl;
	getche();
	return 0;
}
