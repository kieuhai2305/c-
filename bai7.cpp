#include<iostream>
using namespace std;
#define M 100
class MaTranVuong {
	private:
		int Cmt;
		int arr[M][M];
	public:
		void NhapMt();
		void XuatMt();
		int TongCacPhanTuDuongCheoChinh();
		int TongCacPhanTuTrenDuongCheoPhu();
	};
void MaTranVuong :: NhapMt() {
	cout << " NHAP CAP CUA MA TRAN : ";
	cin >> Cmt;
	for(int i = 0 ; i < Cmt ; i++) {
		for(int j = 0 ; j < Cmt ; j++) {
			cout << "arr[" <<i<<"][" <<j<<"] = ";
			cin >> arr[i][j];
		}
	}
}
void MaTranVuong :: XuatMt() {
	for(int i = 0 ; i < Cmt ; i++) {
		for(int j = 0 ; j < Cmt ; j++) {
			cout << arr[i][j] << "  ";
			}
		cout << "\n";
	
	}
}
int MaTranVuong:: TongCacPhanTuDuongCheoChinh() {
	int Tong = 0;
	for(int i = 0 ; i < Cmt ; i++) {
		Tong += arr[i][i];
		}
	cout  << endl << " TONG CAC PHAN TU TREN DUONG CHEO CHINH : " << Tong << endl;
	return Tong;
	}
int MaTranVuong :: TongCacPhanTuTrenDuongCheoPhu() {
	int Tong1 = 0;
	for(int i = 0 ; i < Cmt ; i++) {
		Tong1 += arr[i][(Cmt-1)-i];
		}
	cout << endl << " TONG CAC PHAN TU TREN DUONG CHEO PHU : " << Tong1;
	return Tong1;
	}
int main() {
	int arr[M][M];
	int Cmt;
	MaTranVuong Mtv;
	Mtv.NhapMt();
	cout << endl <<"======================================================"<< endl;
	cout << endl <<"MANG DAY \n"<< endl;
	Mtv.XuatMt();
	cout << endl <<"======================================================"<< endl;
	Mtv.TongCacPhanTuDuongCheoChinh();
	cout << endl <<"======================================================" << endl;
	Mtv.TongCacPhanTuTrenDuongCheoPhu();
	cout <<"\n"	;
	return 0;
	}	