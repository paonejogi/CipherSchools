#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    void introduce()
    {
        cout<<"My name is "<<name<<endl;
        cout<<"I'm "<<age<<" years old"<<endl;
    }

};
int main()
{ 
    person p;
    p.name ="Pavankumar";
    p.age =20;
   
    person q;
    q.name ="Ravankumar";
    q.age = 25;
     p.introduce();
     q.introduce();
 return 0;
}