#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

class phanso{
private: 
    int tu;
    int mau;
public:
    phanso(){
        int tu = 1;
        int mau = 1;
    }

    phanso( int tu , int mau )
    {
        this ->tu = tu;
        this ->mau = mau;
    }

    ~ phanso(){

    }
   

    int ucln( int a, int b)
    {
        while (a != b)
        {
            if(a > b)
                a = a - b;
            else
                b = b - a;
        }
        return a;
    }

    void nhap( phanso a[], int n)
    {
        for ( int i = 0; i < n; i++ )
        {
            cout <<"\n nhap phan so thu " << i +1 << "la: ";
            cout <<"\n \ttu so la: " ;
            cin>>a[i].tu;
            do{
                cout <<"\n \tmau so la: " ;
                cin >> a[i].mau;
                if( a[i].mau == 0 )
                    cout <<" nhap sai, hay nhap lai !!!";
            }while (a[i].mau == 0);
        }
    }

    void xuat( phanso a[], int n)
    {   cout << " ----------------------------------------------------" ;
        for (int i = 0; i < n; i++ ){
            cout<<"\n \t\t Phan so thu "<<i+1<<" : "<<a[i].tu<<"/"<<a[i].mau<<endl;
        }
    }

    int tong( phanso a[], int n)
    {   cout << " ----------------------------------------------------" ;
        int t = a[0].tu;
        int m = a[0].mau;
        for ( int i = 0; i < n; i++ )
        {
            t = ( a[i].tu* m +  a[i].mau * t);
            m = m * a[i].mau;
        }
    int k = ucln( t ,m );
	t = t/k;
	m = m/k;
    cout << "\n \t tong cac phan so la: " << t << " / " << m;
    }

    int hieu( phanso a[], int n)
    {
        int t = a[0].tu;
        int m = a[0].mau;
        for ( int i = 0; i < n; i++ )
        {
            t = ( a[i].tu* m) - ( a[i].mau* t);
            m = m * a[i].mau;
        }
    int k = ucln( t ,m );
	t = t/k;
	m = m/k;
    cout << "\n\n \t Hieu cac phan so la: " << t << " / " << m;
    }

    

     int tich( phanso a[], int n)
    {
        int t = a[0].tu;
        int m = a[0].mau;
        for ( int i = 0; i < n; i++ )
        {
            t =  a[i].tu* m;
            m = m * a[i].mau;
        }
    
    int k = ucln( t ,m );
	t = t/k;
	m = m/k;
    cout << "\n\n \t tich cac phan so la: " << t << " / " << m;
    }

     int thuong( phanso a[], int n)
    {
        int t = a[0].tu;
        int m = a[0].mau;
        for ( int i = 0; i < n; i++ )
        {
            t = a[i].tu * m;  
            m = a[i].mau * t;
        }
    int k = ucln( t ,m );
	t = t/k;
	m = m/k;
    cout << "\n\n\t thuong cac phan so la: " << t << " / " << m;
    }
};

int main()
{
    int  n;
    cout << " so phan so nhap vao la: ";
    cin >> n;
    phanso a[100];
     a -> nhap(a,n);
     a -> xuat(a,n);
     a -> tong(a,n);
     a -> hieu(a,n);
     a-> tich( a,n);
     a -> thuong(a,n);

     return 0;
    getche();
}