#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//USED VARIABLE(1 word)=e,n,m,c,i,j,x format

struct Format
{
	//Haemotology report
    char fname[20];
    char lname[20];
    int age;
    long long int phone;
    
    //Haemology
    float hae;
    float RBC;
    float HCT;
    int plat;
    
    //Lipid profile
    float Tri;
    float HDL;
    float LDL;
    
    //Diabetes
    float Gluc;
    float uric;
    float calc;
}x[100];

//FOR FORMAT
void format();

void menu();
void search();
void edit();
void del();

//global variable
int m,n;
int c,i,q,a;
int num,e;
int main()
{

    printf("\n\n");
	printf("\t\t\t\t    ___  _  _        _            _   ___                      _                 \n");
	printf("\t\t\t\t   / __|| |(_) _ _  (_) __  __ _ | | / __| ___  __ _  _ _  __ | |_    _  _  _ __ \n");
	printf("\t\t\t\t  | (__ | || || ' \\ | |/ _|/ _` || | \\__ \\/ -_)/ _` || '_|/ _|| ' \\  | || || '_ \\ \n");
	printf("\t\t\t\t   \\___||_||_||_||_||_|\\__|\\__,_||_| |___/\\___|\\__,_||_|  \\__||_||_|  \\_,_|| .__/\n");
	printf("\t\t\t\t                                                                           |_|   \n");
    
//Pattern for design
    for(m=1; m<=4; m++)
    {
        for(n=1; n<=5; n++)
            printf("\t ");
        for(n=1; n<=m-1; n++)
        {
            printf("\t ");
        }
        for(n=1; n<=4-m+1; n++)
        {
            if(n==4-m+1 || m==1 || m==4)
                printf("\t*");
            else
                printf("\t ");
        }
        for(n=1; n<=4-m+1; n++)
        {
            if(n==1 ||m==1 || m==4)
                printf("\t*");
            else
                printf("\t ");
        }
        printf("\n");
    }
    menu(); //to go to menu
}
     
     //Menu
     
     void menu()
     {
	 
    //Menu system
    printf("\t\t\t\t\t\t\t\t---Enter Required choice---");
    printf("\n");
    printf("1. Format\n2. Search\n3. Edit Information\n4. Delete Information\n5. Exit\n\nOption=");
    
    while(c!=6)
    {
    	
    	
    	fflush(stdin);//making it clear or clear input buffer so to not change the other input
    	
    	scanf("%d",&c);
    	
    	if(c==1)//add
        {
            system("cls");
            format();
        }
        else if(c==2)
        {
            system("cls");
          	search();
        }
        else if(c==3)//edit
        {
            system("cls");
            edit();
        }
        else if(c==4)//delete
        {
            system("cls");
            del();
        }
        else if(c==5)
        {
            exit(1);
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}


    //Format writing
    
    void format()
{
    int a;
    char another='y';

    FILE *fp;
    struct Format x;
    printf("CHOOSE FORMAT\n");//how many inputs
    system("cls");
    printf("##Choose Report##\n");
    printf("\n1.Haemotology Report\n2.Lipid Profile\n3.Diabetes Report\n4.Return\n");
    printf("\nChoose option=");
    fflush(stdin);
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        while(another=='y')
	{
                system("cls");
                
			fflush(stdin);
            printf("\nEnter First Name =");
            scanf("%s",x.fname);
            
            
            printf("\nEnter last Name = ");
            scanf("%s",x.lname);
			fflush(stdin);
			
			printf("\nEnter Age = ");
            scanf("%d",&x.age);
            fflush(stdin);
            
            printf("\nEnter phone number = ");
            scanf("%lld",&x.phone);			
            fflush(stdin);
             
            printf("\t\t\t\tAverage");
            printf("\t\t13-17 g/dl");
            printf("\nHaemoglobin = ");
            scanf("%f",&x.hae);
            fflush(stdin);
 			
 			printf("\t\t\t\tAverage");
            printf("\t\t4.0-6.0 millions/cumin");
            printf("\nRBC count = ");
            scanf("%f",&x.RBC);
            fflush(stdin);
             
            printf("\t\t\t\tAverage");
            printf("\t\t0.37-0.54");
            printf("\nHCT = ");
            scanf("%f",&x.HCT);
            fflush(stdin);
            
            printf("\t\t\t\tAverage");
            printf("\t\t140-400mcl");
            printf("\nPlatlet =");
            scanf("%d",&x.plat);
            fflush(stdin);
             
            fp=fopen("report.txt","ab+");
            if(fp==NULL)
            {
                printf("\nFile not available. Press any key to continue! ");
                getch();
                system("cls");
                menu();	
            }
            fwrite(&x,sizeof(struct Format),1,fp);
            printf("\nPRESS Y TO MAKE ANOTHER OR ELSE ESC  ");
            another=getch();
            system("cls");
}
fclose(fp);
system("cls");
format();

            break;
            
            //FOR CHOLESTROL or lipid profile
        	case 2:


        while(another=='y')
	{
                system("cls");


			fflush(stdin);
            printf("\nEnter First Name = ");
            scanf("%s",x.fname);
            
            
            printf("\nEnter last Name = ");
            scanf("%s",x.lname);
			fflush(stdin);
            
            printf("\nEnter Age = ");
            scanf("%d",&x.age);
            fflush(stdin);

            printf("\nEnter phone number = ");
            scanf("%lld",&x.phone);
            fflush(stdin);
            
			printf("\t\t\t\tAverage");
            printf("\t\t35-45mg/dl");
            printf("\nHDL Cholestrol = ");
            scanf("%f",&x.HDL);
            fflush(stdin);
            
			printf("\t\t\t\tAverage");
            printf("\t\t130-159mg/dl");
            printf("\nLDL Cholestrol = ");
            scanf("%f",&x.LDL);
            fflush(stdin);
            
            printf("\t\t\t\tAverage");
            printf("\t\t150-199mg/dl");
            printf("\nTriglyceride = ");
            scanf("%f",&x.Tri);
            fflush(stdin);
            
			 fp=fopen("report.txt","ab+");
            if(fp==NULL)
            {
                printf("\nFile not available. Press any key to continue! ");
                getch();
                system("cls");
                menu();	
            }
            fwrite(&x,sizeof(struct Format),1,fp);
            printf("\n PRESS Y TO MAKE ANOTHER OR ELSE ESC  ");
            another=getch();
            system("cls");
}
fclose(fp);
system("cls");
format();

            break;
            
            //FOR DIABETES
            case 3:


        while(another=='y')
	{
                system("cls");


			fflush(stdin);
            printf("\nEnter First Name = ");
            scanf("%s",x.fname);
            
            
            printf("\nEnter last Name = ");
            scanf("%s",x.lname);
			fflush(stdin);
            
            printf("\nEnter Age = ");
            scanf("%d",&x.age);
            fflush(stdin);

            printf("\nEnter phone number = ");
            scanf("%lld",&x.phone);
            fflush(stdin);
			
			printf("\t\t\t\tAverage");
            printf("\t\t70-110");
            printf("\nGlucose = ");
            scanf("%d",&x.Gluc);
            fflush(stdin);
            
            printf("\t\t\t\tAverage");
            printf("\t\tM(3.5-7.5),F(2.5-6.5)");
            printf("\nUric Acid = ");
            scanf("%d",&x.uric);
            fflush(stdin);
            
            printf("\t\t\t\tAverage");
            printf("\t\t8.5-10.5");
            printf("\nSerum Calcium = ");
            scanf("%d",&x.calc);
            fflush(stdin);

            fp=fopen("report.txt","ab+");
            if(fp==NULL)
            {
                printf("\nFile not available. Press any key to continue! ");
                getch();
                system("cls");
                menu();	
            }
            fwrite(&x,sizeof(struct Format),1,fp);
            printf("\nPRESS Y TO MAKE ANOTHER OR ELSE ESC ");
            another=getch();
            system("cls");
}
fclose(fp);
system("cls");
format();

            break;
            case 4:
            	{
            		system("cls");
            		menu();	
				}
				break;
				
				default:
					{
						system("cls");
						printf("Invalid Option Returned to FORMAT");
						format();
					}
    }
}


//Using Strcmp to compare between words 
void search()
{
	FILE *fp;
	int x=0;
	struct Format f;//to differentiate structure for search
	
	char sname[20];// 								to search first name
	char ssname[20];//								last name
	
	int numb;//										Phone number
	int aage;//										Age
		
	system("cls");
	printf("Search Options!\n\n");
	printf("1.First name\n2.Last name\n3.Age\n4.Phone number\n5.Return\n\n\nOption = ");
    scanf("%d",&e);

    
    switch(e)
    {
    	
    	case 1:
    		fp=fopen("report.txt","rb+");//for reading abt writing file
			if (fp==NULL)
			{
				printf("FILE NOT FOUND!!");
			}
    		system("cls");
   			printf("First Name:");
    		scanf("%s",&sname);
    		
    		while(fread(&f,sizeof(struct Format),1,fp)==1)
    		{
    			if(strcmp(sname,f.fname)==0)
    			{ 	
					x=1;
    				printf("\nFirst name: %s",f.fname);
    				printf("\nLast name: %s",f.lname);
    				printf("\nAge: %d",f.age);
    				printf("\nPhone: %lld",f.phone);
    				if(f.hae!=0)
						{
		    				printf("\nHaemoglobin: %f",f.hae);
		    				printf("\nRBC: %f",f.RBC);
		    				printf("\nHCT: %f",f.HCT);
		    				printf("\nPlatlets: %d",f.plat);
    					}
    			else if(f.HDL!=0)
						{
		    				printf("\nTRI: %f",f.Tri);
    						printf("\nHDL: %f",f.HDL);
    						printf("\nLDL: %f",f.LDL);
    					}
    			else if(f.Gluc!=0)	
    					{
    						printf("\nGlucose: %f",f.Gluc);
    						printf("\nUric Acid: %f",f.uric);
    						printf("\nSerum Calcium: %f",f.calc);
    					
						}
    				
    				printf("\n\n");
    			}
			}
				if(x==0)
				{
					printf("no record found");
				}
			fclose(fp);
			printf("\nPress any key to continue");
			getch();
			system("cls");
			menu();
			break;
			
		case 2:	
		
		fp=fopen("report.txt","rb+");//for reading abt writing file 
			if (fp==NULL)
			{
				printf("FILE NOT FOUND!!");
			}
    		system("cls");
   			printf("Last Name:");
    		scanf("%s",&ssname);//search by last name
    		
    		while(fread(&f,sizeof(struct Format),1,fp)==1)
    		{
    			if(strcmp(ssname,f.lname)==0)
    			{ 	
					x=1;
    				printf("\nFirst name: %s",f.fname);
    				printf("\nLast name: %s",f.lname);
    				printf("\nAge: %d",f.age);
    				printf("\nPhone: %lld",f.phone);
    				if(f.hae!=0)
						{
		    				printf("\nHaemoglobin: %f",f.hae);
		    				printf("\nRBC: %f",f.RBC);
		    				printf("\nHCT: %f",f.HCT);
		    				printf("\nPlatlets: %d",f.plat);
    					}
    			else if(f.HDL!=0)
						{
		    				printf("\nTRI: %f",f.Tri);
    						printf("\nHDL: %f",f.HDL);
    						printf("\nLDL: %f",f.LDL);
    					}
    			else if(f.Gluc!=0)
    					{
    						printf("\nGlucose: %f",f.Gluc);
    						printf("\nUric Acid: %f",f.uric);
    						printf("\nSerum Calcium: %f",f.calc);
    					
						}
    				
    				printf("\n\n");
    			}
			}
				if(x==0)
				{
					printf("no record found");
				}
			
			if(x==0)
				{
					printf("no record found");
				}
				fclose(fp);
				printf("\nPress any key to continue");
				getch();
				system("cls");
				menu();
				break;
				
				case 3:
          	
		  fp=fopen("report.txt","rb+");//for reading abt writing file 
			if (fp==NULL)
			{
				printf("FILE NOT FOUND!!");
			}
    		system("cls");
   			printf("AGE:");
    		scanf("%d",&aage);//To search through age
    		
    			while(fread(&f,sizeof(struct Format),1,fp)==1)
    		{
    			if(f.age==aage)
    			{
    				x=1;
    				printf("\nFirst name: %s",f.fname);
    				printf("\nLast name: %s",f.lname);
    				printf("\nAge: %d",f.age);
    				printf("\nPhone: %lld",f.phone);
    				if(f.hae!=0)
						{
		    				printf("\nHaemoglobin: %f",f.hae);
		    				printf("\nRBC: %f",f.RBC);
		    				printf("\nHCT: %f",f.HCT);
		    				printf("\nPlatlets: %d",f.plat);
    					}
    			else if(f.HDL!=0)
						{
		    				printf("\nTRI: %f",f.Tri);
    						printf("\nHDL: %f",f.HDL);
    						printf("\nLDL: %f",f.LDL);
    					}
    			else if(f.Gluc!=0)
    					{
    						printf("\nGlucose: %f",f.Gluc);
    						printf("\nUric Acid: %f",f.uric);
    						printf("\nSerum Calcium: %f",f.calc);
    					
						}
    				
    				printf("\n\n");
    			}
			}
				if(x==0)
				{
					printf("no record found");
				}
			fclose(fp);
			printf("\nPress any key to continue");
			getch();
			system("cls");
			menu();
			break;
             
          case 4:
          	
		  fp=fopen("report.txt","rb+");//for reading abt writing file 
			if (fp==NULL)
			{
				printf("FILE NOT FOUND!!");
			}
    		system("cls");
   			printf("Phone number:");
    		scanf("%d",&numb);
    		
    			while(fread(&f,sizeof(struct Format),1,fp)==1)
    		{
    			if(f.phone==numb)
    			{
    				x=1;
    				printf("\nFirst name: %s",f.fname);
    				printf("\nLast name: %s",f.lname);
    				printf("\nAge: %d",f.age);
    				printf("\nPhone: %lld",f.phone);
    				if(f.hae!=0)
						{
		    				printf("\nHaemoglobin: %f",f.hae);
		    				printf("\nRBC: %f",f.RBC);
		    				printf("\nHCT: %f",f.HCT);
		    				printf("\nPlatlets: %d",f.plat);
    					}
    			else if(f.HDL!=0)
						{
		    				printf("\nTRI Cholestrol: %f",f.Tri);
    						printf("\nHDL Cholestrol: %f",f.HDL);
    						printf("\nLDL Triglyceride: %f",f.LDL);
    					}
    			else if(f.Gluc!=0)
    					{
    						printf("\nGlucose: %f",f.Gluc);
    						printf("\nUric Acid: %f",f.uric);
    						printf("\nSerum Calcium: %f",f.calc);
    					
						}
    				
    				printf("\n\n");
    			}
			}
				if(x==0)
				{
					printf("no record found");
				}
			fclose(fp);
			printf("\nPress any key to continue");
			getch();
			system("cls");
			menu();
			break;
			
			
			case 5:
            	{
            		system("cls");
            		menu();	
				}
				break;   
             default:
             	{
					getch();
             		menu();
				 }	
	}
}

//Edit file which can edit each report value

void edit()
{
	char ch;
	struct Format temp;
	FILE *fp,*f1;
	printf("_____EDIT_____\n\n");
	printf("Enter phone number:");
	long long int ph;//Uniqueness to be able to edit
	scanf("%lld",&ph);
	fp=fopen("report.txt","rb");
	f1=fopen("temp.txt","wb");
	while(fread(&temp,sizeof(struct Format),1,fp))
	{
		if (ph==temp.phone)
		{
			printf("First name:%s\nEDIT?(y/n)\n\n",temp.fname);
			ch=getch();
			if(ch=='y')
			{
				printf("New First name:");
				scanf("%s",&temp.fname);
				printf("\n");
			}
			
			printf("Last name:%s\nEDIT?(y/n)\n\n",temp.lname);
			ch=getch();
			if(ch=='y')
			{
				printf("\nNew Last name:");
				scanf("%s",&temp.lname);
				printf("\n");
			}
			
			printf("Age:%d\nEDIT?(y/n)\n\n",temp.age);
			ch=getch();
			if(ch=='y')
			{
				printf("\nNew Age:");
				scanf("%d",&temp.age);
				printf("\n");
			}
			
			printf("Phone number:%lld\nEDIT?(y/n)\n\n",temp.phone);
			ch=getch();
			if(ch=='y')
			{
				printf("\nNew Phone number:");
				scanf("%lld",&temp.phone);
					printf("\n");
			}
			
			//For required report
			if(temp.hae!=0)
			{
				printf("Haemoglobin:%f\nEDIT?(y/n)\n\n",temp.hae);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
					scanf("%f",&temp.hae);
					printf("\n");
				}
				
				printf("RBC count:%f\nEDIT?(y/n)\n\n",temp.RBC);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
					scanf("%f",&temp.RBC);
						printf("\n");
				}
				
				printf("HCT:%f\nEDIT?(y/n)\n\n",temp.HCT);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
					scanf("%f",&temp.HCT);
						printf("\n");
				}
			}
			
			//Lipid profile Edit
			
			else if(temp.HDL!=0)
			{
				printf("HDl Cholestrol:%f\nEDIT?(y/n)\n\n",temp.HDL);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
				scanf("%f",&temp.Tri);
					printf("\n");
				}
				
				printf("LDL Cholestrol:%f\nEDIT?(y/n)\n\n",temp.LDL);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
					scanf("%f",&temp.LDL);
						printf("\n");
				}
				
				printf("Triglyceride:%f\nEDIT?(y/n)\n\n",temp.Tri);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
					scanf("%f",&temp.Tri);
						printf("\n");
				}
			}
			
			//Diabetes Edit
			else if(temp.Gluc!=0)
			{
				printf("Glucose:%f\nEDIT?(y/n)\n\n",temp.Gluc);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
				scanf("%f",&temp.Gluc);
					printf("\n");
				}
				
				printf("Uric acid:%f\nEDIT?(y/n)\n\n",temp.uric);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
					scanf("%f",&temp.uric);
						printf("\n");
				}
				
				printf("Serum Glucose:%f\nEDIT?(y/n)\n\n",temp.calc);
				ch=getch();
				if(ch=='y')
				{
					printf("\nNew value:");
					scanf("%f",&temp.calc);
					printf("\n");
				}
			}
			
		}
		fwrite(&temp,sizeof(struct Format),1,f1);
	}
	fclose(fp);
	fclose(f1);
	fp=fopen("report.txt","wb");
	f1=fopen("temp.txt","rb");
	while(fread(&temp,sizeof(struct Format),1,f1))
	{
		fwrite(&temp,sizeof(struct Format),1,fp);
	}
	system("cls");
	menu();
   
}

//Delete file
/*	Step1.Make copy of report 
	Step2.Delete Report
	Step3.rename to original
*/
void del()
{
	long long int bufferphone;
	struct Format f;
	FILE *fp,*gp;
	printf("****_____DELETE RECORD!!_____****\n\n");
	fflush(stdin);  
    printf("Enter Phone Number:");
    scanf("%lld",&bufferphone);
    
    fp=fopen("report.txt","rb+");//for reading abt writing file 
			if (fp==NULL)
			{
				printf("FILE NOT FOUND!!");
			}
	gp=fopen("reportok.txt","ab+");//for reading abt writing file 
			if (gp==NULL)
			{
				printf("FILE NOT FOUND!!");
			}
	while(fread(&f,sizeof(f),1,fp)==1)
	{
		if(bufferphone!=f.phone)
		{
			fwrite(&f,sizeof(f),1,gp);
			printf("Record deleted!\n");	
		}
	}
fclose(fp);
fclose(gp);
remove("report.txt");
rename("reportok.txt","report.txt");
menu();
}



    	
 
    	
	







    
    
    




