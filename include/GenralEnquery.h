
class GenralEnquery{
public:
void Enquery(){
    ApplyInsurence I;

    cout<<"click 1 for genaral enquery about Account"<<endl;
    cout<<"click 2 for genaral enquery about insurence"<<endl;
    cout<<"click 3 for genaral enquery about loan"<<endl;
    cout<<"click 4 for genaral enquery about Creadit Card"<<endl;
    cout<<"click 5 for genaral enquery about cashwithdral"<<endl;
    int n;
    cin>>n;
    if(n==1){
        cout<<"there are two type of Account in this bank saving account and current account"<<endl;
        int n;
        cout<<"click 1 for open saving account"<<endl;
        cout<<"click 2 for open current account"<<endl;
         Account account;
        cin>>n;
        if(n==1){
         account.SavingAccount();
        }
        if(n==2){
            account.CurrentAccount();
        }
        
    }
    if(n==2){
        cout<<"there are 5 type of Insurence"<<endl;
        cout<<"1.health insurence of 5500000 "<<endl;
        cout<<"2.life insurence of 5500000 "<<endl;
        cout<<"3.car insurence insurence of 5600000"<<endl;
        cout<<"4.home insurence of 600000 "<<endl;
        cout<<"5.electric gadet insurence of 700000 "<<endl;
        cout<<"if interested then click 1"<<endl;
        int n;
        cin>>n;
        if(n==1){
             cout<<"if already have account in ths bank then click 2 if not then click 3"<<endl;
             int n;
             cin>>n;
             if(n==2){
                cout<<"enter your id"<<endl;
                int id;
                cin>>id;
                I.Insurence(id);
             }
             if(n==3){
                 
        cout<<"click 1 for open saving account"<<endl;
        cout<<"click 2 for open current account"<<endl;
        int n;
         Account account;
        cin>>n;
        if(n==1){
         account.SavingAccount();
        }
        if(n==2){
            account.CurrentAccount();
        }
             }

           
        }
    }
    if(n==3){
        cout<<"there are 5 type of loan"<<endl;
        cout<<"1.home loan up to 2000000 but income should be 50000/month IF INTERESTED THEN PRESSIF INTERESTED THEN PRESS 1"<<endl;
        cout<<"2.education loan up to 1000000 but income should be 0/month IF INTERESTED THEN PRESS 1"<<endl;
        cout<<"3.car loan up to 500000 but income should be 5000/month IF INTERESTED THEN PRESS 1"<<endl;
        cout<<"4. mobile loan up to 50000 but income should be 500/month IF INTERESTED THEN PRESS"<<endl;
        cout<<"5. bussiness loan up to 500000000 but income should be 500000/month IF INTERESTED THEN PRESS 1"<<endl;
        int n;
        cin>>n;
        if(n==1){
            cout<<"already have account in yourbank.com then press 2 if not then press 3"<<endl;
            
            int n;
        cin>>n;
        if(n==3){
            int n;
            cout<<"click 1 for saving account"<<endl;
            cout<<"click 2 for saving account"<<endl;
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
        if(n==2){
            cout<<"enter your id"<<endl;
            int id;
            cin>>id;
            Balance b;
            bool a=b.searchbyID(id);
           if(a){
               Loan L;
           L.sention(id);
           }
          
        }
        
        }

    }



    if(n==4){
        cout<<"we are offer 2 type of credit card"<<endl;
        cout<<"1. platinum card of card limit is 62000 if interest then click 1 for apply"<<endl;
        cout<<"2. premimum card of card limit is 200000 if interest then click 1 for apply"<<endl;
        int n;
        cin>>n;
        if(n==1){
            cout<<"alread have account then click 1 if not then create account first for click 2"<<endl;
            int n;
            cin>>n;
            if(n==1){
              cout<<"enter your id"<<endl;
              int id;
              cin>>id;
              ApplyCreadit C;
              C.CreaditCard(id);

            }
            if(n==2){
                 int n;
            cout<<"click 1 for saving account"<<endl;
            cout<<"click 2 for saving account"<<endl;
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
  
        }
        
    }
    
}


};
