#include <iostream>
#include<cmath>


  double calculateDistance(int x, int y, int a, int b){
    return std :: sqrt(std::pow (x-a,2) + std::pow(y-b,2)) ;
  }
int main()
{
  int x,y,a,b;
  std::cout<<"Enter the coordinates of point 1 (x,y):";
  std::cin>>x>>y;
  std::cout<<"Enter the coordinates of point 2 (a,b):";
   std::cin>>a>>b;

   double distance= calculateDistance(x,y,a,b);
   std::cout<<"Euclidean distance between two point :" <<distance<<std:: endl;
     return 0;
}


