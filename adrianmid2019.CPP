#include <iostream.h>
#include <conio.h>

main()
{
	int A, B, C, D, E, TONT, TOT, NM, NF, NA;
   char Nama [20],NiM [10],Kriteria;
   cout << "Nama Mahasiswa = "; cin >>Nama;
   cout << "Nim            = "; cin >>NiM;
   cout << "Nilai Tugas 1  = "; cin >>A;
   cout << "Nilai Tugas 2  = "; cin >>B;
   cout << "Nilai Tugas 3  = "; cin >>C;
   cout << "Nilai Mid = "; cin >>D;
   cout << "Nilai Final = "; cin >>E;
   TONT = (A+B+C)/3;
   TOT =TONT*20/100;
   NM = D*40/100;
   NF = E*40/100;
   NA = TOT+NM+NF;
   cout << "\n Nama mahasiswa = "<<Nama;
   cout << "\n Nim = "<<NiM;
   cout << "\n Nilai Akhir = "<<NA;
   cout << "\n Dengan Kriteria = "<<Kriteria;
   	if(NA >= 80 ){
      	cout <<"a";
      } else if (NA >= 70 ){
      	cout <<"b";
      } else if (NA >= 60 ){
      	cout <<"c";
      } else if (NA >= 50 ){
      	cout <<"d";
      } else{
      	cout <<"e";
      }
   getch();
}