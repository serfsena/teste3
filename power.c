#include <stdio.h>
int main()
{
    for (int i = 1 ; i< 120; i++)
    {
        if(i*i>100000){
            break;
        }
        else{
            printf("%d","%c"\n,(i*i)," ", i);
        }
    }
}