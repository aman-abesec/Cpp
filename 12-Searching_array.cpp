//Linear search
// #include<iostream>
// using namespace std;
// int linearsearch(int a[],int k,int n){
//   int i;
//   for(i=1;i<=n;i++){
//     if(k==a[i]){
//       return i;
//     }
//   }
//   return -1;
// }
// int main(){
//   int i,k,n;
//   cout<<"Enter the size of array : ";
//   cin>>n;
//   int a[n];
//   cout<<"Enter the array : ";
//   for(i=1;i<=n;i++){
//     cin>>a[i];
//   }
//   cout<<"Enter the element to be searched : ";
//   cin>>k;
//   cout<<linearsearch(a,k,n);
// }

//Binarysearch
// #include<iostream>
// using namespace std;
// int binarysearch(int a[],int k,int n){
//   int s=0,e=n,mid;
//   mid=(s+e)/2;
//   while(s<=e ){
//     if(a[mid]==k){
//       return mid;
//     }
//     else if(a[mid]>k){
//       e=mid-1;
//     }
//     else{
//       s=mid+1;
//     }
//     mid=(s+e)/2;
//   }
//     return -1;
// }
// int main(){
//   int i,k,n;
//   cout<<"Enter the size of array : ";
//   cin>>n;
//   int a[n];
//   cout<<"Enter the array : ";
//   for(i=1;i<=n;i++){
//     cin>>a[i];
//   }
//   cout<<"Enter the element to be searched : ";
//   cin>>k;
//   cout<<binarysearch(a,k,n);
// }
