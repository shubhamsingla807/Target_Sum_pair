#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,target,left=0,right;
int a[1000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>target;
sort(a,a+n);
right = n- 1;
while(left<right){
    int sum = a[left] + a[right];
    if(sum>target){
        right--;
    }
    else if(sum<target){
        left++;
    }
    else{
        cout<<a[left] << " and " <<a[right]<<endl;
        left++;
        right--;
    }
 }
}

