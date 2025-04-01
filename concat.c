
#include<stdio.h>
int main (){
    char str1[30]="RAKIA";
    char str2[40]="ANDRABI";
    int i=0,j=0,size1=0,size2=0;

    for(size1=0;str1[size1]!='\0';size1++);

            str1[size1]=' ';
            size1++;
    for(i=0;str2[i]!='\0';i++)
    {
      
        str1[size1+i]=str2[i];
    }
    printf("%s",str1);
}


