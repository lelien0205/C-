#include<iostream>
#include<math.h>
#include <cstring>

using namespace std;

class GV{
private: 
    char ht[30];
    int t;
    char bc[15];
    char chuyennganh[20];
    float bl;

public:
    void nhap()
    {
        fflush(stdin);
        cout << " Ho va ten: "; cin.getline( this ->ht, 30);
         fflush(stdin);
        cout << " Tuoi: "; cin >> t;
        fflush(stdin);
        cout << " Bang cap: "; cin.getline( this ->bc,15);
         fflush(stdin);
        cout << " Chuyen nganh: "; cin.getline ( this -> chuyennganh, 20);
         fflush(stdin);
        cout << " Bang luong: "; cin >> bl;
        fflush(stdin);
    }

    void xuat()
    {
         cout << " \n Ho va ten: " << ht <<endl;
        cout << " Tuoi: "<< t << endl;
        cout << " Bang cap: " << bc <<endl;
        cout << " Chuyen nganh: " << chuyennganh << endl;
        cout << " Bac luong: " << bl <<endl;
        cout <<" luong: "<< bl*610 <<endl;
    }

     int check()
     {
         if(( bl*610) < 2000 )
            return 1;
          return 0;
     }

     friend void sapxep(GV a[],int n)
        {
            for(int i=0;i<n;i++)
                for(int j=i+1;j<n;j++)
                    if(strcmp(a[i].chuyennganh,a[j].chuyennganh)==1)
                    {
                        GV tp=a[i];
                        a[i]=a[j];
                        a[j]=tp;
                    }
        }
};

    

int main()
{
    GV *a;
	int n;
	a = new GV[n];
	cout<<"\n Nhap so giao vien: ";cin>>n;
     fflush(stdin);
	
	for(int i = 0; i < n; i++)
	{
		cout<<"\n -- Nhap thong tin cho khach giao vien thu "<<i+1<<endl;
		a[i].nhap();
	}
   cout<<"\n\t====Thong tin "<<n<<" giao vien sau khi nhap la==="<<endl;;
	for(int i = 0; i < n; i++)
    {
		a[i].xuat();
	}
     
    cout<<"\n\n\t==Danh sach chuyen nganh da sap xep:  \n";
    sapxep(a,n);
    for(int i = 0; i < n; i++)
    {
		a[i].xuat();
	}

     cout<<"\n\n\t===Danh sach giao vien co luong < 2000: ";
        for(int i=0;i<n;i++)
            if(a[i].check() == 1)
            {
                a[i].xuat();
            }

    return 0;

}