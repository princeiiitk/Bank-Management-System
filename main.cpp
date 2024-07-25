#include "include/Account.h"
#include "include/balanceEnquiry.h"
#include "include/cashDeposite.h"
#include "include/withdral.h"
#include "include/ApplyLoan.h"
#include "include/ApplyCreaditCard.h"
#include "include/ApplyInsurence.h"
#include "include/ApplyATM.h"
#include "include/GenralEnquery.h"
#include "include/Complient.h"

#include<bits/stdc++.h>
#include <string>

int main() {
  cout<<"----------------------------------------------------------------"<<endl;
  cout<<"WELCOME TO YOURBANK.COM , SAVING FOR BETTER TOMMOROW"<<endl;
  cout<<"----------------------------------------------------------------"<<endl;
  int flag=0;
  while(flag==0){
 
    cout<<"Enter 1 for open Account"<<endl;
    cout<<"Enter 2 for balance Enquiry"<<endl;
    cout<<"Enter 3 for cash Deposit"<<endl;
    cout<<"Enter 4 for cash withdral"<<endl;
    cout<<"Enter 5 for Apply Loan"<<endl;
    cout<<"Enter 6 for apply credit card"<<endl;
    cout<<"Enter 7 for apply Insurence"<<endl;
    cout<<"Enter 8 for Apply ATM card"<<endl;
    cout<<"Enter 9 for General Enquiry"<<endl;
    cout<<"Enter 10 for complient"<<endl;
    cout<<"Enter 11 for Closing Account "<<endl;
    int n;
    cin>>n;
    if(n==1){
        cout<<"Enter 1 for saving account"<<endl;
        cout<<"Enter 2 for current account"<<endl;
        int n;
        cin>>n;
        if(n==1){
          Account account;
          account.SavingAccount();
          cout<<"You want to any service use then click 1 if not then 0"<<endl;
          int n;
          cin>>n;
          if(n==0){
          flag=1;
          }
          else if(n==1){
          flag=0;
         }
         
        }
        if(n==2){
          Account account;
          account.CurrentAccount();
          cout<<"You want to any service use then click 1 if not then 0"<<endl;
          int n;
          cin>>n;
          if(n==0){
          flag=1;
          }
          else if(n==1){
          flag=0;
         }
         
        }
       

    }
    if(n==2){
         cout<<"Enter your ID"<<endl;
         int id;
         cin>>id;
         Balance b;
         b.balanceEnq(id);
         cout<<"You want to any service use then click 1 if not then 0"<<endl;
          int n;
          cin>>n;
          if(n==0){
          flag=1;
          }
          else if(n==1){
          flag=0;
         }
        

    }
    if(n==3){
      cout<<"Enter your ID"<<endl;
      int id;
      cin>>id;
             Balance b;
           
      bool a=b.searchbyID(id);
      if(a){
        cout<<"Enter deposit Amount"<<endl;
        int amount;
        cin>>amount;
        string currentamount=b.cash;
        
       cashDeposite D;
       D.updatecurrentbalance(amount,id,currentamount);
      }
      if(!a){
            cout<<"incorrect id"<<endl;
           }
       cout<<"You want to any service use then click 1 if not then 0"<<endl;
          int n;
          cin>>n;
          if(n==0){
          flag=1;
          }
          else if(n==1){
          flag=0;
         }
         
      
    
    }
    if(n==4){
       Balance b;
       cashWithdraw W;
       int amount,id;
       cout<<"Enter your Id"<<endl;
       cin>>id;
      bool a=b.searchbyID(id);
      
           if(a){
             
              cout<<"enter withrawal amount"<<endl;
              cin>>amount;
              string currentcash=b.cash;
              
              W.cashwithdral(amount,id,currentcash);
           }
           if(!a){
            cout<<"incorrect id"<<endl;
           }
        
         cout<<"You want to any service use then click 1 if not then 0"<<endl;
         int n;
         cin>>n;
         if(n==0){
          flag=1;
         }
         else if(n==1){
          flag=0;
         }
      

    }
    if(n==5){
       cout<<"your account in this bank if yes then press 1 ,if not then press 2"<<endl;
         int n;
         cin>>n;
        if(n==1){
           Balance b;
           cout<<"enter your id "<<endl;
           int id;
           cin>>id;
           bool a=b.searchbyID(id);
           if(a){
                  Loan L;
                 L.sention(id);
           }
            if(!a){
            cout<<"incorrect id"<<endl;
           }
           }
          if(n==2){
               cout<<"Enter 1 for saving account"<<endl;
               cout<<"Enter 2 for current account"<<endl;
              int n;
              cin>>n;
              if(n==1){
              Account account;
             account.SavingAccount();
              }
             if(n==2){
             Account account;
             account.CurrentAccount();
            }
           }
         
         cout<<"You want to any service use then click 1 if not then 0"<<endl;
         int n1;
         cin>>n1;
         if(n1==0){
          flag=1;
         }
         else if(n1==1){
          flag=0;
         }

    }
    if(n==6){
      ApplyCreadit C;
      Balance b;
      cout<<"Enter your ID "<<endl;
  
          
           int id;
           cin>>id;
           bool a=b.searchbyID(id);
           if(a){
               C.CreaditCard(id);
           }
           if(!a){
            cout<<"enter id is wrong"<<endl;
           }
  
           cout<<"You want to any service use then click 1 if not then 0"<<endl;
         int n;
         cin>>n;
         if(n==0){
          flag=1;
         }
         else if(n==1){
          flag=0;
         }

    }
    if(n==7){
      cout<<"your accout must present in this bank if not then create account"<<endl;
         ApplyInsurence I;
          Balance b;
          cout<<"enter your ID"<<endl;
          int id;
           cin>>id;
           bool a=b.searchbyID(id);
           if(a){
                I.Insurence(id);
           }
           if(!a){
            cout<<"incorrect id"<<endl;
           }
 
        cout<<"You want to any service use then click 1 if not then 0"<<endl;
         int n;
         cin>>n;
         if(n==0){
          flag=1;
         }
         else if(n==1){
          flag=0;
         }

    }
    if(n==8){
        cout<<"your accout must present in this bank"<<endl;
           Balance b;
           cout<<"enter your id "<<endl;
           int id;
           cin>>id;
           bool a=b.searchbyID(id);
           if(a){
            ATMcard A;
            A.applyATM(id);
           }
           if(!a){
            cout<<"incorrect id"<<endl;
           }
        cout<<"You want to any service use then click 1 if not then 0"<<endl;
         int n;
         cin>>n;
         if(n==0){
          flag=1;
         }
         else if(n==1){
          flag=0;
         }
    }
    if(n==9){
       GenralEnquery E;
     E.Enquery();
     cout<<"You want to any service use then click 1 if not then 0"<<endl;
         int n;
         cin>>n;
         if(n==0){
          flag=1;
         }
         else if(n==1){
          flag=0;
         }

    }
    if(n==10){
      Complient C;
      C.issue();
     cout<<"You want to any service use then click 1 if not then 0"<<endl;
         int n;
         cin>>n;
         if(n==0){
          flag=1;
         }
         else if(n==1){
          flag=0;
         }

    }
    if(n==11){
        Balance b;
          cout<<"enter your ID"<<endl;
            int id;
           cin>>id;
           bool a=b.searchbyID(id);
           if(a){
                  cout<<"your account is closed succussfully"<<endl;
           }
           if(!a){
            cout<<"enter id is wrong"<<endl;
           }
         cout<<"You want to any service use then click 1 if not then 0"<<endl;
         int n;
         cin>>n;
         if(n==0){
          flag=1;
         }
         else if(n==1){
          flag=0;
         }
    }
   
   
    }
          

return 0;
    }



   

    


