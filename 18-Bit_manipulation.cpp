// get bit at any position
//n=0101=5 1<<i=0100 position i=2
// #include<iostream>
// #include<string>
// using namespace std;
// int getbit(int n, int pos){
//   return ((n&(1<<pos))!=0);
// }
// int main(){
//
//   cout<<getbit(5,2);
// }

//set bit at a position 1<<i 0101 | oo10=0111
// #include<iostream>
// #include<string>
// using namespace std;
// int setbit(int n, int pos){
//   return ((n|(1<<pos)));
// }
// int main(){
//
//   cout<<setbit(5,1);
// }

//Clear bit n=0101 i=2 1<<i=0100 ~0100=1011
// #include<iostream>
// #include<string>
// using namespace std;
// int clearbit(int n, int pos){
//   return ((n&~(1<<pos)));
// }
// int main(){
//
//   cout<<clearbit(5,2);
// }

//Update getbit n=0101 pos=i=1 to 1
// #include<iostream>
// #include<string>
// using namespace std;
// int updatebit(int n, int pos,int value){
//     n=(n&~(1<<pos));
//     return (n|(value<<pos));
// }
// int main(){
//
//   cout<<updatebit(5,1,1);
// }
