#include <iostream>
#include<cstdlib>
#include <fstream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Complient{
    public:
    void issue(){
        ofstream fout;
        fout.open("complient.txt");
        if(!fout.is_open()){
            cout<<"unable to open"<<endl;
        }
        cout<<"click 1 for employee related complient"<<endl;
        cout<<"click 2 for account  related complient"<<endl;
        cout<<"click 3 for loan   related complient"<<endl;
        cout<<"click 4 for insurence related complient"<<endl;
        cout<<"click 5 for creaditCard related complient"<<endl;
        cout<<"click 6 for other problem "<<endl;
        int n;
        cin>>n;
        if(n==1){
             cout<<"employee behaviour related issue then click 1"<<endl;
             cout<<"emplpyee working related issue then click 2"<<endl;
             cout<<"employee timming related issue then click 3"<<endl;
             cout<<"employee management related issue then click 4"<<endl;
             int n;
             cin>>n;
             if(n==1){
                fout<<"employee behaviour related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==2){
                fout<<"employee working related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==3){
                fout<<"employee timming related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==4){
                fout<<"employee management related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             
        }
        


        if(n==2){

            cout<<"account opening related issue then click 1"<<endl;
             cout<<"account closing related issue then click 2"<<endl;
             cout<<"account passbook related issue then click 3"<<endl;
             cout<<"account ID related issue then click 4"<<endl;
             int n;
             cin>>n;
             if(n==1){
                fout<<"account opening related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==2){
                fout<<"account closing related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==3){
                fout<<"account passbook related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==4){
                fout<<"account ID related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }

        }
        if(n==3){
              cout<<"home loan related issue then click 1"<<endl;
             cout<<"education loan related issue then click 2"<<endl;
             cout<<"car loan related issue then click 3"<<endl;
             cout<<"mobile loan related issue then click 4"<<endl;
              cout<<"bussiness loan related issue then click 5"<<endl;
             int n;
             cin>>n;
             if(n==1){
                fout<<"home loan related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==2){
                fout<<"education loan related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==3){
                fout<<"car loan related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==4){
                fout<<"mobile loan related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfull"<<endl;
             }
             if(n==5){
                fout<<"bussiness loan related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfull"<<endl;
             }

         

        }

        


        if(n==4){
              cout<<"health insurence related issue then click 1"<<endl;
             cout<<"life insurence related issue then click 2"<<endl;
             cout<<"car insurence related issue then click 3"<<endl;
             cout<<"home insurence related issue then click 4"<<endl;
              cout<<"electric gadet insurence loan related issue then click 5"<<endl;
             int n;
             cin>>n;
             if(n==1){
                fout<<"health insurence related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==2){
                fout<<"life insurence related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==3){
                fout<<"car insurence related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==4){
                fout<<"home insurence related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==5){
                fout<<"electric gadet insurence related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }

         

        }

        if(n==5){
              cout<<"platinum card related issue then click 1"<<endl;
             cout<<"premimum card related issue then click 2"<<endl;
           
             int n;
             cin>>n;
             if(n==1){
                fout<<"platinum card  related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             if(n==2){
                fout<<"premimum card related issue complient"<<endl;
                fout<<"---------------------------------------------------------"<<endl;
                cout<<"your complient or issue are store succussfully"<<endl;
             }
             

         

        }
        if(n==6){
            string issue1="";
            cout<<"enter your problem"<<endl;
            cin.ignore();
             getline(cin,issue1);
             fout<<issue1<<endl;
             fout<<"---------------------------------"<<endl;
             cout<<"your complient or issue are store succussfully"<<endl;
        }


    }

};
