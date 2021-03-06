#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
struct dateofbirth
{
    int day,month,year;
};
class client
{
    private:
        char ht[30],cmt[10],hk[50];
        dateofbirth dob;
    public:
        void input()
        {
            cout<<"Nhap ngay sinh :";cin>>dob.day;
            cout<<"Nhap thanh sinh :";cin>>dob.month;
            cout<<"Nhap namsinh :";cin>>dob.year;
            cout<<"Nhap ten :";
            fflush(stdin);
            cin.getline(this->ht,30);
            cout<<"Nhap so chung minh thu :";
            fflush(stdin);
            cin.getline(this->cmt,10);
            cout<<"Nhap ho khau :";
            fflush(stdin);
            cin.getline(this->hk,50);
        }
        void output()
        {
            cout<<"Ngay sinh "<<dob.day<<"/"<<dob.month<<"/"<<dob.year<<endl;
            cout<<"Ho ten :"<<ht<<endl;
            cout<<"Chung minh thu :"<<cmt<<endl;
            cout<<"Ho Khau :"<<hk<<endl;;
            cout<<endl; 
        }
        int check()
        {
            if(dob.month == 12)
                return 1;
            return 0;
        }
        friend void sapxep(client a[],int n)
        {
            for(int i=0;i<n;i++)
                for(int j=i+1;j<n;j++)
                    if(strcmp(a[i].ht,a[j].ht)==1)
                    {
                        client tp=a[i];
                        a[i]=a[j];
                        a[j]=tp;
                    }
        }
};
int main ()
{
    int n;
	cout<<"Nhap vao so khach hang :";cin>>n;
    client* a = new client[n];
	for(int i = 0; i < n; i++)
    {
		cout<<"\nNhap vao thong tin khach hang thu: "<<i+1<<endl;
		a[i].input();
	}
    cout<<"====Thong tin "<<n<<" khach hang sau khi nhap la==="<<endl;;
	for(int i = 0; i < n; i++)
    {
		a[i].output();
	}
    cout<<"===Danh sach khach hang co sinh nhat thang 12===\n";
        for(int i=0;i<n;i++)
            if(a[i].check() == 1)
            {
                a[i].output();
            }
    cout<<"==Danh sach khach hang theo thu tu tang dan cua ho ten== \n";
    arrange(a,n);
    for(int i = 0; i < n; i++)
    {
		a[i].output();
	}
    return 0;
}