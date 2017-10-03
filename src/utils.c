#include "utils.h"
#include<stdio.h>
#include<string.h>


void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
	


   char * buf=NULL;
   buf = (char*)malloc(1000);
   strcpy(buf,command);

   
   char *p;
   int n=0;
   (*argv)=(char**)malloc(100*sizeof(char*));
   (*argv)[n] = (char*)malloc(100*sizeof(char));
  
  
   
   p=strtok(buf,"' ',\n, \t");

   while(p != NULL)
  {
    
    strcpy((*argv)[n],p);
    ++n;
    (*argv)[n]=(char*)malloc(100*sizeof(char));
    p=strtok(NULL, "' ',\n,\t");
  }
  *argc=n;
  free(buf);



    
}
