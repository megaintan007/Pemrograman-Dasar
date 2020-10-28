/* NAMA		: MEGA INTAN PRATIWI
   NIM		: 20051397007
   PRODI	: D-4 MANAJEMEN INFORMATIKA 2020A*/

#include<iostream>
using namespace std;
int main(){
	int nilai,a,b,c;
	cout<<" Masukkan segitiga angka : ";
	cin>>nilai;
	for(int a=1; a<=(nilai*2)-1; a++)
	{
		if (a<=nilai)
		{
			for(int b=1; b<=a; b++)
			cout<<b;
		}
		else
		{
			for(int c=1; c<=nilai*2-a; c++)
			cout<<c;
		}
		cout<<endl;
	}
}
