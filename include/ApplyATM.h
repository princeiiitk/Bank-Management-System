#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class ATMcard{
    public:
    void applyATM(int id){
        fstream fin;
        fin.open("account.txt");
        if(!fin.is_open()){
            cout<<"Unable to Open"<<endl;

        }
        string str="ID: "+to_string(id);
        string line="";
        
      int flag=0;
       
   
        while(getline(fin,line)){
            if((str==line)){
                flag=1;
                cout<<line<<endl;
            }
            else if(flag==1){
                cout<<line<<endl;
                break;
            }
           
            
        }
       
        cout<<"Your ATM Number is "<<123456789121<<endl;
        cout<<"IFSC code"<<" YRBC1234"<<endl;
        cout<<"Expire date"<<" 01/01/2027"<<endl;
        
    }
};