#include<stdio.h>
#include<stdbool.h>
int main()
{

    bool faild = false;
    int total_gp =0;
    float total_cgp =0;
    float gpa=0;
    float cgpa;
    int terms;
    printf("Enter number of terms: ");
    scanf("%d",&terms);
    for(int j =1; j<=terms; j++)
    {
        printf("\n\nTerms %d:\n",j);

        int number_of_subjects;
        printf("Enter number of Subjects: ");
        scanf("%d", &number_of_subjects);
        for(int i =1; i<=number_of_subjects; i++)

        {
            int marks;
            printf("enter marks subjet %d : ",i);
            scanf("%d",&marks);
            int gp;
            if (marks>= 80){
                printf("Grade = A+\t");
                gp =5;
            }

            else if (marks>= 70){
                printf("Grade = A\t");
                gp =4;
            }

            else if (marks>= 60){
                printf("Grade = B\t");
                gp =3;
            }

            else if (marks>= 50){
                printf("Grade = C\t");
                gp =2;
            }
            else if (marks>= 40){
                printf("Grade = D\t");
                gp =1;
            }
            else {
                printf("Grade = F\t");
                gp =0;
                faild = true;
            }
            total_gp += gp;
            printf("Grade point = %d\n",gp);

        }
        if(faild){
            gpa = 0;
            printf("you have Failed. GPA: %.2f",gpa);

        }
        else{
            gpa= (float)total_gp/number_of_subjects;
            printf("Term%d GPA: %.2f\n",j,gpa);
            total_gp =0;
        }
        total_cgp += gpa;


    }
    cgpa = total_cgp /terms;
    printf("\n\nOverall CGPA = %.2f",cgpa);


    return 0;
}
