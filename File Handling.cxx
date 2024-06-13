#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr= fopen("StudentInfo.txt","w");
    char name[100];
    int age;
    float cgpa;
    
    printf("Enter Name :  ");
    scanf("%s",&name);
    printf("Enter Age :  ");
    scanf("%s",&age);
    printf("Enter CGPA : ");
    scanf("%f",&cgpa);
    
    fprintf(fptr,"Student Name :  %s\n",name);
    fprintf(fptr,"Student Age :  %d\n",age);
    fprintf(fptr,"Student CGPA : %f\n",cgpa);
    
    fclose(fptr);
    
    return 0;
}
