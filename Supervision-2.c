#include<stdio.h>
#include<string.h>

    struct Student {
	int rollno;
	char name[20];
	int chemistry;
	int mathematics;
	int physics;
};

void main()
{
	// Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student
	
	int total;
    float pr;
    struct Student s;
    struct Student s1;
    struct Student s2;
    struct Student s3;
    struct Student s4;
    
    printf("Enter Roll No = ");
	scanf("%d",&s.rollno);
	printf("Enter name = ");
	scanf("%s",&s.name);
	printf("Enter chemistry marks = ");
	scanf("%d",&s.chemistry);
	printf("Enter mathematics marks = ");
	scanf("%d",&s.mathematics);
	printf("Enter physics marks = ");
	scanf("%d",&s.physics);

	printf("\n");
	printf("------ Student1------\n ");
	printf("\n");
	
	printf("Enter Roll no = ");
	scanf("%d",&s1.rollno);
	printf("Enter name = ");
	scanf("%s",&s1.name);
	printf("Enter chemistry = ");
	scanf("%d",&s1.chemistry);
	printf("Enter mathematics = ");
	scanf("%d",&s1.mathematics);
	printf("Enter physic = ");
	scanf("%d",&s1.physics);

	printf("\n");
	printf("\n------ Student2------\n");
	printf("\n");
	
	printf("Enter Roll no = ");
	scanf("%d",&s2.rollno);
	printf("Enter name = ");
	scanf("%s",&s2.name);
	printf("Enter chemistry = ");
	scanf("%d",&s2.chemistry);
	printf("Enter mathematics = ");
	scanf("%d",&s2.mathematics);
	printf("Enter physics = ");
	scanf("%d",&s2.physics);
	
	printf("\n");
	printf("\n------ Student3------\n");
	printf("\n");
	
	printf("Enter Roll No =  ");
	scanf("%d",&s3.rollno);
	printf("Enter name = ");
	scanf("%s",&s3.name);
	printf("Enter chemistry = ");
	scanf("%d",&s3.chemistry);
	printf("Enter mathematics = ");
	scanf("%d",&s3.mathematics);
	printf("Enter physics = ");
	scanf("%d",&s3.physics);
	
	printf("\n");	
	printf("\n------ Student4------\n");
	printf("\n");
	
	printf("Enter Roll No = ");
	scanf("%d",&s4.rollno);
	printf("Enter name = ");
	scanf("%s",&s4.name);
	printf("Enter chemistry = ");
	scanf("%d",&s4.chemistry);
	printf("Enter mathematics = ");
	scanf("%d",&s4.mathematics);
	printf("Enter physics =  ");
	scanf("%d",&s4.physics);
	
	printf("\n");
	printf("\n------ PR------\n ");
	printf("\n");
	
	printf("roll no = %d\n",s.rollno);
	printf("Name is = %s\n",s.name);
	printf("chemistry is  = %d\n",s.chemistry);
	printf("chemistry is  = %d\n",s.mathematics);
	printf("chemistry is  = %d\n",s.physics);
	total = s.chemistry+s.mathematics+s.physics;
	printf("Total is = %d\n",total);
	pr = (total*100)/300;
	printf("pr is %f",pr);
	
	printf("\n");
	printf("\n------ Student1------\n");
	printf("\n");
	
	printf("roll no = %d\n",s1.rollno);
	printf("Name is = %s\n",s1.name);
	printf("chemistry is  = %d\n",s1.chemistry);
	printf("chemistry is  = %d\n",s1.mathematics);
	printf("chemistry is  = %d\n",s1.physics);
	total = s1.chemistry+s1.mathematics+s1.physics;
	printf("Total is = %d\n",total);
	pr = (total*100)/300;
	printf("pr is %f",pr);
	
	printf("\n");
	printf("\n------ Student2------\n");
	printf("\n");
	
	printf("roll no = %d\n",s2.rollno);	
	printf("Name is = %s\n",s2.name);	
	printf("chemistry is  = %d\n",s2.chemistry);	
	printf("chemistry is  = %d\n",s2.mathematics);	
	printf("chemistry is  = %d\n",s2.physics);	
	total = s2.chemistry+s2.mathematics+s2.physics;	
	printf("Total is = %d\n",total);
	pr = (total*100)/300;
	printf("pr is %f",pr);
	
	printf("\n");
	printf("\n------ Student3------\n");
	printf("\n");
	
	printf("roll no = %d\n",s3.rollno);
	printf("Name is = %s\n",s3.name);
	printf("chemistry is  = %d\n",s3.chemistry);
	printf("chemistry is  = %d\n",s3.mathematics);
	printf("chemistry is  = %d\n",s3.physics);
	total = s3.chemistry+s3.mathematics+s3.physics;
	printf("Total is = %d\n",total);
	pr = (total*100)/300;
	printf("pr is %f",pr);
	
	printf("\n");
	printf("\n------ Student4------\n");
	printf("\n");
	
		
	printf("roll no = %d\n",s4.rollno);\	
	printf("Name is = %s\n",s4.name);	
	printf("chemistry is  = %d\n",s4.chemistry);	
	printf("chemistry is  = %d\n",s4.mathematics);	
	printf("chemistry is  = %d\n",s4.physics);	
	total = s4.chemistry+s4.mathematics+s4.physics;	
	printf("Total is = %d\n",total);	
	pr = (total*100)/300;
	printf("pr is %f",pr);	
}