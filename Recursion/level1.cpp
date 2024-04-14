#include <iostream>
using namespace std;
int factorial(int n){
  // base condition
  // find memori in monitor

  if(n==0 || n==1){
    return 1;
  }
 
  // processing 
  int ans= n*factorial(n-1);
  return ans;
}
// int countingFromEnd(int n){
//   // base case
//   if(n == 1){
//    cout<<1<<" ";
//       return;
//   }
//   // processing
//   cout<<n<<" ";
//   countingFromEnd(n-1);

 
//   return -1;
  
// }
void countingFromEnd(int n) {
    // base case
    if (n == 1) {
        cout << 1 << " ";
        return;
    }
    // processing
    cout << n << " ";
    countingFromEnd(n - 1);
}
void countingFromBegin(int n) {
    // base case
    if (n == 1) {
        cout << 1 << " ";
        return;
    }
    // processing

    countingFromBegin(n - 1);
  cout << n << " ";
}

int countingFromEnd1(int n) {
    // base case
    if (n == 1) {
       
       return 1;
    }
    // processing
    cout << n << " ";
   return countingFromEnd1(n - 1);
   
    
}
int PowerOfTwo(int n){

// base case
  if(n==0 ){
    return 1;
  }

  
  int ans= 2*PowerOfTwo(n-1);
  return ans;
}
int fibonachi(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  int ans=fibonachi(n-1)+fibonachi(n-2);
  return ans;
}
int sumPrint(int n){
  int sum=0;
  // base case
  
  if (n == 1) {
     
      return 1;
  }
  // processing
  sum = n+sumPrint(n-1);
  countingFromEnd(n - 1);
  return sum;
}
int sumPrint2(int n){
  if(n==0){
    return 0;
  }
  int ans =n+sumPrint2(n-1);
  return ans;
}



int main() {
   // finding factorial of a number using recursion
  // int n;
  // cin>>n;
  // int ans =factorial(n);
  // cout<<ans<<endl;

  // counting from n to "1"
//   int n;
//   cin>>n;
//      int ans = PowerOfTwo(n);
// cout<<ans;
  // int n;
  // cin >>n;
  // int ans =sumPrint2(n);
  // cout<<ans;
  
}