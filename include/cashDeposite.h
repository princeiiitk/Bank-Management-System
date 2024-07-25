#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
class cashDeposite{
    public:
    int lineindex=0;
    int currval=0;
 vector<string>v;
void updatecurrentbalance(int depositecash,int id,string cash){
  
     string currentbalance="";
     int n1=cash.size();
    
  
   for(int i=0;i<n1;i++){
   
    if(cash[i]>='0' && cash[i]<='9'){
      
            currentbalance+=cash[i];
    }
   }

       int n2=currentbalance.size();
          for(int i=0;i<n2;i++){
     currval=currval*10+(currentbalance[i]-'0');
    }

     fstream fin;
     fin.open("account.txt");
     if(!fin.is_open()){
    cout<<"unable to open"<<endl;
      }
     string line="";
     while(getline(fin,line)){
         v.push_back(line);
     }
     long long n=v.size();
     int flag=0;
   
    string str1="ID: " + to_string(id);
    string str2="current balance: " + to_string(currval);

     for(long long i=0;i<n;i++){
       if(v[i]==str1 || flag==1){
       
        flag=1;
        if(v[i]==str2){
            lineindex=i;
            break;
        }
       }
       
     }
     if(lineindex==0){
        cout<<"enter wrong id or technical giltch cash deposit"<<endl;
        return;
     }
  
     v[lineindex]="current balance: " + to_string(depositecash+currval);
     cout<<"cash deposite successfully"<<endl;
     cout<<"your Amount is "<<v[lineindex]<<endl;
     updatefilewrite();

     
     fin.close();

  }
void  updatefilewrite(){
    ofstream fout;
    fout.open("account.txt",ios::out);
    if(!fout.is_open()){
        cout<<"unable to open"<<endl;
    }
    int s=v.size();
    for(long long i=0;i<s;i++){
        fout<<v[i]<<endl;
    }
    fout.close();
  }


   

   

};