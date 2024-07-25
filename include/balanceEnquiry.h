
#include<iostream>

#include<fstream>

using namespace std;

class Balance{
public:
string cash="";
void balanceEnq(int id){
          if(searchbyID(id)){
           cout<<cash<<endl;
          } 
          else{
          cout<<"incorrect Customer ID"<<endl;
          }
}
bool searchbyID(int a){
    int flag=0;
    fstream fin;
    fin.open("account.txt");
    if(fin.is_open()){
   string word="";
         int x=0;
      while (fin>>word){
    
            if(word==to_string(a) || flag==1){
                flag=1;
                if(word=="current" || x==1){
                    x=1;
                    if(word=="----------------------------------"){
                    return true;
                }
                   cash=cash+" "+word;
                }
               }
             }
        fin.close(); 
    }
   

 
 else{
    cout<<"unable to open"<<endl;
    return false;
 }
 if(flag==1){
    return true;
 }
return false;
}


};

