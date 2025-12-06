#include<iostream>
#include<vector>
using namespace std ;
void sort(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    int temp =0 ;
    while(i<j){
    if(v[i]==0)i++ ;
    if (v[j]==1) j--;
    else if(v[i]==1 && v[j]==0){
        v[j]=1;
        v[i]=0;
    }
    }

}
int main(){
     vector<int> v;
     v.push_back(1);
     v.push_back(0);
     v.push_back(1);
     v.push_back(0);
     v.push_back(0);
     v.push_back(1);
     v.push_back(1);
     v.push_back(0);
     v.push_back(1);
    // printing vector
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    } cout<<endl;
    // sorting the vector
    sort(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}