#include<stdio.h>
#include<conio.h>
main(){
	FILE *fp;
	char ch;
	int Nol=0, Not=0, Nob=0, Noc=0, Now=0, word=0;
	fp = fopen("file.txt","r");
	while(1)
	{
	  ch=fgetc(fp);
	  if(ch==EOF){
	  	break;
	  }	
	  Noc++;
	  if(ch==' '){
	  	Nob++;
	  }
	  if(ch=='\n'){
	  	Nol++;
	  }
	  if(ch=='\t'){
	  	Not++;
	  }
      if (ch == ' ' || ch == '\n' || ch == '\t') {
        if (word) {
            Now++;
            word = 0;
        }
      } else {
            word = 1;
      }
    }
    if (word) {
      Now++;
    }

    
	fclose(fp);
	printf("Number of charecters = %d\n",Noc);
	printf("Number of blanks = %d\n",Nob);
	printf("Number of tabs = %d\n",Not);
	printf("Number of lines = %d\n",Nol);
	printf("Number of words = %d",Now);
	getch();	
}
