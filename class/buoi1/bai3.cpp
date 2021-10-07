#include<iostream> 
#include<iomanip>
#include<math.h>
#include<string.h>

using namespace std;

typedef struct hang
{
    char ma[8];
    char ten[30];
    int sl;
    float gia, thanhtien;
}hang;

void nhap(hang a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\n nhap thong tin mat hang thu "<<i+1<< "la: "<<endl;
		cin.ignore();
		cout<<"\n ma hang: "; cin.getline(a[i].ma,8);
		cout<<"\n ten mat hang: "; cin.getline(a[i].ten,30);
		cout<<"\n so luong: "; cin>>a[i].sl;
		cout<<"\n don gia: "; cin>>a[i].gia;
	}	
}

void thanh_tien ( hang a[], int n)
{
	for(int i=0; i<n; i++)
	{
		a[i].thanhtien = a[i].sl + a[i].gia;
	}
}

void xuat ( hang a[], int n)
{
	cout<<"\n\n\t\t\t MA_HANG"<<setw(30)<<" TEN_MAT_HANG "<<setw(15)<<"SO_LUONG "<<setw(15)<<" DON_GIA"<<setw(15)<<" THANH_TIEN"<<endl;
		for(int i=0; i<n; i++)
			cout<<"\n\n\t\t\t "<<a[i].ma<<setw(30)<<a[i].ten<<setw(15)<<a[i].sl<<setw(15)<<a[i].gia<<setw(15)<<a[i].thanhtien<<endl;
}

void sapxep(hang a[], int n)
{	
    cout<<"\n\n\t\t\t MA_HANG"<<setw(30)<<" TEN_MAT_HANG "<<setw(15)<<"SO_LUONG "<<setw(15)<<" DON_GIA"<<setw(15)<<" THANH_TIEN"<<endl;
	for(int i=0; i<n; i++)
		 	if( a[i].gia> 50 ) 
				{ 
                   cout<<"\n\n\t\t\t "<<a[i].ma<<setw(30)<<a[i].ten<<setw(15)<<a[i].sl<<setw(15)<<a[i].gia<<setw(15)<<a[i].thanhtien<<endl;

                }
}

int main()
{
	hang a[100];
	int n;
	cout<<"\n so mat hang can quan ly la: ";
	cin>>n;
	nhap(a,n);
	cout<< "\n\t\t\t\t-------------thong tin vua nhap la:--------- "<<endl;
	thanh_tien(a,n);
	xuat(a,n);
	cout<<"\n\t\t---------nhung mat hang co don gia lon hon 50 la: ----------"<<endl;
	sapxep(a,n);

	cout<<endl;
	
	return 0;
}

