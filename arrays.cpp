// Syntax to declare an array: int nums[6];
// Syntax to make list of assigned values: int nums[6] = { 0, 1, 2, 3, 4, 5 } ;
// An array of characters can be used to store a sdtring of texet if teh final element contains the special \0 null character: char name[5] = { 'm'. 'i', 'k', 'e', '/0' };
// 2 dimensional arrays are useful to storee grid-based information, such as coordinates: int coords[2][3] = { {1,2,3 }, { 4,5,6} };

#include <iostream>
using namespace std;
int main() 
{
  float nums[3];
  nums[0] = 1.5; nums[1] = 2.75; nums[2] = 3.25;
  char name[5] = { 'm', 'i', 'k', 'e', '\0' };
  int coords[2][3] = { { 1,2,3},{4,5,6} } ;
  cout << "coords[0][2]:" << coords[0][2] << endl;
}
