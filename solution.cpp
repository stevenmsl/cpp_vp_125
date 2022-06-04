#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol125;
using namespace std;

/*takeaways
  - two pointers

*/

bool Solution::isPalindrome(string s)
{
  int i = 0, j = s.size() - 1;
  while (i < j)
  {
    while (i < j && !isalnum(s[i]))
      i++;
    while (i < j && !isalnum(s[j]))
      j--;
    if (tolower(s[i++]) != tolower(s[j--]))
      return false;
  }

  return true;
}
