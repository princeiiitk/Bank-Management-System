class ApplyInsurence{
    public:
    void Insurence(int id){
         ofstream fout;
        fout.open("insurence.txt",ios::app);
        if(!fout.is_open()){
            cout<<"unable to open"<<endl;
        }
       
       
        cout<<"click 1 for health insurence"<<endl;
        cout<<"click 2 for life insurence"<<endl;
        cout<<"click 3 for car insurence"<<endl;
        cout<<"click 4 for home insurence"<<endl;
        cout<<"click 5 for electric gadet insurence"<<endl;
        int n;
        cin>>n;
        if(n==1){
              fout<<"ID: "<<id<<endl;
              fout<<"health insurence: "<<5000000<<endl;
              cout<<"health insurence is successfully confirm of 5000000"<<endl;
              fout<<"-----------------------------------"<<endl;

        }
        if(n==2){
              fout<<"ID: "<<id<<endl;
              fout<<"life insurence: "<<60000000<<endl;
               cout<<"health insurence is successfully confirm of 60000000"<<endl;
               fout<<"-----------------------------------"<<endl;
        }
         if(n==3){
              fout<<"ID: "<<id<<endl;
              fout<<"car insurence: "<<800000<<endl;
               cout<<"health insurence is successfully confirm of 800000"<<endl;
            fout<<"-----------------------------------"<<endl;
        }
         if(n==4){
              fout<<"ID: "<<id<<endl;
              fout<<"home insurence: "<<400000<<endl;
               cout<<"health insurence is successfully confirm of 400000"<<endl;
               fout<<"-----------------------------------"<<endl;
        }
         if(n==3){
              fout<<"ID: "<<id<<endl;
              fout<<"electric gadet insurence: "<<200000<<endl;
               cout<<"health insurence is successfully confirm of 200000"<<endl;
               fout<<"-----------------------------------"<<endl;
        }
    }
};
