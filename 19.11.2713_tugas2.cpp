#include <iostream>

using namespace std;

int main()
{

    int j_nama,a,tanda=-1;
    string cari, arr[50];
    cout<<endl;
    cout<<"Masukkan jumlah nama : "<<endl;
    cin>>j_nama;
    cout<<"======================"<<endl;
    for(a=0; a<j_nama;a++) {
        cout<<a+1<<". "<<arr[a];
        cin>>arr[a];
    }
    cout<<"======================"<<endl;
    cout<<"Masukkan nama yang dicari : "<<endl;
    cin>>cari;
    for(a=0;a<j_nama;a++){
        if(cari==arr[a]){
            tanda=a;
        }

    }

    if(tanda!=-1){
        cout<<"======================"<<endl;
        cout<<"Data Ditemukan"<<endl;
    } else {
        cout<<"======================"<<endl;
        cout<<"Data Tidak Ditemukan"<<endl;
    }
    return 0;
}
