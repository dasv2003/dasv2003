//Daniil Švager
//Programu sistemos 1 kursas 3 grupe
//Ketvirtas namu darbas
//Sudaryti vienpusi sarasa. Parasyti procedura,
//kuri suspaudzia sarasa,
//is vienodu pasikartojanciu elementu, palikdama tik viena

#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main()
{
    int n;
    printf("Enter the total number of nodes:");
    scanf("%d",&n);
    CreateList(n);
    ModifyList();
    PrintList();
    return 0;
}

