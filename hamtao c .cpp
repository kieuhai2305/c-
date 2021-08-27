#include<iostream>
#include<iomanip>
using namespace std;
class ThiSinh{
	private:
		string maTS;
		string hoTen;
		float dt,dl,dh;
	public:
		friend void sapxepht(ThiSinh *ts,  int n);
		void nhap();
		void xuat();
		float tongDiem();
};
void ThiSinh::nhap() 
{
	cin.ignore();
	cout<<"\nNhap mats: ";getline(cin,maTS);
	cout<<"\nNhap hoten: ";getline(cin,hoTen);
	cout<<"\nNhap dt, dl,dh: ";cin>>dt>>dl>>dh;
}
void ThiSinh::xuat() 
{
	
	cout<<setw(8)<<left<<maTS;
	cout<<setw(20)<<left<<hoTen;
	cout<<setw(7)<<left<<dt;
	cout<<setw(7)<<left<<dl;
	cout<<setw(7)<<left<<dh;
	cout<<setw(8)<<left<<tongDiem();

	}
float ThiSinh::tongDiem() 
{
	return (dt+dl+dh);
	}
void nhapDSTS(ThiSinh *ts, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin thi sinh thu "<<i+1;
		cout<<endl;
		ts[i].		nhap() ;
		}
	}
void xuatDSTS(ThiSinh *ts, int n)
{
	
	for(int i=0;i<n;i++)
	{
		ts[i].xuat() ;
		ts[i].tongDiem() ;
		cout<<endl;
	}
	}
	void sapxepht(ThiSinh *ts,  int n)
	{
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if (ts[i].hoTen <ts[j].hoTen )	
	{
		ThiSinh tg;
		tg=ts[i];
		ts[i]=ts[j];
		ts[j]=tg;
		}
				
	}
void sapXep(ThiSinh *ts,  int n)
{
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if (ts[i].tongDiem() >ts[j].tongDiem() )
	{
		ThiSinh tg;
		tg=ts[i];
		ts[i]=ts[j];
		ts[j]=tg;
		}
	xuatDSTS(ts,n);	
	}
int main()
{
	ThiSinh *ts;
	//cap phat bo nho cho mang
	int n;
	cout<<"\nNhap n: ";cin>>n;
	ts=new ThiSinh[n];
	cout<<"\nDanh sach sap xep ho ten giam dan: "<<endl;
	nhapDSTS(ts,n);
	cout<<setw(8)<<left<<"mats";
	cout<<setw(20)<<left<<"hoten";
	cout<<setw(7)<<left<<"dtoan";
	cout<<setw(7)<<left<<"dly";
	cout<<setw(7)<<left<<"dhoa";
	cout<<setw(8)<<left<<"tongdiem";
	cout<<endl;
//	xuatDSTS(ts,n);
//	cout<<"\nDanh sach sap xep tong diem: "<<endl;
//	sapXep(ts,n);
	xuatDSTS(ts,n);
	sapxepht(ts,n);
	
	}