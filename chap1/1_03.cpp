//exercise 1.5
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    //C-style string
    // char user_name[20];
    // const char* puser_name = user_name;
    // cout << "Please input your name:" ;
    // cin >> user_name;
    // if (strlen(puser_name) > 2){
    //     cout << "\nYes, I got it!" << endl;
    // }else{
    //     cout << "No, it is not a name!";
    // }

    //using string
    string user_name;
    cout << "Please input your name:" ;
    cin >> user_name;
    if (user_name.length() > 2){
        cout << "\nYes, I got it!" << endl;
    }else{
        cout << "No, it is not a name!";
    }

    return 0;
}