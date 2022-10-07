//RECTANGLE_PATTERN
// ********
// ********
// ********
// ********
// ********
// #include<iostream>
// using namespace std;
// int main(){
//   int r,c,i,j;
//   cout <<"Enter row number : ";
//   cin>>r;
//   cout<<"Enter column number: ";
//   cin>>c;
//   for(i=1;i<=r;i++){
//     for(j=1;j<=c;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

//HOLLOW RECTANGLE_PATTERN
// ********
// *      *
// *      *
// *      *
// *      *
// ********
// #include<iostream>
// using namespace std;
// int main(){
//   int r,c,i,j;
//   cout<<"Enter row and column number : ";
//   cin>>r>>c;
//   for(i=1;i<=r;i++){
//     for(j=1;j<=c;j++){
//       if(i==1 or i==r or j==1 or j==c){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }

//half pyramid
// *
// **
// ***
// ****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//   int a,i,j;
//   cout<<"Enter the size : ";
//   cin>>a;
//   for(i=1;i<=a;i++){
//     for(j=1;j<=i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

//Inverted half pyramid
// *****
// ****
// ***
// **
// *
// #include<iostream>
// using namespace std;
// int main(){
//   int a,i,j;
//   cout<<"Enter the size : ";
//   cin>>a;
//   for(i=a;i>=1;i--){
//     for(j=1;j<=i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

//REverse triangle
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i,j;
//   cout<<"Enter the number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n;j++){
//       if(i>n-j){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }

//half pyramid using number
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }

//Floyds triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n,c=1;
//   cout<<"Enter the number : ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//       cout<<c<<" ";
//       c++;
//     }
//     cout<<endl;
//   }
// }

//Butterfly Pattern
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i,j;
//   cout<<"Enter a nuber : "
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//       cout<<"*";
//     }
//     int sp=2*n-2*i;
//     for(j=1;j<=sp;j++){
//       cout<<" ";
//     }
//     for(j=1;j<=i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   for(i=n;i>=1;i--){
//     for(j=1;j<=i;j++){
//       cout<<"*";
//     }
//     for(j=1;j<=(2*n-2*i);j++){
//       cout<<" ";
//     }
//     for(j=1;j<=i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }
