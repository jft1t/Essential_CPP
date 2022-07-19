//答题-斐波那契数列
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string user_name;
int val = 0;
int num_tries = 0, num_right = 0; 
double user_score = 0.0;
char user_more;
bool go_for_it = true;
unsigned seed;
int fibo1;

const int max_tries = 10;

//斐波那契数列
int fibo(int n){
    if(n == 0)  return 0;
    else if(n == 1)  return 1; 
    else    return fibo(n-1) + fibo(n-2);
}
//获得1-50随机数

void game(){
    if(num_tries <= max_tries){
        fibo1 = rand() % 10 + 1;
        cout << "已知某数列相邻的两个元素值是" << fibo(fibo1) << ' ' << fibo(fibo1+1) << '\n';
        cout << "试问下一个值是多少：";
        cin >> val;
        if(val = fibo(fibo1) + fibo(fibo1+1)){
            num_right++;
            num_tries++;
            cout << "恭喜你答对了，再来一个吗？请输入 Y or N:";
            cin >> user_more;
            if(user_more == 'Y'){
                go_for_it = true;
                game();
            }
            else{
                go_for_it = false;
                return;
            }
        }
        else{
            cout << "答错了 游戏结束了";
            return;
        }
    }
    else return;
}

int main(){
    seed = time(0);
    srand(seed);

    game();
    
    user_score = num_right / num_tries;
    cout << "your score is" << user_score;
    return 0;
}