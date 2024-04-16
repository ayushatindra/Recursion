#include <iostream>
using namespace std;
// this is wrong approach

void sorted(int arr[],int n,int i){
  // base case
  if(n==0||n==1){
    return;
  }
  // processing
 if(arr[i+1]>arr[i]){
   cout<<"sorted";
   
 }
 

  // recursion call
 return sorted(arr,n,i+1);
  
  
}
// bool ckeckSorted(int arr[],int n,int i){
//   // base case
//   if(i>=n){
//     return true;
//   }
//   // processing
//   if(arr[i]>arr[i-1]){
//     return true;
//   }
//   return ckeckSorted(arr,n,i+1);
// }

bool sorted1(int arr[], int n, int i) {
    // base case
    if (i == n - 1) { // We've reached the end of the array
        return true; // Array is sorted
    }

    // processing
    if (arr[i] > arr[i + 1]) {
        return false; // Array is not sorted
    }

    // recursion call
    return sorted1(arr, n, i + 1);
}
// method 2
bool sortedarray(int arr[],int n,int i){
  // base case
  if(i>=n){
    return true;
  }
  // processing
  if(arr[i]>arr[i-1]){
  // aage check karne padega
   bool ans=  sortedarray(arr,n,i+1);
    return ans;
  }
  else{
    return false;
  }
}

int BinarySearch(int arr[],int n,int s,int e,int key){
  // base case

   if(s>e){
     return -1;
   }
  // processing
   int mid =s+(e-s)/2;
  if(arr[mid]==key){
    return mid;
  }
  if(arr[mid]<key){
    return BinarySearch(arr,n,mid+1,e,key);
  }
  else{
    return BinarySearch(arr,n,s,mid-1,key);
  }
  

}
void subsequence(string str,string output,int i){
  // base case
  if(i>=str.length()){
    // ans jo hai voh output string me ban chuka hai
    cout<<"->"<<output<<endl;
   return;
  }
  // processing
  char ch=str[i];

  
  // exclude
  subsequence(str,output,i+1);

  // include
  output.push_back(ch);
  subsequence(str,output,i+1);
  
}

int maximizeTheCut(int n, int x, int y, int z){
  // base case
   if(n==0){
     return 0;
   } 
  if(n<0){
    return INT32_MIN;
  }
  // maine 1 x ko cut kiya phir recursion sabhal lega
  int option1=1+maximizeTheCut(n-x,x,y,z);
   // maine 1 y ko cut kiya phir recursion sabhal lega
  int option2=1+maximizeTheCut(n-y,x,y,z);
   // maine 1 z ko cut kiya phir recursion sabhal lega
  int option3=1+maximizeTheCut(n-z,x,y,z);
  int finalAns= max(option1,max(option2,option3));

  return finalAns;
} 
int coinChange(int coins[],int n,int amount){
  // base case
  if(amount==0){
    return 0;
    
  }
int ans=INT32_MAX;
  int mini=INT32_MAX;
   for(int i=0;i<n;i++){
     int coin=coins[i];
     if(coin<=amount){
       int recAns=coinChange(coins,n,amount-coin);
       if(recAns!=INT32_MAX){
         ans =1+recAns;
       }
       mini=min(mini,ans);
      
     } 
   }
  return mini;
}

int rob(int arr[],int n,int i){
  // base case
  if(i>=n){
    return 0;
  }
  // processing
  int ans1=arr[i]+rob(arr,n,i+2);
  int ans2=rob(arr,n,i+1);
  int finalAns=max(ans1,ans2);
  return finalAns;
}

int main() {
 // Recursion week 3
  cout<<maximizeTheCut(4,2,1,1);

  // cut into maximum segment
  
  // string name="abc";
  // string output="";
  // int i=0;
  // subsequence(name,output,i);
  
  // check whether the array is sorted or not 
//   int arr[5] = {1,3,4,5};
//   int size =5;
//   int i=0;
// sorted(arr,size,i);

  // this method is wrong on 2 things 
  // 1. base case 
// 2. index should start from not 0 from 1
  // int arr[]={};
  // int size =0;
  // int i=1;

  //   sortedarray(arr,size,i);

  // if(sortedarray(arr,size,i)){
  //   cout<<"sorted";
  // }
  // else{
  //   cout<<"not sorted";
  // }


  // q2 binary search through recursion 
 //  int arr[]={1,2,2,3,4,5};
 //  int n=6;
 
 //  int key=990;
 //  int s=0;
 //  int e=n-1;
 // cout<< BinarySearch(arr,n,s,e,key);

}