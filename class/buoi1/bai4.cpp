#include<iostream> 
#include<iomanip>
#include<math.h>
#include<string.h>

using namespace std;

typedef struct hocsinh
{
    char ma[7];
    char ten[30];
    char que[30];
    float diem;
}hang;

void nhap(hang a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\n nhap thong tin hoc sinh thu "<< i+1 << "la: "<<endl;
		cin.ignore();
		cout<<"\n ma so: "; cin.getline(a[i].ma,8);
		cout<<"\n ten hoc sinh: "; cin.getline(a[i].ten,30);
		cout<<"\n que quan: "; cin.getline(a[i].que,30);
		cout<<"\n tong diem "; cin>>a[i].diem;
	}	
}

void giam(hocsinh a[], int n)
{
	for(int i=0; i<n-1; i++)
	for(int j=i+1; j<n; j++)
	if (a[i].diem < a[j].diem)
	{
		hocsinh tg=a[i];
		a[i]=a[j];
		a[j]=tg;
	}
}

void xuat(hocsinh a[], int n)
{

		cout<<setw(20)<<"MA SO";
		cout<<setw(15)<<"HO VA TEN ";
		cout<<setw(15)<<"QUE QUAN";
		cout<<setw(12)<<"TONG DIEM";
		cout<<endl;
		
		for(int i=0; i<n; i++)
		{
			cout<<setw(20)<<a[i].ma;
			cout<<setw(15)<<a[i].ten;
			cout<<setw(15)<<a[i].que;
			cout<<setw(12)<<a[i].diem;
			cout<<endl;	
		}
}

void timkiem(hocsinh a[], int n)
{
		cout<<setw(20)<<"MA SO";
		cout<<setw(15)<<"HO VA TEN ";
		cout<<setw(15)<<"QUE QUAN";
		cout<<setw(12)<<"TONG DIEM";
		cout<<endl;
		for(int i=0; i<n; i++)
			if (stricmp("Nam Dinh",a[i].que)==0)
			{
                cout<<setw(20)<<a[i].ma;
                cout<<setw(15)<<a[i].ten;
                cout<<setw(15)<<a[i].que;
                cout<<setw(12)<<a[i].diem;
                cout<<endl;	
			}
}

int main()
{
	hocsinh a[100];
	int n;
	
	do{
		cout<<"\nso luong hoc sinh nhap vao: ";
		cin>>n;
		if(n<1||n>100)
		cout<<"\ban da nhap sai hay nhap lai";
	}while(n<1||n>100);
	
	nhap(a,n);
	cout<<"\n\t\t-----------------xuat mang-----------------: "<<endl; 
	xuat(a,n);
    cout<<"\n\t\t ---------mang sau khi da sap xep la:-------- "<<endl;
	giam(a,n);
    xuat(a,n);
	cout<<"\n\t----tim kien thong tin cua hoc sinh que tai Nam Dinh:---"<<endl;
	timkiem(a,n);
    

    return 0;

}