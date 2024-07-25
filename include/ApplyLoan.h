#include<iostream>
using namespace std;

class Loan{
    public:


    int a=0;
    public:
    void sention(int id){
        cout<<"click 1 for home loan ,but your income/month greater than 100000"<<endl;
        cout<<"click 2 for education loan,but your income/month greater than 10000"<<endl;
        cout<<"click 3 for car loan ,but your income/month greater than 50000 "<<endl;
        cout<<"click 4 for mobile loan ,but your income/month greater than 10000"<<endl;
        cout<<"click 5 for bussiness loan ,but your income/month greater than 100000"<<endl;
        int n;
        cin>>n;
        ofstream fout;
        fout.open("loan.txt",ios::app);
        if(!fout.is_open()){
            cout<<"unable to open"<<endl;
        }
        fstream fin;
        fin.open("account.txt",ios::in | ios::app);
        if(!fin.is_open()){
             cout<<"unable to open"<<endl;
        }
       
        string word="";
        string incomevalstr="";
        int incomeval;
        int flagloan=0;
        int flag=0;
        while(fin>>word){
            if(word==to_string(id) || flagloan==1){
                flagloan=1;
                if(word=="Income:"){
                flag=1;
                 }
                else if(flag==1){
                incomevalstr=word;
                break;
                }
            }
           
        }
        
       fin.close();
       int s=incomevalstr.size();
    
        for(int i=0;i<s;i++){
            incomeval=incomeval*10+(incomevalstr[i]-'0');
        }
        
         
        if(n==1){
            if(incomeval>=100000){
            fout<<"ID: "<<id<<endl;
            fout<<"Income: "<<incomeval<<endl;
            fout<<"home Loan: "<<2000000<<endl;
           fout<<"-----------------------"<<endl;
            fout.close();
            cout<<" home loan is sention succussfully 2000000"<<endl;
        }
        else{
            cout<<"your are not eligible becouse of low income"<<endl;
        }
       
        }
        if(n==2){
            if(incomeval>=10000){
            fout<<"ID: "<<id<<endl;
            fout<<"Income: "<<incomeval<<endl;
            fout<<"education loan: "<<100000<<endl;
           fout<<"-----------------------"<<endl;
            fout.close();
            cout<<"education loan is sention succussfully 100000"<<endl;
        }
         else{
            cout<<"your are not eligible becouse of low income"<<endl;
        }
       
        }
        

        if(n==3){
            if(incomeval>=50000){
            fout<<"ID: "<<id<<endl;
            fout<<"Income: "<<incomeval<<endl;
            fout<<"car loan: "<<500000<<endl;
           fout<<"-----------------------"<<endl;
            fout.close();
            cout<<"car loan is sention succussfully 500000"<<endl;
        }
         else{
            cout<<"your are not eligible becouse of low income"<<endl;
        }
       
        }

        if(n==4){
            if(incomeval>=10000){
            fout<<"ID: "<<id<<endl;
            fout<<"Income: "<<incomeval<<endl;
            fout<<"mobile loan: "<<20000<<endl;
           fout<<"-----------------------"<<endl;
            fout.close();
            cout<<"mobile loan is sention succussfully 20000"<<endl;
        }
         else{
            cout<<"your are not eligible becouse of low income"<<endl;
        }
       
        }
    if(n==5){
            if(incomeval>=100000){
            fout<<"ID: "<<id<<endl;
            fout<<"Income: "<<incomeval<<endl;
            fout<<"bussiness loan: "<<10000000<<endl;
           fout<<"-----------------------"<<endl;
            fout.close();
            cout<<"bussiness loan is sention succussfully 10000000"<<endl;
        }
         else{
            cout<<"your are not eligible becouse of low income"<<endl;
        }
       
        }
   
        
        
        
        
        
       

    }
};
