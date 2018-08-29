#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Menu()
{
	cout<<"Moi chon cac chuc nang cua chuong chinh.\n";
	cout<<"1. Nap du lieu.\n";
	cout<<"2. Tim so trong file.\n";
	cout<<"3. Sinh so ngau nhien. \n";
	cout<<"0. Ket thuc.\n";
	int c;
	cin>>c;
	return c;
}

void NhapDaySoTuFile(int a[], int &N)
{
	char fileName[100];
	cout<<"Nhap ten file chua du lieu: ";
	cin.ignore();
	cin.getline(fileName,100);

	ifstream fin(fileName);
	N = 0;
	while(!fin.eof())
	{
		fin>>a[N++];
		cout<<a[N-1]<<" ";
	}
	cout<<endl;
	fin.close();
}

void TimSoTrongFile()
{	
	int a[1000000] , N =0;
	char fileName[100];
	cout<<"Nhap ten file chua du lieu: ";
	cin.ignore();
	cin.getline(fileName,100);


	int so;
	cout<<"Nhap so ban can tim: ";
	cin>>so;
	bool f = false;

	ifstream fin(fileName);

	while(!fin.eof())
	{
		fin>>a[N++];
		//cout<<a[N-1];
	}

	for(int i = 0;i<N;i++)
	{
		if (a[i] == so)
		{
			cout<<"Co xuat hien so. \n";
			f = true;
			break;
		}
	}
	if(!f)
	{
		cout<<"Khong xuat hien so. \n";
	}

	fin.close();
	/*bool f = false;		
	for(int i = 0; i<N;i++)
	{
		if(a[i] == so)
		{
			cout<<"Co xuat hien so. \n";
			f = true;
			break;
		}
	}
	if(!f)
	{
		cout<<"Khong xuat hien so. \n";
	}
	*/
}
void SinhSoNgauNhien()
{
	cout<<"Sinh ra 1 luong so nguyen, roi luu vao file du lieu tuy chon: \n";
	cout<<"\t Nhap so luong so nguyen ban muon sinh: ";
	int n; cin>>n;
	char fileName[100];
	cout<<"\t Nhap ten file chua du lieu: ";
	cin.ignore();
	cin.getline(fileName,100);

	cout<<"\t Nhap khoang sinh [a,b]: ";
	int a,b;
	cin>>a>>b;
	ofstream fout(fileName);

		srand(time(0)); // sau moi lan chay se sinh ra 1 trieu so nguyen moi
		for(int i = 1; i<=n; i++)
		{
			fout<<(1 + rand()%(a-b+1))<<" ";
		}
	cout<<"--->Da xong. Hay mo file "<<fileName<<"de xem ket qua sinh. \n";
	fout.close();
}
