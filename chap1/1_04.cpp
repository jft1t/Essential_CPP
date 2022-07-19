//exercise 1.6
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int seq_list[20];
    int num, cnt=0;
    cout << "please input a list of number:";
    while (cin >> num && cnt < 20){
        seq_list[cnt] = num;
        cnt++;
    }
    
    vector<int> seq_vec(seq_list, seq_list+cnt);

    int sum_list=0, avg_list=0;
    int sum_vec=0, avg_vec=0;
    for (int i = 0; i < cnt; i++){
        sum_list += seq_list[i];
    }
    
    for (int i = 0; i < seq_vec.size(); i++){
        sum_vec += seq_vec[i];
    }
    
    avg_list = sum_list / ( cnt );
    avg_vec = sum_vec / seq_vec.size();

    cout << sum_list << '\t' << sum_vec;
    return 0;
}