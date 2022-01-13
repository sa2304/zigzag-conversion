#include <cassert>
#include <iostream>
#include <string>

using namespace std;

class Solution {
 public:
  string convert(string s, int numRows) {
    string result;
    result.reserve(s.length());
    const int zl = zigzagLength(numRows);
    const int step = zl ? zl : 1;
    for (int row = 0; row < numRows; ++row) {
      int i = row;
      while (i < s.length()) {
        result.push_back(s[i]);
        if (row != 0 and row != numRows - 1) {
          int d = i + diagElement(row, numRows);
          if (d < s.length()) { result.push_back(s[d]); }
        }
        i += step;
      }
    }

    return result;
  }

  int diagElement(int row, int numRows) {
    return zigzagLength(numRows) - row * 2;
  }

  int zigzagLength(int numRows) {
    return numRows * 2 - 2;
  }
};

void TestConvert() {
  Solution s;
  assert("PAHNAPLSIIGYIR"s == s.convert("PAYPALISHIRING"s, 3));
  assert("PINALSIGYAHRPI"s == s.convert("PAYPALISHIRING"s, 4));
  assert("A"s == s.convert("A"s, 1));
}

int main() {
  TestConvert();
  std::cout << "Ok!" << std::endl;
  return 0;
}
