#include<iostream>
using namespace std;
/*
xây dung mot lop phan so
a.	Các thu?c tính: tu so, mau so
b.	Các phuong thuc: constructor không doi, constructor co doi, nh?p xu?t
*/
class phanso
{
	private:
	public:
		int ts, ms;
		int UCLN(int a, int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
void rutgon(phanso &ps)
{
	int c=UCLN(ps.ts,ps.ms);
	ps.ts=ps.ts/c;
	ps.ms=ps.ms/c;
}

		phanso()
		{
			ts=0;ms=1;
			}
		phanso(int ts, int ms)
		{
			this->ts=ts;
			this->ms =ms;
			}
		void nhap()
		{
			cout<<"nhap ts= ";cin>>ts;
			do
			{
				cout<<"nhap ms= ";cin>>ms;
				}while (ms==0);
			}
		void xuat()
		{
			cout<<ts<<"/"<<ms;
			}
		phanso congps(phanso p)
		{
			phanso tong;
			tong.ts =p.ts *this->ms +this->ts *p.ms ;
			tong.ms =p.ms *this->ms ;
			rutgon (tong);
			return tong;
			}
            phanso operator +(phanso p)
		    {

			phanso tong;
			tong.ts =p.ts *this->ms +this->ts *p.ms ;
			tong.ms =p.ms *this->ms ;
            rutgon (tong);
			return tong;
			}
		phanso trups(phanso p)
		{
			phanso hieu;
			hieu.ts =p.ts *this->ms - this->ts *p.ms ;
			hieu.ms =p.ms *this->ms ;
			rutgon (hieu);
			return hieu;
			}
            phanso operator -(phanso p)
		    {

			phanso hieu;
			hieu.ts =p.ts *this->ms -this->ts *p.ms ;
			hieu.ms =p.ms *this->ms ;
            rutgon (hieu);
			return hieu;
			}

    	phanso nhanps(phanso p)
		{
			phanso tich;
			tich.ts =p.ts *this->ts ;
			tich.ms =p.ms *this->ms ;
			rutgon (tich);
			return tich;
			}
            phanso operator *(phanso p)
		    {

			phanso tich;
			tich.ts =p.ts *this->ts ;
			tich.ms =p.ms *this->ms ;
			rutgon (tich);
			return tich;
			}
    	phanso chiaps(phanso p)
		{
			phanso thuong;
			thuong.ts =p.ts *this->ms ;
			thuong.ms =p.ms *this->ts ;
			rutgon (thuong);
			return thuong;
			}
             phanso operator %(phanso p)
             phanso thuong;
			thuong.ts =p.ts *this->ms ;
			thuong.ms =p.ms *this->ts ;
			rutgon (thuong);
			return thuong;
			}



	};
int main()
{
phanso p1,p2;
cout<<"\nnhap phan so 1: ";
p1.nhap() ;
cout<<"\nnhap phan so 2: ";
p2.nhap() ;					
cout<<"\nxuat phan so 1: ";
p1.xuat() ;
cout<<"\nxuat phan so 2: ";
p2.xuat();
cout<<"\ntong hai phan so : ";
phanso tong = p1+p2;
tong.xuat;

cout<<"\nhieu hai phan so : ";
phanso hieu=p1-p2;
hieu.xuat();

cout<<"\ntich hai phan so : ";
phanso tich=p1*p2;
tich.xuat();

cout<<"\nthuong hai phan so : ";
phanso thuong=p2%p1;
thuong.xuat();


	}