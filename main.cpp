#include <cassert>
#include <iostream>
#include <string>

using namespace std;

class Solution {
 public:
  string convert(string s, int numRows) {
    // FIXME
    return s;
  }

  string readTeeth(string_view s, int numRows) {
    string result;
    if (0 < numRows) {
      int left = 0;
      int right = numRows * 2 - 2;
      while (left < right) {
        result.push_back(s[left++]);
        result.push_back(s[right--]);
      }
      result.push_back(s[left]);
    }

    return result;
  }
};

void TestReadTeeth() {
  Solution s;
  assert("0A192837465"s == s.readTeeth("0123456789A"s, 6));
  assert("0615243"s == s.readTeeth("0123456789A"s, 4));
  assert("04132"s == s.readTeeth("0123456789A"s, 3));
  assert("021"s == s.readTeeth("0123456789A"s, 2));
  assert("0"s == s.readTeeth("0123456789A"s, 1));
}

void TestConvert() {
  Solution s;
  assert("PAHNAPLSIIGYIR"s == s.convert("PAYPALISHIRING"s, 3));
  assert("PINALSIGYAHRPI"s == s.convert("PAYPALISHIRING"s, 4));
  assert("A"s == s.convert("A"s, 1));
}

int main() {
  TestReadTeeth();
  TestConvert();
  std::cout << "Ok!" << std::endl;
  return 0;
}
