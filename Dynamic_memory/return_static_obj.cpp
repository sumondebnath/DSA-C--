#include<bits/stdc++.h>
using namespace std;

class object{
    public:
        char name[20];
        int number;

    object(int num, char nam[]) {
        number = num;
        strcpy(name, nam);
    }
};
object func() {
    char nam[20] = "the object";
    object me(20, nam);

    return me;
}
int main()
{
    object me = func();

    cout<<me.name<<endl;
    cout<<me.number<<endl;
    
    return 0;
}