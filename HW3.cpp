#include <iostream>

using namespace std;

float fallingDistance  (int t){
float distance;
distance = 0.5*9.8*t*t;
return distance;
}

int main()
{
int t;
float d;
cout<<"Enter time in seconds:\n";
cin>>t;
d = fallingDistance  (t);
cout<<"The distance fallen in "<<t<<" seconds is "<<d<<" meters";

return 0;
}
