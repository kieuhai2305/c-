#include<iostream>
using namespace std;
#define M 100
	
class MaTranVuong 
{

	private:
		int arr[M][M];
		int SoHang;
		int SoCot;
	public:
		void NhapMt();
		void XuatMt();
		int TongcacPhanTuXungQuanhMaTran();
};
	
void MaTranVuong :: NhapMt() 
{
	cout << " NHAP SO HANG : ";
	cin >> SoHang;
	cout << " NHAP SO COT : ";
	cin >> SoCot;
	cout << " NHAP CAC PHAN TU MA TRAN \n";
	for(int i = 0 ; i < SoHang ; i++) 
	{
		for(int j = 0 ; j < SoCot ; j++) 
		{
			cout << "arr[" <<i<<"][" <<j<<"] = ";
			cin >> arr[i][j];
		}
	}
}
void MaTranVuong :: XuatMt()
{

	for(int i = 0 ; i < SoHang ; i++) 
	{
		for(int j = 0 ; j < SoCot ; j++) 
		{
			cout << arr[i][j] << "  ";
		}
		cout << "\n";
	}
}
int MaTranVuong :: TongcacPhanTuXungQuanhMaTran() {
	int Sum = 0;
	for(int i = 0 ; i < SoCot ; i++) {
		Sum += arr[0][i];
	}
	for(int i = 1 ; i < SoHang ; i++) {
		Sum += arr[i][0];
	}
	for(int i = 1 ; i < SoCot ; i++) {
		Sum += arr[SoHang-1][i];
	}
	for(int i = 1 ; i<SoHang-1 ; i++) {
		Sum += arr[i][SoCot-1];
	}
	cout << Sum;
}
int main() {
	int arr[M][M];
	MaTranVuong mtv;
	mtv.NhapMt();
	cout << " MA TRAN VUA NHAP LA : \n";
	mtv.XuatMt();
	cout << "TONG CAC PHAN TU XUNG QUANH MA TRAN :  ";
	mtv.TongcacPhanTuXungQuanhMaTran();
	cout << "\n";
	
}