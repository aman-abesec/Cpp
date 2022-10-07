// class student{
//   string name;//attribute|
//   int age;//attribute    |Datamember
//   bool gender;//attribute|
// }
//
// student a//instance//object

#include<iostream>
using namespace std;
class student{
  public:
  string name;
  int age;
  bool gender;

  student(string s,int a,bool g){//Constructor
    name=s;
    age=a;
    gender=g;
  }
  void setname(string s){
    name=s;
  }

  void getname(){
    cout<<name;
  }

  void printinfo(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<gender;
  }
};

int main(){
  // student a;
  // a.name="Aman";
  // a.age=20;
  // a.gender=1;

  // student arr[3];
  // for(int i=0;i<3;i++){
  //   cin>>arr[i].name;
  //   cin>>arr[i].age;
  //   cin>>arr[i].gender;
  // }
  //
  // for(int i=0;i<3;i++){
  //   arr[i].printinfo();
  // }

  student a("Aman",45,1);
  a.getname();
  a.printinfo();
}

// #include<iostream>
// using namespace std;
// int main(){
//
// }
