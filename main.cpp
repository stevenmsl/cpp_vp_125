#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol125;

/*
Input: "A man, a plan, a canal: Panama"
Output: true
*/

tuple<string, bool>
testFixture1()
{
  return make_tuple("A man, a plan, a canal: Panama", true);
}

/*
Input: "race a car"
Output: false
*/

tuple<string, bool>
testFixture2()
{
  return make_tuple("race a car", false);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.isPalindrome(get<0>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.isPalindrome(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}