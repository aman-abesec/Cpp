// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i,j;
//   cout<<"Enter a number : ";
//   cin>>n;
//   for(i=n;i>=1;i--){
//     for(j=1;j<=i;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// }

//0-1 Pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i,j;
//   cout<<"Enter number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//       if((i+j)%2==0){
//         cout<<1<<" ";
//       }
//       else{
//         cout<<0<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }

//Rhombus Pattern
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i,j;
//   cout<<"Enter number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//       cout<<" ";
//     }
//     for(j=1;j<=n;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }

//Number Pattern
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i,j;
//   cout<<"Enter number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//       cout<<" ";
//     }
//     for(j=1;j<=i;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// }

//Palindromic Pattern
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i,j;
//   cout<<"Enter the number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//       cout<<"  ";
//     }
//     for(j=i;j>=1;j--){
//       cout<<j<<" ";
//     }
//     for(j=2;j<=i;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// }

//pyramid
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//       cout<<"  ";
//     }
//     for(j=1;j<=i;j++){
//       cout<<"* ";
//     }
//     for(j=2;j<=i;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }

//pyramid
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the number : ";
//   cin>>n;
// for(i=n;i>=1;i--){
//   for(j=1;j<=n-i;j++){
//     cout<<"  ";
//   }
//   for(j=1;j<=i;j++){
//     cout<<"* ";
//   }
//   for(j=2;j<=i;j++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }
// }

//star pyramid
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//       cout<<"  ";
//     }
//     for(j=1;j<=i;j++){
//       cout<<"* ";
//     }
//     for(j=2;j<=i;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
//   for(i=n;i>=1;i--){
//     for(j=1;j<=n-i;j++){
//       cout<<"  ";
//     }
//     for(j=1;j<=i;j++){
//       cout<<"* ";
//     }
//     for(j=2;j<=i;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }
