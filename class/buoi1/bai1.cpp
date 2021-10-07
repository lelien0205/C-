#include <iostream>
#include <math.h>

using namespace std;

struct sp{
    double a;
    double b;

 void nhap()
{
     cout << "\n nhap phan thuc :"; cin >> a;
     cout << " nhap phan ao :"; cin >> b;
}
void xuat()
{
      cout << "\n phan thuc la :" << a;
      cout << "\n phan ao la :" << b << "\n";
}
};

sp cong(sp u1, sp u2)
{
    sp u;
    u.a = u1.a + u2.a;
    u.b = u1.b + u2.b;
    return u;
}
sp tru(sp u1, sp u2)
{
    sp u;
    u.a = u1.a - u2.a;
    u.b = u1.b - u2.b;
    return u;
}
int main()
{
    sp ucong, utru, u1, u2;
    cout << "\n nhap so phuc thu nhat "; u1.nhap();
    cout << "\n nhap so phuc thu thu 2 "; u2.nhap();
    cout << "\n so phuc tong :";
    ucong = cong(u1, u2);
    ucong.xuat();
    cout << "\n so phuc hieu :";
    utru = tru(u1, u2);
    utru.xuat();
    system("pause");
}