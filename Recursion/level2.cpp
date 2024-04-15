#include <iostream>
#include<vector>
#include <limits.h>
using namespace std;
int climbling(int n){
  if(n==0){
    return 1;
    // yeeeee gayan rakhna
    
  }
  if(n==2){
    return 2;
  }
  if(n==1){
    return 1;
  }
 int ans=climbling(n-1)+climbling(n-2);
  return ans;
}
// int printArrayThroughRecursion(int arr[],int n,int i){
//   // Base case
//   if(i==n){
// return 0;
//   }
//   cout<<arr[i]<<" ";
//   printArrayThroughRecursion(arr,n,i+1);
  

  
  
// }



void printArrayThroughRecursion(int arr[], int n, int i) {
    // Base case
    if (i >= n) {
        return;
    }
    cout << arr[i] << " ";
    printArrayThroughRecursion(arr, n, i + 1);
}

// reverse printing the array rhrough recursion
void printRecursionArrayThroughRecursion(int arr[], int n, int i) {
    // Base case
    if (i >= n) {
        return;
    }

    printArrayThroughRecursion(arr, n, i + 1);
    cout << arr[i] << " ";
}



// void printArrayThroughRecursion2(int arr[],int n,int i){
//   // Base case
//   if(i==n){
    
    
//   }
// }

bool search(int arr[],int n,int i,int key){
  // base condition
  if(i>=n){
    return false;
    
  }
  if(arr[i]==key){
    return true;
  }
  return search(arr,n,i+1,key);
  
}
void min(int arr[],int n,int i,int &mini){
  // base condition
   
  if(i==n){
    return;
  }
   mini=min(mini,arr[i]);
  min(arr,n,i+1,mini);
  
 
  
  
}
// int find(int arr[],int n,int i,int key){
//   // base case
//   if(i==n){
    
//   }
// }

// void printEvenVector(int arr[],int size,int i,vector<int> &ans){
//   // base condistion
//   if(i>=size){
//     return;
//   }
//   // processing
//   if(arr[i]%2==0){
//     ans.push_back(ans[i]);
//   }
//   // recursive call
//   printEvenVector(arr,size,i+1,ans);

// }


void printEvenVector1(int arr[], int size, int i, std::vector<int> &ans) {
    // base condition
    if (i >= size) {
        return;
    }
    // processing
    if (arr[i] % 2 == 0) {
        ans.push_back(arr[i]);
    }
    // recursive call
    printEvenVector1(arr, size, i + 1, ans);
}

void doubleArrayRecursion(int arr[],int n,int i){
  // base case
  if(i>=n){
    return;
  }
  // processing 
  arr[i]=2*arr[i];
  // recursion call;
  doubleArrayRecursion(arr,n,i+1);
}
void max(int arr[],int n,int i,int &maxi){
  // base condition

  if(i==n){
    return;
  }
  // procesing
   maxi=max(maxi,arr[i]);
  // recursion call
  max(arr,n,i+1,maxi);
}
int search1(int arr[],int n,int i,int key){
  // base condition
  if(i>=n){
    return -1;
  }
  // processing
  if(arr[i]==key){
    return i;
  }

 
  // recursion call 
 

  return search1(arr,n,i+1,key);
  
}
void TotalOccuranceOfKey(int arr[],int n,int i,int key,int &count){
  // base condition
  if(i>=n){
    return;
  }
  // processing
  if(arr[i]==key){
    count++;
    cout<<i<<" ";
  }
  // recursion call
  TotalOccuranceOfKey(arr,n,i+1,key,count);
}

// vector<int> find(int arr[],int n,int i,int key){
//   vector<int> ans;
//   if(i>=n){
//     return ans;
//   }
//   // processing
//   if(arr[i]==key){
    
//     ans.push_back(i);
//   }
//   // recursion call
//     find(arr,n,i+1,key);
  
// }

void printdigit(int n ,vector<int> &ans){
  // Base case
  if(n==0){
    return;
  }
  // processing
  int digit=n%10;
   n =n/10;
  // recursion call
  printdigit(n,ans);
  // processing
  ans.push_back(digit);
}

int main() {
// Recursion 2
  // LeetCode climbling on stairs
  // https://leetcode.com/problems/climbing-stairs/
  // int n;
  // cin>>n;
  // cout<<climbling(n);

  // int arr[]={10,20,30,40,50};
  // int size=5;
  // int i=0;
  //   printRecursionArrayThroughRecursion(arr,size,i);

  // int arr[] = {10, 20, 30, 40, 50};
  // int size=5;
  // int key=30;
  // int i=0 ;
  // cout<<search(arr,size,i,key);

  // finding minimum number in an array
  // int arr[]={20,10,40,2,44};
  // int size=5;
  // int i=0;
  // int maxi=INT8_MIN; 
  // max(arr,size,i,maxi);
  // cout<<maxi<<endl;
  // // yaad rakhna
  // int arr[]={1,2,3,4,5,5,6};
  // int size=7;
  // int i=0;
  // vector<int> ans;
  // printEvenVector1(arr,size,i,ans);
  // for(int i=0;i<ans.size();i++){
  //   cout<<ans[i]<<" ";
  // }

  // double the array using recursion
//   int arr[]={1,2,3,4,5};
//   int size =5;
//   int i=0;
// doubleArrayRecursion(arr,size,i);
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
  // returing the idex of the array if found
  // int arr[]= {1,2,3,4,5};
  // int size=5;
  // int i=0;
  // int key=8;
  // cout<<search1(arr,size,i,key);
  // if not found then

  // int arr[]={10,20,10,40,10,88,10,10};
  // int size=8 ;
  // int key =10;
  
  // int i=0;
  // int count=0;
  // TotalOccuranceOfKey(arr,size,i,key,count);
  // cout<<endl;
  // cout<<"Total number of occurance is :->"<<count;

  int num=4217;
  vector<int> ans;
  
  printdigit(num,ans);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  } 
  

  
  
}