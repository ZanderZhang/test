/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 30 09:49:54 2015
 ************************************************************************/

#include<stdio.h>
#include <stddef.h>

struct EXAMPLE{
    int a;
    char b;
};
int main()
{
    int size_EXAMPLE = sizeof(struct EXAMPLE);

    int offset_b = offsetof(struct EXAMPLE,b);
    int offset_a = offsetof(struct EXAMPLE,a);

    printf("%d\t%d\t%d",size_EXAMPLE,offset_a,offset_b);

    return 0;
}
