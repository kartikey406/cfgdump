//driver module for testing
//check header files for method declarations
//All the inputs are static right now (Edit code in switch cases to get input dynamically)


#include "search.h"
#include<stdio.h>
#include<stdlib.h>

main() {
	//declaring variables
	//for windows use drive paths like char * initPath="E:\\";//
<<<<<<< HEAD
        char * initPath="/root/cfgdump-master/"; //reference to start search
=======
        char * initPath="/home/bhaskar/Documents/programming/summer_2015/"; //reference to start search
>>>>>>> 372117e07f2a484649b0d64c981c45447553d538
        DIR *currentDirectory; //creating refernce to directory

	
	
	//using switch cases to perform tasks
	int i;
<<<<<<< HEAD
	char  command[20];
	
	
	FILE *fp;
	FILE *fd;
	
	
	char c;
=======
>>>>>>> 372117e07f2a484649b0d64c981c45447553d538
	
	//perform tasks bases upon i values
	/*
		0. Exit the driver 
		1. Searching Exe installation path
		2. Searching for a particular file in some directory structure
		3. Running a command through a spawned process and producing a file
		4. Zip up the contents of the file using https://code.google.com/p/miniz/ library and ask user for password
		5. Encrypt the file using http://www.cryptopp.com/ library
	*/
	
	while(1) {
		//priing choices on console
        	printf("\n\n0. Exit the driver\n1. Searching Exe installation path\n2. Searching for a particular file in some directory structure\n3. Running a command through a spawned process and producing a file\n4. Zip up the contents of the file using https://code.google.com/p/miniz/ library and ask user for password\n5. Encrypt the file using http://www.cryptopp.com/ library\n\n\n");
		 scanf("%d",&i);

		switch(i) {
			case 0:
				exit(0);
	
			case 1:
				printf("\n\n");
				//directory search (in case of exe need to look up for directory)
				printf("Searching directory\n");
				currentDirectory=opendir(initPath);
				searchExe(currentDirectory,"idm",initPath); //start the search now
				printf("\n\n");
				break;

			case 2:
				printf("\n\n");
				//file search 
				printf("Searching file\n");
				currentDirectory=opendir(initPath);
				searchFile(currentDirectory,"testfile",initPath); //start the search now
				printf("\n\n");
				break;
<<<<<<< HEAD
			case 3:
				printf("spawned process enter the command whose output will be saved in a file");
				scanf("%s",command);
				
				fd=fopen("g.txt","w");
				fp=popen(command,"r");
				c=fgetc(fp);
				while(c!=EOF)
				{
				putc(c,fd);
				c=fgetc(fp);
				}
=======

			case 3:
				printf("\n\n");
				printf("Spawned process\n");
				printf("\n\n");
>>>>>>> 372117e07f2a484649b0d64c981c45447553d538
				break;

			default:
				printf("Go for some INT in valid range man \n");
				break;

		}
	}


}
