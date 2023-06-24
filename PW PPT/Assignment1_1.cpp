#include<iostream>
using namespace std;
int main(){
    
int target;
int size;
cout<<"enter size  ";
cin>>size;
int nums[size];


cout<<"Enter Element ";
for (int i = 0; i < size; i++)
{
    cin>>nums[i];
}

cout<<"enter target ";
cin>> target;

for(int i=0;i<size-1;i++)
{
    for (int j = i+1; j < size; j++)
    {
        if(nums[i]+nums[j]==target)
        {
            cout<<i<<j;
        }
        
    }
    
}

}

