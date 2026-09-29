#include<iostream>
using namespace std;
const int maxsize = 100;
class Seqlist{
private:
int data[maxsize];
int length;


public:
//初始化
Seqlist()
{
   length = 0;
}


//尾插
void pushback(int x)
{
    if(length >= maxsize)
    {
        return;
    }
    data[length] = x;
    length ++;
}


void insert(int pos,int x)
{
    if(pos > length || pos < 0 || length >= maxsize)
    {
        return;
    }
    for(int i = length; i > pos;i--)
    {
        data[i+1] = data[i];

    }
    data[pos] = x;
    length ++;
} 
};