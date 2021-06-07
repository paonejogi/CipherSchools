#include<iostream>
using namespace std;
// Function Addition

int addition(int a,int b){
return a+b;
}
// Function Subtraction
int subtraction(int a,int b)
{
    return a-b;
}
// Main function
int main()
{
    bool is_condition = true;
    while (is_condition)
    {
          int a,b;
    int res;
    cout<<"Entre the Two numbers:";
    cin>>a>>b;
    int sum = addition(a,b);
    int sub = subtraction(a,b);
    cout<<"select your option \n";
    cout<<"1. Sum option \n";
    cout<<"2. Sub option \n";
     cout<<"3. power option \n";
    cout<<"4.Exit \n";
    cout<<"your Responce ";
    cin>>res;
    switch (res)
    {
    case 1:
      cout<<"Sum of two numbers: "<<sum<<"\n"; 
        break;
    case 2:
      cout<<"Sub of two numbers: "<<sub<<"\n";
      break;
    case 3:
      cout<<"A^b"<< pow(a,b)<<endl
      break;

    case 4:
      is_condition=false;
      break;  
    }
 /*   if(res==1)
    {
        cout<<"Sum of two numbers: "<<sum<<"\n"; 
    }
    else if(res==2){
        cout<<"Sub of two numbers: "<<sub<<"\n";
    }
    else if(res==3){
        break;
    }
    */
    }
    cout<<"Thanks for using my calculator";
    return 0;
}