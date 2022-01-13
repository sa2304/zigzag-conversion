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
