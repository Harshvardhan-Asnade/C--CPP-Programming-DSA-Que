#include <iostream>
using namespace std;
int main(){ 
int marks[5];
int n =sizeof(marks)/sizeof(int);
for (int i = 0; i <=n-1; i++){
    cout<<"Enter the Marks of Student  "<< i+1 <<" : ";
    cin>>marks[i];
}
for (int i = 0; i <=n-1; i++)
{
  cout<<"Marks of Stiudnet  "<<i+1<<" = "<<marks[i]<<endl;
}
 cout<<"Finding..........................." <<endl;
 int max = marks[0];
 for (int i = 0; i <n; i++)
 {
    if(marks[i]>max)
    max=marks[i];
    cout<<"the higgest marks changes to "<<max<<endl;
}
  cout<<max<<" higgSest marks";
}
