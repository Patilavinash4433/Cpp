  #include<iostream>
using namespace std;

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;               //4   4  5   
    *a = *b;                    //4   5  5
    *b = temp;                 //4   5  4 
} 
// call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){  //temp a b
    int temp = a;                        //4   4  5   
    a = b;                                //4   5  5
    b = temp;                              //4   5  4 
}
//Any one comment out...
int main(){
    int x =4, y=5;
   cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
   // swap(x, y);
    swapPointer(&x,&y); 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}

// This swapReferenceVar program.....
int main{
  int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y); 
    //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
//web site//
//https://editor.wix.com/html/editor/web/renderer/edit/f7636dc0-300f-4774-93c9-42e4fad902f7?address=Gujarat%26%2344%3B%20India&businessFirstFlow=true&businessName=Om%20Sai%20Electronics&businessTypeName=Electronics%20Retailer&email&flow&industryId=0e72b2a150d4b1ffad033c6a&logo&metaSiteId=d0ff6eff-7e3e-4fb0-ae6a-f1c3eac50afb&phoneNumber&siteGenerationWizard=true&structureId=78ca987ffcc56b3700ad1c4f //