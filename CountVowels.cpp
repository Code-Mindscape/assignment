#include<iostream>
using namespace std;

int countVow(char str[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
    }

    return count;
    
    
}
  
int main(){

    char str[] = "HELLO";
    int size = sizeof(str)/sizeof(char);


    
    cout<<countVow(str, find, size);

    return 0;
}