#include<stdio.h>
struct student
{
    int roll;
    int clss;
    int marks;

};
int main()
{
    int n;
    scanf("%d",&n);
    struct student stu[n];
    int i;
    for(i=0; i<n;i++)
    {
        printf("Student %d\n",i+1);
        printf("Enter roll no.: ");
        scanf("%d", &stu[i].roll);
        printf("Enter class : ");
        scanf("%s",&stu[i].clss);
        printf("Enter marks : ");
        scanf("%d", &stu[i].marks);
    }

    int sum = 0;
    for(i=0; i<n; i++)
    {
        sum +=stu[i].marks;
    }

    printf("\n total marks: %d\n",sum);

    return 0;
}
