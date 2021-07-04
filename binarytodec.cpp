#include <iostream>
#include <math.h>
using namespace std;


int main()
{
int num;
cin>>num;

int ans=0;

int i=1;
while(num!=0){
int rem = num %10;
ans =ans +rem* pow(2,i);
num = num/10;

i++;

}
cout<<"Decimal no obtained is "<<ans<<endl;

return 0;
}


