#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()  
{
	FILE *fp;
	int i,d,j,k;
	char a[10],b[10],c[10],r[10],ch;
	label1:
		system("color 9b");
		printf("\n---------------------------------------------");
		printf("\n\n\n WELCOME TO HOSPITAL MANAGEMENT SYSTEM");
		printf("\n---------------------------------------------");
		printf("\n\n Press 1:To enter new details");
		printf("\n Press 2:To see all patient list");
		printf("\n Press 3: to exit");
		scanf("%d",&i);
		if(i==1) 
		{
			fp=fopen("mn.text","a");
			printf("\n enter patient name:");
			scanf("%s",&a);
			printf("\n Enter patient age:");
			scanf("%d",&j);
			printf("\n Enter patient id:");
			scanf("%d",&k);
			printf("\n Enter doctor name:");
			scanf("%s",&r);
			printf("\n Record saved");
			fprintf(fp,"\n%s",a);
			fprintf(fp,"\t%d",j); 
			fprintf(fp,"\t%d",k); 
			fprintf(fp,"\t%s",r); 
			fclose(fp);
			printf("\n Press1: for home \n Press 2: For see all records");
			scanf("%d",&d);
			if(d==1) 
			{
				system("cls");
				goto
				label1;
				}
			else if(d==2) 
			{
				goto
				label2;
			}
		}
		else if(i==2) 
		{
			label2:
				system("color 2b");
				system("cls");
				fp=fopen("mn.text","r");
				ch=fgetc(fp); 
				while(!feof(fp)) 
				{
					printf("%c",ch);
					ch=fgetc(fp);
				}
				fclose(fp);
			}
			else
			{
				exit(0);
			}
			printf("\n\n\n Press 1:FOR HOME");
			scanf("%d",&d);
			if(d==1)
			{
				system("cls");
				goto
				label1;
				}
			return 0;
			}
		
			
			

