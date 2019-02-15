#include <bits/stl_tree.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

typedef std::_Rb_tree<int, int, std::_Identity<int>, std::less<int> > rbt;

using std::cout;
using std::hex;
using std::endl;
using std::shuffle;

class rb_test_tree : public rbt {
public:
  void P_PRINTF() {
    cout << "Header: " << std::hex << &(this->_M_impl._M_header) << endl;
    cout << "Header left:" << std::hex << &(this->_M_impl._M_header._M_left) << endl;
    cout << "Header right: " << std::hex << &(this->_M_impl._M_header._M_right) << endl;
    cout << "Header parent: " << std::hex << &(this->_M_impl._M_header._M_parent) << endl;
    cout << "Root: " << std::hex << &(this->_M_root()) << endl;
    cout << "Root's left: " << std::hex << this->_M_root()->_M_left << endl;
    cout << "Root's right: " << std::hex << this->_M_root()->_M_right << endl;
    cout << "Root's parent: " << std::hex << this->_M_root()->_M_parent << endl;
  }
};

int main(void) {
  rb_test_tree t;
  std::vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  shuffle(v.begin(), v.end(), std::default_random_engine(16384));
  for(const auto&x:v) t._M_insert_unique(x);
  t.P_PRINTF();
  return 0;
}
