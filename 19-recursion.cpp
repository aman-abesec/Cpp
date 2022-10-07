//Sum upto n number

// #include<iostream>
// using namespace std;
// int sum(int n){
//   if(n==0){
//     return 0;
//   }
//   int p=sum(n-1);
//   return (n+p);
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<sum(n);
// }

//n power of p
// #include<iostream>
// using namespace std;
// int pow(int n, int p){
//   if(p==0){
//     return 1;
//   }
//   int m=pow(n,p-1);
//   return n*m;
// }
// int main(){
//   int n,p;
//   cin>>n>>p;
//   cout<<pow(n,p);
// }

//Factorial of a numbers
// #include<iostream>
// using namespace std;
// int fact(int n){
//   if(n==0){
//     return 1;
//   }
//   else{
//     return n*fact(n-1);
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<fact(n);
// }

//Fibnoci of nth numbers
//fib(n)=fib(n-1)+fib(n-2) //base condition fib(0)=0 & fib(1)=1
// #include<iostream>
// using namespace std;
// int fib(int n){
//   if (n==0){
//     return 0;
//   }
//   else if(n==1){
//     return 1;
//   }
//   else{
//     return fib(n-1)+fib(n-2);
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<fib(n);
// }
