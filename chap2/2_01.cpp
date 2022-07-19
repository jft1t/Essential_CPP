// bubble_sort
#include <iostream>
#include <vector>
using namespace std;

void swap(int &val1, int &val2) {
  // cout << "\nin the swap!" << val1 << val2 << endl;
  int tmp;
  tmp = val1;
  val1 = val2;
  val2 = tmp;

  return;
}

void sort(vector<int> &vec) {
  for (int i = 0; i < vec.size(); i++) {
    for (int j = 0; j < vec.size() - 1 - i; j++) {
      if (vec[j] > vec[j + 1]) {
        swap(vec[j], vec[j + 1]);
      }
    }
  }

  return;
}

int main() {
  vector<int> vec;
  vector<int> &rvec = vec;
  int tmp;
  cout << "Please input your list: ";
  while (cin >> tmp) {
    vec.push_back(tmp);
    cout << "push 1 elem ";
  }
  cout << "list before sort:" << endl;
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << '\t';
  }
  cout << '\n';
  sort(rvec);
  cout << "list after sort:" << endl;
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << '\t';
  }

  return 0;
}