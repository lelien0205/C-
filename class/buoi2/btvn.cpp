#include<iostream>
#include<string.h>

using namespace std;

struct ngaysinh{
    int ngay, thang, nam;
};

class khachhang{
 
 private: 
    char ht[30];
    char cmt[10];
    char k[50];
    ngaysinh ns;
public:

    void  nhap()
    {
        fflush(stdin);
        cout << " Ho va ten: "; cin.getline(this -> ht,30);
        cout <<" So chung minh thu: "; cin.getline(this -> cmt,10);
        cout <<" Ho khau: "; cin.getline( this -> k, 50);
        cout <<" Ngay : "; cin >> ns.ngay;
        cout <<" Thang:  "; cin >> ns.thang;
        cout << " Nam: "; cin >> ns.nam;

    }

    void  xuat()
    {
        cout << "Ho ten: " << ht <<endl;
        cout <<" So chung minh thu: "<< cmt << endl;
        cout << " Ho khau: "<< k << endl;
        cout << " Ngay sinh: "<< ns.ngay <<" / "<< ns.thang << " / "<< ns.nam <<endl;
    }

    friend void sapxep(khachhang a[],int n)
        {
            for(int i=0;i<n;i++)
                for(int j=i+1;j<n;j++)
                    if(strcmp(a[i].ht,a[j].ht)==1)
                    {
                        khachhang tp=a[i];
                        a[i]=a[j];
                        a[j]=tp;
                    }
        }

        int check()
        {
            if(ns.thang== 12)
                return 1;
            return 0;
        } 

};

int main()
{
    khachhang *a;
	int n;
	a = new khachhang[n];
	cout<<"\n Nhap so khach hang : ";cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cout<<"\n -- Nhap thong tin cho khach hang thu "<<i+1<<endl;
		a[i].nhap();
	}
   cout<<"\n\t====Thong tin "<<n<<" khach hang sau khi nhap la==="<<endl;;
	for(int i = 0; i < n; i++)
    {
		a[i].xuat();
	}

    cout<<"\n\n\t==Danh sach khach hang theo thu tu tang dan cua ho ten== \n";
    sapxep(a,n);
    for(int i = 0; i < n; i++)
    {
		a[i].xuat();
	}

    cout<<"\n\n\t===Danh sach khach hang co sinh nhat thang 12===\n";
        for(int i=0;i<n;i++)
            if(a[i].check() == 1)
            {
                a[i].xuat();
            }

    return 0;

}