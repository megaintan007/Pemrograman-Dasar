/* PROGRAM MEMBUAT TABEL PERKALIAN
   NAMA		: MEGA INTAN PRATIWI
   NIM		: 20051397007
   PRODI	: D-4 MANAJEMEN INFORMATIKA 2020A*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    cout<<"\n";
    cout<< "                       TABEL PERKALIAN                   \n\n\n";
    cout <<"______________________________________________________________";
    for(int o=1; o<=10; o++)
    {
     cout <<"\n |";
     for (int u=1; u<=10; u++)
     cout << setw(3)<< o*u << setw(3) << "|";
    cout<<"\n______________________________________________________________";
     }
     cout << "\n";
     return 0;
       
    }
