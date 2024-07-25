class ApplyCreadit{
    public:
    void CreaditCard(int id){
          ofstream fout;
        fout.open("creaditcard.txt",ios::app);
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
        int flag=0;
        int f=0;
        while(fin>>word){
            if(word==to_string(id) || f==1){
                f=1;
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
       int p=incomevalstr.size();
        for(int i=0;i<p;i++){
            incomeval=incomeval*10+(incomevalstr[i]-'0');
        }
        

        cout<<"if apply for platinum card then click 1"<<endl;
        cout<<"if apply for premimum card then click 2"<<endl;
        int n;
        cin>>n;
        if(n==1){
           if(incomeval>=10000){
            fout<<"ID: "<<id<<endl;
            fout<<"creadit card limit: 62000"<<endl;
            fout<<"-----------------------"<<endl;
            fout.close();
            cout<<"Your are Eligiable for creadit card of limmit 62000 "<<endl;
        }
        else{
            cout<<"Your are not Eligiable for creadit card becouse of low income "<<endl;
        }
        }
        if(n==2){
            if(incomeval>=100000){
            fout<<"ID: "<<id<<endl;
            fout<<"creadit card limit: 200000"<<endl;
            fout<<"-----------------------"<<endl;
            fout.close();
            cout<<"your are Eligiable for premimum creadit card of limmit 200000"<<endl;
        }
        else{
                cout<<"your are not Eligiable for creadit card becouse of low income "<<endl;
        }
        }
         
    }

};