#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
#include<windows.h>
struct student
{
	int rollno;
	long long int mobile;
	char attd[365],name[70],email[50],gender[10],address[100];
	struct student *link;
}*temp1,*temp;
void gotoxy(int x, int y)
{
   COORD ord;
   ord.X = x;
   ord.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ord);
}
int main()
{
	FILE *fp1,*fp2,*fp3,*fp4;/*file pointers */
	char rr[30];/*to read rollno from the file*/
	int c,r=5,p=5,count=0,b; /* to switch gotoxy methods and b used in cse 4 */
	char fn1[30],e;/* to convert the value obtained from the file to integer */
	char n[50],em[50],add[100],gen[10],stdroll[20];/* used in structure */
	struct student *start=NULL;
	start=(struct student*)malloc(sizeof(struct student));
	temp1=(struct student*)malloc(sizeof(struct student));
	start->mobile=0;
	int mroll=1806001;//to take the attendance//
	int i,m=1,q=2,z;//to change roll no in string format to integer format//
	while(m<q)
	{
		int cr=0;
		int o=0;
		char str[11]="";
		char add3[11]="attd";
		char resroll[7]="";
		int k,pcount=0,acount=0,tattd;
		char ab[10000];
		char details,attendance[1];
		system("cls");
		printf("Menu\n1.Add student\n2.Take attendance\n3.View student record.\n4.Check Attendance\n5.Exit\nChoose your option:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				fp2=fopen("roll.txt","r");
				e=fgetc(fp2);
				while(e!=EOF)
				{
					rr[o]=e;
					o++;
					e=fgetc(fp2);
				}
				fclose(fp2);
				for(i=0;i<strlen(rr);i++)
				{
					cr=10*(cr)+(int)rr[i]-48;
				}
				fp1=fopen(rr,"a");
				strcat(add3,rr);
				fp3=fopen(add3,"w");
				fclose(fp3);
				temp=(struct student*)malloc(sizeof(struct student));
				printf("Name of student:");
				scanf("%s",temp->name);
				fprintf(fp1,"Name of Student is:            %s\n",temp->name);
				printf("Email-Id of the student:");
				scanf("%s",temp->email);
				fprintf(fp1,"Email-Id of Student is:        %s\n",temp->email);
				temp->rollno=cr;
				printf("Roll no of Student is: %d\n",temp->rollno);
				fprintf(fp1,"Roll no of Student is:         %d\n",temp->rollno);
				printf("Mobile Number:");
				scanf("%lld",&temp->mobile);
				fprintf(fp1,"Mobile number of Student is:   %lld\n",temp->mobile);
				printf("Address:");
				scanf("%s",temp->address);
				fprintf(fp1,"Address of Student is:         %s\n",temp->address);
				printf("Gender:");
				scanf("%s",temp->gender);
				fprintf(fp1,"Gender of Student is:          %s\n",temp->gender);
				temp->link = NULL;
				if(start->mobile==0)
				{
					start=temp;
					temp1=temp;
				}
				else
				{
					temp1->link=temp;
					temp1=temp1->link;

				}
				cr++;
				fp2=fopen("roll.txt","w");
				fprintf(fp2,"%d",cr);
				fclose(fp2);
				fclose(fp1);
				break;
			case 2:
				system("cls");
				fp2=fopen("roll.txt","r");
				e=fgetc(fp2);
				while(e!=EOF)
				{
					rr[o]=e;
					o++;
					e=fgetc(fp2);
				}
				fclose(fp2);
				for(i=0;i<strlen(rr);i++)
				{
					cr=10*(cr)+(int)rr[i]-48;
				}
				for(i=1806001;i<cr;i++)
				{
					printf("%d:    ",i);
					scanf("%s",attendance);
					sprintf(resroll,"%d",i);
					strcat(add3,resroll);
					fp4=fopen(add3,"a");
					fprintf(fp4,"%s",attendance);
					fclose(fp4);
					strcpy(add3,str);
					strcpy(add3,"attd");
				}
				Sleep(10000);
				break;
			case 3:
				system("cls");
				gotoxy(10,5);
				printf("Enter the roll no of student:");
				scanf("%s",stdroll);
				fp2=fopen(stdroll,"r");
				system("cls");
				while((details=fgetc(fp2))!=EOF)
				{
					printf("%c",details);
				}
				fclose(fp2);
				Sleep(10000);
				break;
			case 4:
				system("cls");
				gotoxy(10,5);
				printf("Enter the roll no of student:");
				scanf("%s",stdroll);
				strcat(add3,stdroll);
				fp2=fopen(add3,"r");
				fgets(ab,10000,fp2);
				fclose(fp2);
				for(i=0;i<strlen(ab);i++)
				{
					if(ab[i]=='p')
					{
						pcount++;
						printf("p");
					}
					if(ab[i]=='a')
					{
						acount++;
						printf("a");
					}
				}
				system("cls");
				strcpy(add3,"attd");
				tattd=pcount+acount;
				printf("Percentage of attendance of the student is: %d",((pcount*100)/tattd));
				Sleep(10000);
				break;
			case 5:
				z=m;
				m=q;
				q=z;
		}
	}
}
