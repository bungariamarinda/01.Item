#include <iostream>
#include <string>

using namespace std;

int main()
{
    //variabel
    string item="";
    string item_sblm = "";
    string item_terhebat="";
    string item_terlemah="";    `
    int stat_terhebat=0;
    int stat_terlemah=100000;
    int stat=0;
    char ulang ='y';
    bool item_pertama = true; //boolean
    while (ulang == 'y')    //pengulangan

{


        cout << "Masukan nama item :";  //output masukan nama item
        cin>> item;                     //input item
        cout << "Masukan Stat : ";      //output masukan stat
        cin>>stat;                      //input stat

        cout << "Tampilkan item : "<< item<<endl;   //output tampilkan item

        cout << "Stat : "<< stat<<endl;     //output stat

        //loop
        if(item_pertama     //jiika item kosong
                item_sblm = "Nothing";
                item_pertama = false;
            }
            cout << "Item Sebelumnya :  "<<item_sblm << endl;   //tampilkan item sebelumnya
            item_sblm = item;

        if (stat > stat_terhebat) {
             item_terhebat = item;
            stat_terhebat = stat ;

        }
        cout << "Item Terhebat : "<< item_terhebat <<endl;  //tampilkan item terhebat
         if (stat < stat_terlemah)
            {
            item_terlemah = item;
            stat_terlemah = stat;

        }
        cout << "Item Terlemah : "<<item_terlemah <<endl;   //tampilkan item terlemah
       cout << "\nUlang lagi? (y/n)";
        cin >> ulang;
} //end loop
    return 0;
}
