#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){

 int a,b,n,e;
  float jumlah;
  
 cout<<"      MEGA INTAN PRATIWI    \n";
 cout<<"       NIM 20051397007      \n";
 cout<<"  D IV Manajemen Informatika  \n";
 cout<<"\n";
 cout<<"----------------------------------\n";
 cout<<" Menghitung jumlah n suku pertama\n";
 cout<<"----------------------------------\n";
 cout<<"\n";
 cout <<" Masukan suku pertama         \t= ";
 cin>>a;
 cout<<" Masukkan pangkat suku pertama \t= ";
 cin>>e;
 ;cout <<" Masukan beda suku           \t= ";
 cin >>b;
 cout <<" Masukan suku ke n            \t= ";
 cin >>n;
 cout<<" Barisan = ";
 for(a=1;a<=n;a++){
 	cout<<pow(a,e)<<", ";
 	jumlah=jumlah+pow(a,e);
 }
cout<<"\n";
 cout <<" Jumlah "<<n<<" suku pertama = "<<jumlah<<endl;
 cout<<"         >>Terimakasih<<";
 
 
}
