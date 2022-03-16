#include<bits/stdc++.h>
using namespace std;
class integer
{
    int m,n;
    public :
    integer(void){}; //this line must be present (implicit constructor must be defined when other constructors are 
    // being declared)
    integer(int x,int y)
    {
        m=x;
        n=y;
    }
    integer(int a)
    {
        m=n=a;
    }
    void display(void)
    {
        cout << m << endl;
        cout << n << endl;
    }
    void diff(integer);
    friend integer sum(integer,integer);
};
void integer :: diff(integer i1)
{
   m=i1.m-i1.n;
   n=m;
}
integer sum(integer i1,integer i2)
{
    integer i3;
    i3.m=i1.m+i2.m;
    i3.n=i1.n+i2.n;
    return i3;
}

int main()
{
    integer int1 = integer(6,7);
    int1.display();
    integer int2(8,9);
    int2.display();
    integer I3=sum(int1,int2);
    I3.display();
    integer I4;
    I4.diff(I3);
    I4.display();
}
