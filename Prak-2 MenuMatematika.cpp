/* Program Menghitung Segitiga Siku-siku
   Mega Intan Pratiwi 20051397007
   D IV Manajemen Informatika 2020A*/

#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstdlib>

using namespace std;
int main(){
	
	/* hitung panjang sisi miring = sqrt((A*A)+(B*B))
	   hitung luas = 0.5*a*t
	   hitung keliling = sisi+sisi+sisi
	   keluar program */
	
	int menu;  
	float A, B, C;
	int a,t;
	float luas;
	int s1, s2, s3;
	float keliling;
	char yn;
	string verifikasi;
	
	cout<<" PROGRAM MENGHITUNG SEGITIGA SIKU-SIKU\n";
	cout<<" .....................................\n";
	cout<<"\n\n";
	
	cout<<" --------------------------------------\n";
	cout<<" ----------- MENU SEGITIGA ------------\n";
	cout<<" --------------------------------------\n";
	cout<<"   1. Hitung panjang sisi miring\n";
	cout<<"   2. Hitung luas\n";
	cout<<"   3. Hitung keliling\n";
	cout<<"   4. Keluar program\n";
	cout<<"\n\n";
	cout<<" Silahkan pilih menu [1/2/3/4] :"; cin>>menu;
	switch (menu){
		case 1:
			menu = '1';
			cout<<" Panjang sisi A \t: "; cin>>A;
	        cout<<" Panjang sisi B \t: "; cin>>B;	
			C=sqrt((A*A)+(B*B));
	        cout<<" Jadi, sisi miring (C) \t: "<<C<<endl;
			break;
		
		case 2:
			menu = '2';
			cout<<" Panjang alas    \t: "; cin>>a;
			cout<<" Tinggi segitiga \t: "; cin>>t;
			luas = 0.5*a*t;
			cout<<" Jadi, luas segitiga \t: "<<luas<<endl;
			break;
			
		case 3:
			menu = '3';
			cout<<" Sisi 1 segitiga \t: "; cin>>s1;
			cout<<" Sisi 2 segitiga \t: "; cin>>s2;
			cout<<" Sisi 3 segitiga \t: "; cin>>s3;
			keliling=s1+s2+s3;
			cout<<" Jadi, keliling segitiga \t: "<<keliling;
			break;
			
		case 4:
			menu = '4';
			cout<<" Apakah anda ingin keluar dari program ? [Y/N] : ";cin>>yn;
			
			if(yn=='Y'||yn=='y'){
				exit(0);
			} else if (yn=='N'||yn=='n'){
				cout<<"kembali ke menu utama";
			} else{
				cout<<"pilihan tidak ada";
			}
			
	}
	
	cout<<"\n\n";
	cout<<" ************ TERIMA KASIH *************\n";
	cout<<"----------------------------------------\n";
	

}
