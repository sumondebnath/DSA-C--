#include<bits/stdc++.h>
using namespace std;
void func1();
int main()
{
    int *ptr = new int;
    *ptr = 200000;
    // called by heap memory
    func1();
    cout<<"main value : "<<*ptr<<endl;
    //data delete
    delete ptr;
    cout<<"Delete main: "<<*ptr<<endl;
    return 0;
}
void func1() {
    int *ptr1 = new int;
    // heap memory also store this data but delete function also deleted
    *ptr1 = 100000;
    cout<<"address ptr1 : "<<ptr1<<endl;
    cout<<"ptr1 value : "<<*ptr1<<endl;
    // data delete
    delete ptr1;
    cout<<"Delete ptr : "<<*ptr1<<endl;

}