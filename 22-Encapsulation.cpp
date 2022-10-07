//Hiding senstive data from users-->Public,private,Protected
#include<iostream>
using namespace std;
class A{
public:
  int a;
  void funcA(){
    cout<<"Func A\n";
  }
private:
  int b;
  void funcB(){
    cout<<"FuncB \n";
}
protected:
  int c;
  void funcC(){
    cout<<"FuncC \n";
  }
};
int main(){
  A obj;
  obj.funcA();
  //obj.funcB();
  //obj.funcC();
}
