/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class edible_shop{
    
  private:
  float  total_weed ;
  float  chcolate ;
  float  cream;
 
  
  public :
  static const string edible_name[2];
  static const float edible_ingredient[2][3];
  
  edible_shop(float t,float c1,float c2){
      total_weed = t;
      chcolate = c1;
      cream = c2;
  }
  
  
  
  
    
};
const string edible_shop::edible_name[2] = {"Cannabis sativa","Cannabis indica"};
const float edible_shop::edible_ingredient[2][3] = {{10,20,30},{40,50,60}};


int main()
{
    
    
    std::cout<<"Hello World\n";
    
    edible_shop h(100,9,100);
    cout<<h.edible_name[1];

    cout<<h.edible_ingredient[1][1];

    return 0;
}
