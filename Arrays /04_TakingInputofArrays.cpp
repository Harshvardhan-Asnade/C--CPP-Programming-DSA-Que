#include <iostream>
using namespace std;
int main(){ 
int marks[5];

for (int i = 0; i <=(sizeof(marks)/sizeof(int))-1; i++){
    cout<<"Enter the Marks of Student  "<< i+1 <<" : ";
    cin>>marks[i];
}
for (int i = 0; i <=(sizeof(marks)/sizeof(int)-1); i++)
{
  cout<<"Marks of Stiudnet  "<<i+1<<" = "<<marks[i]<<endl;
}
return 0;
}
