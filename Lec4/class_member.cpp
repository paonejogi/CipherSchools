#include<bits/stdc++.h>
using namespace std;
class dog{
    //PRIVATE
    void bark(){
        cout<<"Woof! Woof!......"<<endl;
    }
    void play(){
        cout<<"Go fetch!"<<endl;
    }
    void sit(){
        cout<<"Sit like a Good boy!.."<<endl;
    }
    //PUBLIC
    public:
    void live(){
        bark();
        play();
        sit();
    }
    // fuction prototype to call outside the class:
    //function signature 
    // void live();
};
// we can declare a function outside the class by
// void dog::live(){
//      bark();
//      play();
//      sit(); }
    
int main()
{
    dog tom;
    tom.live();
    
    return 0;
}