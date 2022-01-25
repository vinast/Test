#include <iostream>
#include <math.h>
using namespace std;

int tambah (int a, int b)
{
	int hasil;
	hasil = a+b;
	return hasil;
}
int kurang (int c, int d)
{
	int hasilc;
	hasilc = c-d;
	return hasilc;
}
int kali (int e, int f)
{
	int hasile;
	hasile = e*f;
	return hasile;
}
int bagi (int g, int h)
{
	int hasilg;
	hasilg = g/h;
	return hasilg;
}

void cetakgaris (int i)
{
	int p;
	for (p = 0; p <= i; p++)
	cout<<"-";
	cout<<"\n";
}

int main ()
{
	cetakgaris(20);
	cout<<"PROGRAM KALKULATOR"<<endl;
	cetakgaris(20);
	cout<<"Menu Operasi :"<<endl;
	cout<<"\t1. Penambahan"<<endl;
	cout<<"\t2. Pengurangan"<<endl;
	cout<<"\t3. Perkalian"<<endl;
	cout<<"\t4. Pembagian"<<endl;
	
	
	int a, b, c, d, e, f, g, h, menu;
	cout<<"\nPilih Menu : ";cin>>menu;
	if (menu==1)
	{
		cout<<"Masukkan Angka Pertama\t: ";cin>>a;
		cout<<"Masukkan Angka Kedua\t: ";cin>>b;
		cetakgaris(15);
        cout<<"Hasil "<<a<<" + "<<b<<" = "<<tambah(a,b);
	}
	else if (menu==2)
	{
		cout<<"Masukkan Angka Pertama\t: ";cin>>c;
		cout<<"Masukkan Angka Kedua\t: ";cin>>d;
		cetakgaris(15);
		cout<<"Hasil "<<c<<" - "<<d<<" = "<<kurang(c,d);
	}
	else if (menu==3)
	{
		cout<<"Masukkan Angka Pertama\t: ";cin>>e;
		cout<<"Masukkan Angka Kedua\t: ";cin>>f;
		cetakgaris(15);
		cout<<"Hasil "<<e<<" x "<<f<<" = "<<kali(e,f);
	}
	else if (menu==4)
	{
		cout<<"Masukkan Angka Pertama\t: ";cin>>g;
		cout<<"Masukkan Angka Kedua\t: ";cin>>h;
		cetakgaris(15);
		cout<<"Hasil "<<g<<" : "<<h<<" = "<<bagi(g,h);
	}
	
	return 0;
	
}
