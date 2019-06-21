#include <iostream>
using namespace std;

int main()
{
  int numArr [] = {2,3,6,9};
  int input = NULL;
  int ans = NULL;
  int x = 0;

  cout << "Input a number that can be added from using 2#s in the array(2,3,6,9)" << endl;
  cin >> input;

  for(int i = 1; i < 4; i++)
  {
    cout << "i:" << i << " x:" << x << endl;
    cout << "Array i: " << numArr[i] << endl;
    ans = numArr[x] + numArr[i];
    cout << "Ans: " << ans << endl;

    if(ans == input)
    {
      cout << "Complete!" << endl;
      return(0);
    }

    else if(i == 3)
    {
      i = 1;
      x += 1;
      ans = 0;
    }

    else
    {
      ans = 0;
    }

  }

 return(0);
}
