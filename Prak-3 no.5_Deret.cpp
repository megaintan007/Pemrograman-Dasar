#include <iostream>
#include <conio.h>
using namespace std;
int main(){

   
int a=0, b, c, jumlah=0, i, n;
cout<<"        Nama	: MEGA INTAN PRATIWI"<<endl;
cout<<"         NIM	: 20051397007"<<endl;
cout<<"      D IV Manajemen Informatika 2020A"<<endl;
   cout<<"    -----------------------------------\n";
   cout<<"      MENGHITUNG JUMLAH DERET BILANGAN\n";
   cout<<"    -----------------------------------\n";
   cout<<" Masukkan bilangan pertama  \t: ";
   cin>>a;
   cout<<" Masukkan beda              \t: ";
   cin>>b;
   cout<<" Masukkan jumlah deret ke-n \t: ";
   cin>>n;
   
   cout<<" Deret ke-"<<n<<" : ";
   cout<<a<<",";
   jumlah=jumlah+a;
   for(i=0; i<n-1; i++){
   	c=a+b;
   	a=c
   	;cout<<c<<",";
   	jumlah=jumlah+c;

   }
   
   cout<<"\n Jumlah deret ke-"<<n<<" : ";
   cout<<jumlah;
	getch();
}
