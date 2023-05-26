#include<bits/stdc++.h>
using namespace std;

class Person {
   public:
        int age;
        char name[10];
        float height;

    Person(int ag, float hei, char n[]) {
        age = ag;
        height = hei;
        strcpy(name, n);
    }
};

int main()
{   // using user define
    cout<<"Enter Name"<<endl;
    char nam[20];
    cin.getline(nam, 20);
    cout<<"Enter Age"<<endl;
    int aga;
    cin>>aga;
    cout<<"Enter Height"<<endl;
    float heigh;
    cin>>heigh;
    Person *sumon = new Person(aga, heigh, nam);

    cout<<"Output."<<endl;
    cout<<sumon->name<<endl;
    cout<<sumon->age<<endl;
    cout<<fixed<<setprecision(1)<<sumon->height<<endl;

   return 0;
}
