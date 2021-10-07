#include<iostream>

using namespace std;

 int f(int n) 
{
if (n < 2) 
return 0;
else
return 1+ f(n/2);  // log co so 2 cua n 
}

int main()
{
    int n;
    cout<<" nhap vao mot so n: ";
    cin >> n;

    cout<<" a = "<< f(n);

}