                                 //stuct//
 #include<iostream>
   using namespace std;
    struct Employee
    {
        int Id;
        char favchar;
        float salary;
    };
   int main(){
    struct Employee Avinash;
    Avinash.Id=04;
    Avinash.favchar='A';
    Avinash.salary=250,000;
    cout<<Avinash.Id<<endl;
    cout<<Avinash.favchar<<endl;
    cout<<Avinash.salary<<endl;
    return 0;
   }
  // If you your program Run then you should be Any one topic comment out//
                                 //union//
   #include<iostream>
   using namespace std;
   union money
{
   
    int rice; //4
    char car; //1
    float pounds; //4
};
   int main(){
    union money m1;
        m1.rice = 34;
        cout<<m1.rice;
    return 0;
   }                                             