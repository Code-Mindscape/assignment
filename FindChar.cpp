#include<iostream>
using namespace std;

int findChar(char str[], char find, int size){
    int i = 0;
    int flag = 0;
    while (i < size)
    {
        if (str[i] == find)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 1)
    {
        return i;
    }else{
        return -1;
    }
    
    
}
  
int main(){

    char str[] = "HELLO";
    int size = sizeof(str)/sizeof(char);
    char find = 'A';

    
    cout<<findChar(str, find, size);

    return 0;
}