#include <iostream>
#include <string>
using namespace std;
int fibo(int n){
    int result;
    if(n = 0)  result = 0;
    else if(n = 1)  result = 1; 
    else    result = fibo(n-1) + fibo(n-2);

    return result;
}
int main(){
    string user_name;

    // cout << "Please enter your first name: ";
    // cin >> user_name;
    // cout << "\nHello," << user_name << " ... and goodbye!\n";
    cout << fibo(14);
    
    return 0;
}