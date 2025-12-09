#include<iostream>
using namespace std;

class BankDeposit{
  int principal;
  int months;
  float interestrate;
  float returnvalue;

  public:
    BankDeposit(){}
    BankDeposit(int p, int m, float r); // r can be a value like 0.04   
    BankDeposit(int p, int m, int r); // r can be a value like 14   
      void show();
};
    BankDeposit :: BankDeposit(int p, int m, float r)
    {
        principal = p;
        months = m;
        interestrate = r;
        returnvalue = p;
    
        for (int i = 0; i < m; i++)
        {
            returnvalue = returnvalue *(1+interestrate);
        }
    }

    BankDeposit :: BankDeposit(int p, int m, int r)
    {
        principal = p;
        months = m;
        interestrate =float(r)/100;
        returnvalue = p;
    
        for (int i = 0; i < m; i++)
        {
            returnvalue = returnvalue *(1+interestrate);
        }
    }
     void BankDeposit :: show(){

        cout<<endl<< "principal amount was " << principal
                  << " Return value after " <<months<<"months"
                  << " is " << returnvalue <<endl; 
     }

int main(){
    BankDeposit bd1, bd2;
    int p, m;
    float r;
    int R;
    
    
    cout<<"Enter the value1 of p m and r"<<endl;
    cin>>p>>m>>r;
    bd1 = BankDeposit(p, m, r);
    bd1.show();

    cout<<"Enter the value2 of p m and R"<<endl;
    cin>>p>>m>>R;
    bd2 = BankDeposit(p, m, R);
    bd2.show();

    return 0;
}