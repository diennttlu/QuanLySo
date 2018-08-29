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
				NhapDaySoTuFile(a,N);
				break;
			case 2:
				TimSoTrongFile();
				break;
			case 3:
				SinhSoNgauNhien();
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
			cout<<"Nhap phim bat ky de tiep tuc: ";
			cin.ignore();
			cin.get();
		}
	}while(f);
	return 0;
}