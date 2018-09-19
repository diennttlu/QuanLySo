#include <iostream>
using namespace std;
#include "mylib.h"
#include <stdlib.h>
int main()
{
	int a[1000000] , N = 0;
	int option;
	bool f = true;
	do
	{
		system("clear");
		option = Menu();
		switch(option)
		{
			case 1:
				ThemSo(a,N);
				break;
			case 2:
				HienThiCacSo(a,N);
				break;
			case 3:
				NhapDaySoTuFile(a,N);
				break;
			case 4: 
				LuuKhoSoXuongFile(a,N);
				break;
			case 5:
				SinhSoNgauNhien(a, N);
				break;
			case 6:
				ChepDuLieuTuFileAvaFileB();
				break;
			case 0:
				break;
		};
		if(option == 0)
		{
			f = false;
		}
		else
		{
			cout<<"\n Nhap phim bat ky de tiep tuc ->";
			cin.ignore();
			cin.get();
		}
	}while(f);
	return 0;
}