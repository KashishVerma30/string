#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1("XYYZXZYZXXYZ");
  string s2("XYZ");
  cout<<s1.find("YZX")<<endl;
  cout<<s1.find("XZY")<<endl;
  cout<<s1.rfind("YZX")<<endl;
  cout<<s1.find("XYZ")<<endl; 
}
 
