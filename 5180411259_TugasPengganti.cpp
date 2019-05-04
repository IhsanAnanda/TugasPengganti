#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
#include <windows.h>

using namespace std;

struct data1{
	unsigned long int id;
	string nama;
	char jk;
	char gol;
	string alamat;
	string telp;
}pasien[999];

struct data2{
	int kode;
	string nama;
	string dokter;
	string jadwal;
}poli[99];
int x;

void input1(){
	cout<<"Masukkan Jumlah Data Pasien Yang Ingin diinput	: ";
	cin>>x;
	for(int i=0;i<x;i++){
		cout<<"Masukkan ID Pasien\t:"; cin>>pasien[i].id;
		cout<<"Masukkan Nama Pasien\t:"; cin>>pasien[i].nama;
		cout<<"Masukkan Jenis(L/P)\t:"; cin>>pasien[i].jk;
		cout<<"Masukkan Golongan Darah\t:"; cin>>pasien[i].gol;
		cout<<"Masukkan Alamat Pasien\t:"; cin>>pasien[i].alamat;
		cout<<"Masukkan No. Telepon\t:"; cin>>pasien[i].telp;
	};
	system ("cls");
	cout<<"Input Selesai Kembali ke Menu Sebelumnya... "<<endl;
}

void read1(){
	cout<<"==========================================================================================================================="<<endl;
	cout<<"					  	TABEL DATA PASIEN "<<endl;
	cout<<"==========================================================================================================================="<<endl;
	cout<<"No.	|	ID	|	Nama	|	L/P	|	Gol. Darah	|	No.Telpon	|	Alamat	"<<endl;
	for(int i=0;i<x;i++){
		cout<<i+1<<".	"<<"|"
			<<"	"<<pasien[i].id<<"	"<<"|"
			<<"	"<<pasien[i].nama<<"	"<<"|"
			<<"	"<<pasien[i].jk<<"	"<<"|"
			<<"	"<<pasien[i].gol<<"        	"<<"|"
			<<"	"<<pasien[i].telp<<"	"<<"|"
			<<"	"<<pasien[i].alamat
			<<endl;
	}
}

void update1(){
	//cari dulu
	bool found;
	unsigned long int cari;
	cout<<"Masukkan ID Yang Ingin Diubah Datanya :";
	cin>>cari;
	found =false;
	int i=0;
	while ((i<x)&(!found))
	{
	    if (pasien[i].id==cari)
	    found=true;
	    else
	    i=i+1;
	}
	if(found){
	cout<<"ID Pasien\t: "<<cari<<endl;
	cout<<"Nama Pasien\t: "<<pasien[i].nama<<endl;
	cout<<"Jenis Kelamin\t: "<<pasien[i].jk<<endl;
	cout<<"Golongan Darah\t: "<<pasien[i].gol<<endl;
	cout<<"Alamat\t: "<<pasien[i].alamat<<endl;
	cout<<"No. Telpon\t: "<<pasien[i].telp<<endl<<endl;
	
	//mengubah data
	cout<<"Masukkan Data yang Baru "<<endl;
	cout<<"Masukkan Nama Pasien\t:"; cin>>pasien[i].nama;
	cout<<"Masukkan Jenis(L/P)\t:"; cin>>pasien[i].jk;
	cout<<"Masukkan Golongan Darah\t:"; cin>>pasien[i].gol;
	cout<<"Masukkan Alamat Pasien\t:"; cin>>pasien[i].alamat;
	cout<<"Masukkan No. Telepon\t:"; cin>>pasien[i].telp;
	cout<<"Data Telah Berhasil diupdate!"<<endl;
	}
	else{
	cout<<"ID Pasien "<<cari<<" TIDAK ADA DALAM DATA "<<endl;
	}
}

void delete1(){
	read1();
	int hapus;
	cout<<endl
		<<"Masukkan Nomor Baris Data Yang Ingin Dihapus :";cin>>hapus;
	hapus=hapus-1;
	for(int i=hapus;i<x;i++){
		pasien[i]=pasien[i+1];
	}
	cout<<"Data Berhasil Dihapus! "<<endl;
}

/*void input2(){
	cout<<"Belum Ada "<<endl;
}

void read2(){
	cout<<"Belum Ada "<<endl;
}

void update2(){
	cout<<"Belum Ada "<<endl;
}

void delete2(){
	cout<<"Belum Ada "<<endl;
}*/

int menu1(){
	int pilih=0;
	int a=0;
    do {system ("cls");
    	cout<<"==============================="<<endl;
		cout<<" Data Pasien "<<endl;
		cout<<"==============================="<<endl<<endl;
       	cout<<"Daftar Menu : "<<endl;
	    cout<<"1. Input Data Pasien"<<endl;
	    cout<<"2. Menampilkan Data Pasien"<<endl;
	    cout<<"3. Update Data Pasien"<<endl;
	    cout<<"4. Menghapus Data Pasien"<<endl;
	    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";cin>>pilih;
    switch(pilih)
        {case 1:{input1();a=1;break;}
         case 2:{if(a==0){cout<<"Masukkan Data Terlebih Dahulu"<<endl;}else{read1();};break;}
         case 3:{if(a==0){cout<<"Masukkan Data Terlebih Dahulu"<<endl;}else{update1();};break;}
         case 4:{if(a==0){cout<<"Masukkan Data Terlebih Dahulu"<<endl;}else{delete1();};break;}
         case 0:{cout<<"Kembali ke Menu Utama...  "<<endl;break;}
         default:cout<<"Pilihan Yang Masukkan Salah "<<endl;}
    system("pause");}
    while(pilih !=0);
}

/*int menu2(){
	int pilih=0;
	int b=0;
    do {system ("cls");
    	cout<<"==============================="<<endl;
		cout<<" Data Pasien "<<endl;
		cout<<"==============================="<<endl<<endl;
       	cout<<"Daftar Menu : "<<endl;
	    cout<<"1. Input Data Poli"<<endl;
	    cout<<"2. Menampilkan Data Poli"<<endl;
	    cout<<"3. Update Data Poli"<<endl;
	    cout<<"4. Menghapus Data Poli"<<endl;
	    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";cin>>pilih;
    switch(pilih)
        {case 1:{input2();b=1;break;}
         case 2:{if(b==0){cout<<"Masukkan Data Terlebih Dahulu"<<endl;}else{read2();};break;}
         case 3:{if(b==0){cout<<"Masukkan Data Terlebih Dahulu"<<endl;}else{update2();};break;}
         case 4:{if(b==0){cout<<"Masukkan Data Terlebih Dahulu"<<endl;}else{delete2();};break;}
         case 0:{cout<<"Kembali ke Menu Utama...  "<<endl;break;}
         default:cout<<"Pilihan Yang Masukkan Salah "<<endl;}
    system("pause");}
    while(pilih !=0);
}*/

int main()
{
	menu1();
	/*int pilih=0;
    do {system ("cls");
    	cout<<"=============================================="<<endl;
		cout<<" Aplikasi Pendaftaran Pasien Pada Puskesmas "<<endl;
		cout<<"=============================================="<<endl<<endl;
       	cout<<"Daftar Menu : "<<endl;
	    cout<<"1. Data Pasien"<<endl;
	    cout<<"2. Data Poli"<<endl;
	    cout<<"3. Transaksi Pendaftaran"<<endl;
	    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";cin>>pilih;
    switch(pilih)
        {case 1:{menu1();break;}
         case 2:{menu2();break;}
         case 3:{menu3();break;}
         case 0:{cout<<"Program Selesai... "<<endl;system("pause");break;}
         default:cout<<"Pilihan Yang Masukkan Salah "<<endl;}
    system("pause");}
    while(pilih!=0);*/
}

