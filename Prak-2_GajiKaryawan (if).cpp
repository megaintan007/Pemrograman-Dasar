/* PROGRAM GAJI KARYAWAN DALAM SATU MINGGU
   MEGA INTAN PRATIWI
   NIM 20051397007
   D IV Manajemen Informatika 2020A */
   
#include <iostream>
using namespace std;
int main(){
	    char nama[40];
    int gaji_pokok[4]={5000,7000,8000,10000},gaji_lembur[1]={4000};
    int jk,jl,gp,lembur,gaji;
    string golongan;

    cout<<"     _____Mega Intan Pratiwi (20051397007)_____"<<endl;
    cout<<"     _____D IV Manajemen Informatika 2020A_____";
    cout<<"\n\n";
    cout<<"-----------------------------------------------------\n";
    cout<<" Program Gaji Karyawan PT. MAJU TERUS PANTANG MUNDUR\n";
    cout<<"-----------------------------------------------------\n";
    cout<<"\n\n";
    cout<<" Input Data Karyawan\n";
    cout<<" Nama Lengkap \t: ";cin.getline(nama,40);
    cout<<" Golongan     \t: ";cin>>golongan;
    if(golongan=="a"|| golongan=="A"){
        cout<<" Jumlah Jam Kerja\t: ";cin>>jk;
        if(jk>48){
            jl=jk-48;
            lembur=jl*gaji_lembur[0];
            gp=jk*gaji_pokok[0];
            gaji=gp+lembur;
            cout<<"\n---------------------------------------------";
            cout<<"\n| Slip Gaji PT. MAJU TERUS PANTANG MUNDUR    |\n";
            cout<<"-----------------------------------------------\n";
            cout<<"\n Nama Karyawan \t: ";cout<<nama;
            cout<<"\n Gaji Pokok    \t: Rp";cout<<gp;
            cout<<"\n Gaji Lembur   \t: Rp";cout<<lembur;
            cout<<"\n--------------------------------------------\n";
            cout<<"\n| Jumlah Gaji  \t: Rp";cout<<gaji<<"        |";
            cout<<"\n--------------------------------------------\n";
           
        }else{
            gp=jk*gaji_pokok[0];
            cout<<"\n-----------------------------------------------";
            cout<<"\n| Slip Gaji PT. MAJU TERUS PANTANG MUNDUR    |\n";
            cout<<"------------------------------------------------\n";
            cout<<"\n Nama Karyawan \t: ";cout<<nama;
            cout<<"\n Gaji Pokok    \t: Rp";cout<<gp;
            cout<<"\n Gaji Lembur   \t: Rp0";
            cout<<"\n---------------------------------------------\n";
            cout<<"\n| Jumlah Gaji    \t: Rp";cout<<gp<<"         |";
            cout<<"\n---------------------------------------------\n";
           
        }
    }if(golongan=="b"|| golongan=="B"){
        cout<<" Jumlah Jam Kerja\t: ";cin>>jk;
        if(jk>48){
            jl=jk-48;
            lembur=jl*gaji_lembur[1];
            gp=jk*gaji_pokok[1];
            gaji=gp+lembur;
            cout<<"\n--------------------------------------------";
            cout<<"\n| Slip Gaji PT. MAJU TERUS PANTANG MUNDUR  |\n";
            cout<<"----------------------------------------------\n";
            cout<<"\n Nama Karyawan \t: ";cout<<nama;
            cout<<"\n Gaji Pokok    \t: Rp";cout<<gp;
            cout<<"\n Gaji Lembur   \t: Rp";cout<<lembur;
            cout<<"\n--------------------------------------------\n";
            cout<<"\n| Jumlah Gaji    \t: Rp";cout<<gaji<<"      |";
            cout<<"\n--------------------------------------------\n";
           
        }else{
            gp=jk*gaji_pokok[1];
            cout<<"\n--------------------------------------------";
            cout<<"\n| Slip Gaji PT. MAJU TERUS PANTANG MUNDUR  |\n";
            cout<<"----------------------------------------------\n";
            cout<<"\n Nama Karyawan \t: ";cout<<nama;
            cout<<"\n Gaji Pokok    \t: Rp";cout<<gp;
            cout<<"\n Gaji Lembur   \t: Rp0";
            cout<<"\n--------------------------------------------\n";
            cout<<"\n| Jumlah Gaji    \t: Rp";cout<<gp<<"        |";
            cout<<"\n--------------------------------------------\n";
        
        }
    }if(golongan=="c"|| golongan=="C"){
        cout<<" Jumlah Jam Kerja\t: ";cin>>jk;
        if(jk>48){
            jl=jk-48;
            lembur=jl*gaji_lembur[2];
            gp=jk*gaji_pokok[2];
            gaji=gp+lembur;
            cout<<"\n--------------------------------------------";
            cout<<"\n| Slip Gaji PT. MAJU TERUS PANTANG MUNDUR  |\n";
            cout<<"----------------------------------------------\n";
            cout<<" Nama Karyawan   \t: ";cout<<nama;
            cout<<"\n Gaji Pokok    \t: Rp";cout<<gp;
            cout<<"\n Gaji Lembur   \t: Rp";cout<<lembur;
            cout<<"\n--------------------------------------------\n";
            cout<<"| Jumlah Gaji    \t: Rp";cout<<gaji<<"         |";
            cout<<"\n--------------------------------------------\n";

        }else{
            gp=jk*gaji_pokok[2];
            cout<<"\n--------------------------------------------";
            cout<<"\n| Slip Gaji PT. MAJU TERUS PANTANG MUNDUR  |\n";
            cout<<"----------------------------------------------\n";
            cout<<"\n Nama Karyawan \t: ";cout<<nama;
            cout<<"\n Gaji Pokok    \t: Rp";cout<<gp;
            cout<<"\n Gaji Lembur   \t: Rp0";
            cout<<"\n-------------------------------------------\n";
            cout<<"\n| Jumlah Gaji    \t: Rp";cout<<gp<<"       |";
            cout<<"\n-------------------------------------------\n";

        }
    }if(golongan=="d"|| golongan=="D"){
        cout<<" Jumlah Jam Kerja\t: ";cin>>jk;
        if(jk>48){
            jl=jk-48;
            lembur=jl*gaji_lembur[3];
            gp=jk*gaji_pokok[3];
            gaji=gp+lembur;
            cout<<"\n--------------------------------------------";
            cout<<"\n| Slip Gaji PT. MAJU TERUS PANTANG MUNDUR  |\n";
            cout<<"----------------------------------------------\n";
            cout<<"\n Nama Karyawan \t: ";cout<<nama;
            cout<<"\n Gaji Pokok    \t: Rp";cout<<gp;
            cout<<"\n Gaji Lembur   \t: Rp";cout<<lembur;
            cout<<"\n--------------------------------------------\n";
            cout<<"| Jumlah Gaji    \t: Rp";cout<<gaji<<"         |";
            cout<<"\n--------------------------------------------\n";
 
        }else{
            gp=jk*gaji_pokok[3];
            cout<<"\n-------------------------------------------";
            cout<<"\n| Slip Gaji PT. MAJU TERUS PANTANG MUNDUR |\n";
            cout<<"---------------------------------------------\n";
            cout<<"\n Nama Karyawan \t: ";cout<<nama;
            cout<<"\n Gaji Pokok    \t: Rp";cout<<gp;
            cout<<"\n Gaji Lembur   \t: Rp0";
            cout<<"\n-------------------------------------------\n";
            cout<<"\n| Jumlah Gaji    \t: Rp";cout<<gp<<"       |";
            cout<<"\n-------------------------------------------\n";

        }
    }
            cout<<"\n\n";
            cout<<"  _______________TERIMA KASIH__________________\n";
            cout<<"  ________TINGKATKAN TERUS SEMANGATMU__________\n";
}
            

