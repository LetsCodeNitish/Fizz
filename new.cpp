#include <iostream>
using namespace std;

void FizzBuzz(int s){
    if(s%3==0){
        cout<<"Fizz";
    }
    if(s%4==0){
        cout<<"Buzz";
        
    }
    if(s%3 && s%4){
        cout<<"FizzBuzz";
    }
    else{
        cout<<"s";
    }

    return;

}


int main(){
    int n, sum=0;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }

    FizzBuzz(sum);
}
