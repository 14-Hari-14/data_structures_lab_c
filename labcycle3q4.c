#include<stdio.h>
void main()
{
	struct Student
	{
		char name[20];
		int rollno;
		int marks;
	}s[2]
	int n, i, ch;
	
	printf("How many students do you want to add: ");
	scanf("%d", &n);
	
	for(i=0;i<2;++i)
	{
		s[i].rollno=i+1;
		printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
	}
	printf("1. read a rollno and display the student details");
	printf("2. display the list in the order of name");
	printf("3. print a rank list in the descending order of mark");
	printf("4. display the list of passed students ( marks >=50)");
	
	printf("Enter the choice: ");
	scanf("%d", &ch);
	
	if(ch==1)
	{
		printf("Enter the rollno: ");
		scanf("%d", &rollno);
	}
	
	
	//printf("Do you want to add a student: ");
	//scanf("%d", &)
}
