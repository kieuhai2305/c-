#include<iostream>
using namespace std;
class matranvuong{
	private:
		int n;
		int a[100][100];
		public:
			void nhap();
			void xuat();
			void tinh();
			};
void matranvuong::nhap(){
	cout<<"nhap cap cua ma tran:";cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
			}
		}
	}
void matranvuong::xuat(){
cout<<"ma tran vua nhap la:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
            cout<<a[i][j]<<"\t";
        }
            cout<<endl;
    }
}
void matranvuong::tinh(){
int cc=0,cp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j){
            cc+=a[i][j];
}
if(j==n-j-1){
cp+=a[i][j];
}
    }
}
cout<<"tong duong cheo chinh la:"<<cc<<endl;
cout<<"tong duong cheo phu la:"<<cp;
}
 main(){
 matranvuong a;
 a.nhap();
 a.xuat();
 a.tinh();
 }


