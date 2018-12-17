#include<iostream>
using namespace std;

int main (){
int a,b,hasil;

cout<<"PROGRAM VALIDASI PEMBAGIAN TIDAK DENGAN NOL"<<endl;
cout<<"Masukan Bilangan yang akan di bagi : ";
cin>>a;
cout<<"Masukan Bilangan Pembagi           : ";
cin>>b;
if(b==0)
{
cout<<"Bilangan pembagian tidak boleh dibagi Nol"<<endl;
}
else{
hasil=a/b;
cout<<"Hasil Adalah : "<<a/b<<endl;}
return 0;

}
