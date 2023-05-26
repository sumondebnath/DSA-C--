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
{
    char name1[20] = "Sumon Debnath";
    Person sumon(26, 5.5, name1);
    char name2[20] = "Rohim Korim";
    Person ro_ko(25, 5.4, name2);

    if(ro_ko.age > sumon.age) {
        cout<<ro_ko.name<<endl;
    }
    else {
        cout<<sumon.name<<endl;
    }

   return 0;
}
