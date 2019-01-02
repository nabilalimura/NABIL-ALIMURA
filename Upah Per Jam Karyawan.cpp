#include<iostream>
using namespace std;
int main (){
int gaji,masuk,keluar,nik;

cout<<"=======================DATA PEMBAYARAN GAJI======================"<<endl;
cout<<"===================PT PELITA TEKNIK INDO MAJU JAYA==============="<<endl;
cout<<"================================================================="<<endl;
cout<<endl;
cout<<"Silahkan Masukkan NIK = ";
cin>>nik;
cout<<"Silahkan Masukkan Jam Masuk = ";
cin>>masuk;
cout<<"Silahkan Masukkan Jam Keluar = ";
cin>>keluar;
//GAJI
gaji=(keluar-masuk)*5000;

cout<<"Gaji Yang Harus Dibayarkan Adalah Sebesar = Rp "<<gaji<<endl;

return 0;
}
