#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int total=0;
    char kalimat[50],kata;
    cout<<endl;
    cout<<"Masukkan Kalimat : "<<endl;
    gets(kalimat);

    int a=strlen(kalimat);
    cout<<endl;
    cout<<"Masukkan kata yang ingin anda cari : "<<endl;
    cin>>kata;
    cout<<endl;

    for(int i=0;i<a;i++){
        if(kalimat[i]==kata){
            cout<<"Karakter "<<kata<<" ditemukan pada urutan ke-"<<i+1<<endl;
            total+=1;
        }
    }
    cout<<endl;
    if(total!=0){
        cout<<"Karakter "<<kata<<" berjumlah "<<total<<endl;
    }
    else{
        cout<<"Karakter tidak ditemukan!!!"<<endl;
    }
    getch();
}
