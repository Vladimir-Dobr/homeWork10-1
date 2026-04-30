#include<iostream>



int main(int argc,char**argv)
{

int size{};

std::cout<<"enter size array: ";
std::cin>>size;
int* ptr = new int[size]{};
  
for(int i = 0; i < size; i++)
{	
std::cout<<"arr"<<"["<<i<<"]"<<" = ";
std::cin>>ptr[i];
}
std::cout<<"enter array: ";
for(int i = 0; i < size; i++)
{
std::cout<<ptr[i]<<' ';	
}
delete[] ptr;

return 0;	
}
