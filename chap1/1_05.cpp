// exercise 1.7
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  fstream ifile("data.txt", ios_base::in | ios_base::app);
  fstream ofile("result.txt", ios_base::in | ios_base::app);
  vector<string> vec;
  string str;

  if (!ifile.is_open()) {
    cout << "打不开文件";
  } else {
    while (!ifile.eof()) {
      ifile >> str;
      vec.push_back(str);
    }
  }

  for (auto iter = vec.begin(); iter != vec.end(); iter++) {
    cout << *iter;
  }

  sort(vec.begin(), vec.end());

  for (auto iter = vec.begin(); iter != vec.end(); iter++) {
    ofile << *iter;
  }

  return 0;
}