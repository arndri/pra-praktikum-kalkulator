#include<iostream>
#include<math.h>
#include"operasi.h"

using namespace std;
int main(){
 
  int ob, x, y;
  char n;
  cout<<"\t\tKalkulator"<<endl;
  cout<<"========================================="<<endl;
  cout<<"Operasi Bilangan"<<endl;
  cout<<"1.Penjumlahan"<<endl;
  cout<<"2.Pengurangan"<<endl;
  cout<<"3.Perkalian"<<endl;
  cout<<"4.Pembagian"<<endl;
  cout<<"5.Pangkat"<<endl;
  cout<<"6.Akar Kuadrat"<<endl;
  cout<<"========================================="<<endl;

  do{
    cout<<endl;
    cout<<"Masukkan Jenis Operasi Bilangan\t: ";cin>>ob;
    
if(ob<=5){
  cout<<"Masukkan Angka Pertama\t\t: ";cin>>x;
  cout<<"Masukkan Angka Kedua\t\t: ";cin>>y;
}
else{
  cout<<"Masukkan Angka Pertama :";cin>>x;
}

switch (ob) {
  case 1:
  cout<<"Hasil Penjumlahan "<<x<<" dengan "<<y<<" adalah "<<tambah(x,y);
  break;

  case 2:
  cout<<"Hasil Pengurangan "<<x<<" dengan "<<y<<" adalah "<<kurang(x,y);
  break;

  case 3:
  cout<<"Hasil Perkalian "<<x<<" dengan "<<y<<" adalah "<<kali(x,y);
  break;

  case 4:
  cout<<"Hasil Pembagian "<<x<<" dengan "<<y<<" adalah "<<bagi(x,y);
  break;

  case 5:
  cout<<"Hasil "<<x<<" pangkat "<<y<<" adalah\t "<<pow(x,y);
  break;

  case 6:
  cout<<"Hasil Akar Pangkat Dua dari "<<x<<" adalah "<<sqrt(x);
  break;

  default:
  cout<<"Kesalahan Input";
  break;
}
cout<<endl;
cout<<endl;
cout<<"Menghitung lagi ?(Y=Ya/T=Tidak) ";cin>>n;
}
while (n=='Y'||n=='y');
return 0;
}
