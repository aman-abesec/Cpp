//Decleration
// char arr[n+1];
// "/0"
// #include<iostream>
// using namespace std;
// int main(){
//   char arr[100]="apple";
//   int i=0;
//   while(arr[i] !='\0'){
//     cout<<arr[i]<<endl;
//     i++;
//   }
// }

// #include<iostream>
// using namespace std;
// int main(){
//   char arr[100];
//   cin>>arr;
//   cout<<arr;
// }

//Accesing any character
// #include<iostream>
// using namespace std;
// int main(){
//   char arr[100];
//   cin>>arr;
//   cout<<arr[2];
// }

// #include<iostream>
// using namespace std;
// int main(){
//   char arr[100];
//   int n,i=0,f=1;
//   cin>>n;
//   cin>>arr;
//   cout<<arr;
//   for(i=0;i<n;i++){
//     if(arr[i]!=arr[n-i-1]){
//       f=0;
//       break;
//     }
//   }
//    (f==1)?cout<<"palindrome":cout<<"Not";
// }

//largest word in a line
//cin.getline(array_name,size);
//cin.ignore() //to remove buffer

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//   int n,i,m=INT_MIN,c=0;
//   char arr[100];
//   cin>>n;
//   cin.ignore();
//   cin.getline(arr,n);
//   cin.ignore();
//   for(i=0;i<n;i++){
//     c++;
//     if(arr[i]==' ' || i==n-1){
//       m=max(m,c);
//       c=0;
//     }
//   }
//   cout<<m;
// }
