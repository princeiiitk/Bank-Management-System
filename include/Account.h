#include <iostream>
#include<cstdlib>
#include <fstream>
#include <type_traits>
#include<string>
#include<bits/stdc++.h>
#include <regex>


using namespace std;
class Account{
public:
       int id;
       string FirstName;
       string LastName;
       string Email;
       string AdharNo;
       string PANNo;
       string Address;
       string MobileNo;
       string Date;
       long long Income;
       string Profession;
       string Name_Of_Nomini;
       double cash=0.0;


void CurrentAccount(){
             SavingAccount();};

void SavingAccount(){
            long userID;
            
            int flag1=0;
           
            while(flag1==0){
                userID=rand() ;
                
              bool a=present(userID);
            if(!a){
                flag1=1;
            }
            if(a){
                flag1=0;
            }

            }
            
       
           
          
        cout<<"Enter Your First Name "<<endl;
          string FirstName1;
          cin>>FirstName1;

          cout<<"Enter Your Last Name"<<endl;
          string lastname1;
          cin>>lastname1;

          
           string email1="";
          bool isvalid=0;
          int flag=0;
          while(!isvalid){
           if(flag==0){
                cout<<"Enter Your Email"<<endl;
           }
           if(flag==1){
               cout<<"Try Again"<<endl;
           }
            
             string email;
              cin>>email; 
              isvalid=checkisvalidEmail(email);
              if(!isvalid){
                flag=1;
                cout<<"You Given Invalid Email"<<endl;
              }else{
                email1=email;
                break;
                
              }
          }
          

          
          string adharnumber1;
          int flagAdhar=0;
          bool isvalidAdhar=0;
while(!isvalidAdhar){
            if(flagAdhar==0){
                cout<<"Enter Your Adhar  Number"<<endl;
                flagAdhar=1;
            }
            
            cin>>adharnumber1;

            
            isvalidAdhar=checkadharisvalid(adharnumber1);
            if(flagAdhar==1 && !isvalidAdhar){
                cout<<"Aour Adhar  number Invalid Try Again"<<endl;
            }
            else{
                break;
            }

          }
          
       int flagPAN=0;
          string PAN1;
          bool isvalidPAN=0;
while(!isvalidPAN){
            if(flagPAN==0){
                flagPAN=1;
                cout<<"Enter your PAN Number IN FORMATE OF -QWERT1234Q"<<endl;
            }
            cin>>PAN1;
            isvalidPAN=checkPANnumberisvalid(PAN1);
            if(!isvalidPAN && flagPAN==1){
                cout<<"Given PAN Number Is Invalid Try Again"<<endl;
            }
            else{
                break;
            }
            }

          

          cout<<"Enter Your Address"<<endl;
          string Address1;
          cin.ignore();
          getline(cin, Address1); 
          
          

     int flagmob=0;
     bool isvalidmob=0;
    
    string mobileno1;
while(!isvalidmob){
        if(flagmob==0){
            flagmob=1;
             cout<<"Enter your mobile number"<<endl;
             
        }
        cin>>mobileno1;
        
     
    isvalidmob=checkmobilenumisvalid(mobileno1);
        
       if(isvalidmob && flagmob==1){
            break;
        }
        else if(!isvalidmob && flagmob==1){
            cout<<"Try Again Invalid Mobile Number"<<endl;
        }
        else{
            cout<<"Try Again Invalid Mobile Number"<<endl;
        }
        

     }
     string DOB1="";
          bool isvaliddate=0;
          int flagdate=0;
          while(!isvaliddate){
            if(flagdate==0){
                cout<<"Enter Your DOB formate DDMMYY"<<endl;
                flagdate=1;
            }
            int DD;
          int MM;
          int YY;
          cout<<endl;
          cout<<"Enter Your Date of DOB"<<endl;
          cin>>DD;
          cout<<endl;
           cout<<"Enter Your Month of DOB"<<endl;
           cin>>MM;
           cout<<endl;
            cout<<"Enter your Year of DOB"<<endl;
            cin>>YY;
            isvaliddate=checkisvaliddate(DD,MM,YY);
            if(isvaliddate){
                if(YY<=9){
                       DOB1=to_string(DD)+"/"+to_string(MM)+"/"+"0"+to_string(YY);
                }
                else{
                    DOB1=to_string(DD)+"/"+to_string(MM)+"/"+to_string(YY);
                }
                
            }
             else if(!isvaliddate && flag==1){
                cout<<"DOB is in valid try again"<<endl;
            }
      }
         

          cout<<"Enter Your Income/Month"<<endl;
          long long Income1;
          cin>>Income1;

          cout<<"Enter Your Profession"<<endl;
          string profession1;
          cin.ignore();
          getline(cin, profession1);

          cout<<"Enter Firstname OF Nominee"<<endl;

          string Name_Of_Nomini1;
          cin>>Name_Of_Nomini1;



        id=abs(userID);
        FirstName=FirstName1;
        LastName=lastname1;
        Email=email1;
        AdharNo=adharnumber1;
        PANNo=PAN1;
        Address=Address1;
        MobileNo=mobileno1;
        Date=DOB1;
        Income=Income1;
        Profession=profession1;
        Name_Of_Nomini=Name_Of_Nomini1;
          writeToFile(); 
          passbook();

        };

  



 


bool present(int id){
    fstream fin;
            fin.open("account.txt");
            if(!fin.is_open()){
                cout<<"unable to open"<<endl;
            } 
                string word="";
                while(fin>>word){
                    if(word==to_string(id)){
                        return true;
                    }
                }
                return false;}

        

        
bool checkisvalidEmail(string str){
             int n=str.size();
             map<char,int>mp;
            
            for(int i=0;i<n;i++){
                
                 mp[str[i]]++;;
                if((str[i]>='A' && str[i]<='Z') || str[i]==' ' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]==':' || str[i]==';' 
                || str[i]==']' || str[i]=='[' || str[i]=='(' || str[i]==')' || str[i]=='/' || str[i]=='='
                 || str[i]=='<' || str[i]=='>' || str[i]=='?'){
                    return false;
                }
                if((str[i]=='@' || str[i]=='.') && (i==0 || i==n-1)){
                    return false;
                }
                if(str[i]=='.' && i!=n-1){
                    if(str[i+1]=='.'){
                        return false;
                    }
                }
            }
           
           if(n>=6){
                  for(auto it:mp){
                    if(mp.find('@')!=mp.end() && mp.find('.')!=mp.end()){
                        if((mp['@']==1) && (mp['.']==1 || mp['.']==2)){
                            if(mp['@']==1 && it.second==1){
                                return true;
                            }
                          return true;
                        }
                        else{
                            return false;
                        }
                         
                    }
                    else{
                        return false;
                    }
                  }

           }else{
            return false;
           }
           return true;
        }
bool checkadharisvalid(string adharNo) {
    
    regex pattern("^\\d{12}$");
    
    bool t=regex_match(adharNo, pattern);
    return t;
}
bool checkPANnumberisvalid(string str){
    int n=str.size();
    if(n!=10){
        return false;
    }
    int flag=0;
    for(int i=0;i<5;i++){
        if((str[i])>='A' && (str[i])<='Z'){
            flag=1;
        }
        else{
            return false;
        }
    }
    if(flag==1){
        for(int i=5;i<9;i++){
        if((str[i])>='0' && (str[i])<='9'){
            flag=0;
        }
        else{
            return false;
        }
    }
    }
    
    if((str[9])>='A' && (str[9])<='Z' && flag==0){
        return true;
    }
    return false;}


bool checkmobilenumisvalid(string mobileNo) {
    
    regex pattern("^[789]\\d{9}$"); 
    bool x= regex_match(mobileNo, pattern);
    return x;
}

bool checkisvaliddate(int DD,int MM,int YY){
    if(DD<1 || DD>31){
        return false;
    }
    if(MM<1 || MM>12){
        return false;
    }
    if(YY>24){
        return false;
    }
    return true;}


void writeToFile() {


        ofstream outFile("account.txt",ios::app);
        // cout<<""
        if (outFile.is_open()) {
            outFile << "ID: " << id << endl;
            outFile << "First Name: " << FirstName << endl;
            outFile << "Last Name: " << LastName << endl;
            outFile << "Email: " << Email << endl;
            outFile << "Adhar No: " << AdharNo << endl;
            outFile << "PAN No: " << PANNo << endl;
            outFile << "Address: " << Address << endl;
            outFile << "Mobile No: " << MobileNo << endl;
            outFile << "Date of Birth: " << Date << endl;
            outFile << "Income: " << Income << endl;
            outFile << "Profession: " << Profession << endl;
            outFile << "Name of Nominee: " << Name_Of_Nomini << endl;
            outFile <<"current balance: " << cash << endl;
            outFile << "----------------------------------" << endl;
           
           
            outFile.close();
        } else {
            cout << "Unable to open file." << endl;
        }}
void passbook(){
        cout<<endl;
         cout << "-----------------------------------------------------" << endl;
        cout << "-------------------your passbook----------------------" << endl;
        cout << "------------------------------------------------------" << endl;
            cout <<"ID: " << id << endl;
            cout <<"Name: " << FirstName+" "+LastName << endl;
            cout <<"Address: " << Address << endl;
            cout<<"IFSC Code: "<<"YRBK1234"<<endl;
           cout << "------------------------------------------------------" << endl;
    }
  
    };


