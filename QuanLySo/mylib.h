#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Menu()
{
	cout<<"Moi chon cac chuc nang cua chuong chinh.\n";
	cout<<"1. Them so.\n";
	cout<<"2. Hien thi cac so. \n";
	cout<<"3. Nap day so tu file. \n";
	cout<<"4. Luu kho so vao file. \n";
	cout<<"5. Sinh so ngau nhien. \n";
	cout<<"0. Ket thuc.\n";
	int c;
	cin>>c;
	return c;
}

void ThemSo(int a[], int &N)
{
	cout<<"Nhap so luong so can them: ";
	int m;
	cin>>m;

	cout<<"\t Nhap cac so can them: ";
	for(int i = 0; i<m;i++)
	{
		cin>>a[N];
		N++;
	}
}

void HienThiCacSo(int a[], int &N)
{
	for(int i = 0; i< N; i++)
	{
		cout<<a[i]<<" ";
	}
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
		fin>>a[N];
		cout<<a[N]<<" ";
		N++;
	}
	
	cout<<endl;
	fin.close();
}


void LuuKhoSoXuongFile(int a[], int N)
{
	char fileName[100];
	cout<<"Nhap ten file chua du lieu: ";
	cin.ignore();
	cin.getline(fileName,100);

	ofstream fout(fileName);
	
		for(int i =0;i<N;i++)
		{
			fout<<a[i];
			if(i < N-1)
				fout<<" ";
		}
		fout.close();
	

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

void SinhSoNgauNhien(int a[], int &N)
{
	cout<<"Sinh ra 1 luong so nguyen: \n";
	cout<<"\t Nhap so luong so nguyen ban muon sinh: ";
	int n; cin>>n;
	N = n;
	cout<<"\t Nhap khong muon sinh [a,b]: ";
	int x,y;
	cin>>x>>y;
	srand(time(0)); // sau moi lan chay se sinh ra 1 day so nguyen moi
		for(int i = 1; i<=N; i++)
		{
			a[i]>>(1 + rand()%(x-y+1));
		}
		cout<<"--->Da xong. \n";
}


void SinhSoNgauNhien() // sinh so ngau nhien roi luu vao file
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
void ChepDuLieuTuFileAvaFileB()
{
	char fileName1[100];
	cout<<"Nhap file copy du lieu: ";
	cin.ignore();
	cin.getline(fileName1,100);

	char fileName2[100];
	cout<<"Nhap file paste du lieu: ";
	cin.ignore();
	cin.getline(fileName2,100);

	ifstream fin(fileName1);
	ofstream fout(fileName2);

	int N =0;
	int a[1000000];

	while (!fin.eof())
	{
		fin>>a[N++];
	}
	for(int i = 0; i<N;i++)
	{
		fout<<a[i]<<" ";
	}
	fin.close();
	fout.close();
}