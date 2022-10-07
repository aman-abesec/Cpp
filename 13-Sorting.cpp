//Selection sort
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i,j;
//   cout<<"enter the size of array : ";
//   cin>>n;
//   int a[n];
//   for(i=1;i<=n;i++){
//     cin>>a[i];
//   }
//   for(i=1;i<=n;i++){
//     for(j=i+1;j<=n;j++){
//       if(a[i]>a[j]){
//         int c=a[i];
//         a[i]=a[j];
//         a[j]=c;
//       }
//     }
//   }
//   for(i=1;i<=n;i++){
//     cout<<a[i]<<" ";
//   }
// }

//Bubble sort
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the size of array : ";
//   cin>>n;
//   cout<<"Enter the array element : ";
//   int a[n];
//   for(i=0;i<n;i++){
//     cin>>a[i];
//   }
//   for(i=0;i<n;i++){
//     for(j=0;j<n-i-1;j++){
//       if (a[j]>a[j+1]){
//         int t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//       }
//     }
//   }
//     for(i=0;i<n;i++){
//       cout<<a[i]<<" ";
//     }
// }

//Insrtion sort
// #include<iostream>
// using namespace std;
// int main(){
//   int n,i;
//   cin>>n;
//   int arr[n];
//   for(i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   for(int i=1;i<n;i++){
//     int current=arr[i];
//     int j=i-1;
//     while(arr[j]>current && j>=0){
//       arr[j+1]=arr[j];
//       j--;
//     }
//     arr[j+1]=current;
//   }
//   for(i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }
