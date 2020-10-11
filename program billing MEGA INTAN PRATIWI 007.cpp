// Program Billing Warnet
// MEGA INTAN PRATIWI (20051397007)
// D IV Manajemen Informatika 2020A

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main () {
	
	string nama, no;
	int jam_mulai, detik_mulai;
	int menit_mulai, jam_selesai;
	int menit_selesai, detik_selesai;
	int hasil_mulai=(jam_mulai*3600)+(menit_mulai*60);
	int hasil_selesai=(jam_selesai*3600)+(menit_selesai*60);
	int durasi=hasil_selesai-hasil_mulai;
	float total;
	float biaya;
	float tot_mulai, tot_selesai;
	
   ;cout<<"  BILLING WARNET"<<endl;
   cout<<"  MEGA INTAN PRATIWI"<<endl;
   cout<<"  NIM 20051397007"<<endl;
   cout<<"  D IV Manajemen Informatika (2020A)"<<endl;
    cout<<"\n\n";
    cout<<"         *************** MEGA NET. **************"<<endl;
    cout<<"\n\n";
    cout<<"               Tarif Rp. 5.000 per jam \n\n";
    cout<<"Nomor Urut Komputer\t:"; cin>>no;
    cout<<"Nama Pengguna	 \t:"; cin>>nama;
    cout<<"\n\n";
    cout<<"**************************************************************\n\n";
    
    cout<<"WAKTU MULAI\n";
    cout<<"Jam \t= "; cin>>jam_mulai;
    cout<<"Menit \t= "; cin>>menit_mulai;
    cout<<"Detik \t= "; cin>>detik_mulai;
    tot_mulai=(jam_mulai*3600)+(menit_mulai*60)+detik_mulai;
    ;cout<<"\n\n"
    
    ;cout<<"WAKTU SELESAI\n";
    cout<<"Jam \t= "; cin>>jam_selesai;
    ;cout<<"Menit \t= "; cin>>menit_selesai;
    cout<<"Detik \t= "; cin>>detik_selesai;
    tot_selesai=(jam_selesai*3600)+(menit_selesai*60)+detik_selesai;
    ;cout<<"\n\n"
    ;total=(tot_selesai-tot_mulai)/3600;
    
    cout<<"  Durasi Pemakaian \t= "<<total<< "detik\n";
    biaya=total*5000
    ;cout<<"  Tarif           \t= "<<biaya;
    cout<<"\n\n";
    
    cout<<"       TOTAL BIAYA YANG HARUS DIBAYAR \t= Rp. "<<biaya;
    cout<<"\n\n";
    cout<<"************************ THANK YOU ***************************\n\n"
    
 ;getch() 
;}
