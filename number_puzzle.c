#include<stdio.h>
#include<conio.h>  
#include<stdlib.h>
int main()
{      
int i=0,j=0,i1,j1;    
char arr[3][3]={'1','2','3','4','5','6','7','8','-'},x;   

printf("\n\n\n\t\t\t\t\t\t\t PUZZLE GAME \n\n\n\t\t\t\t [UP : W \t DOWN : S \t LEFT : A \t RIGHT : D]\n\n\n\n\n");  
    
for(i=0;i<3;i++){    
 for(j=0;j<3;j++){    
   printf("\t\t\t    %c \t",arr[i][j]);    
 }    
 printf("\n\n");
}
 /*int y= x; printf("%d",y);*/
 
 while(1)
 {
 
 	check :
 x=getch() ;
 
 if(x=='w'||x=='W'||x=='8')
 {
 	for(i=0;i<3;i++)
	 {    
 for(j=0;j<3;j++)
 {    
  if (arr[i][j]=='-')
  {
  	i1=i;j1=j;
	} 
}
}
	if(i1==0) 
	 goto check;
	if(i1==1)
	{
		arr[1][j1]=arr[0][j1];
	   arr[0][j1]='-';
	   	
	 }
	 
	if(i1==2)
	{
		arr[2][j1]=arr[1][j1];
	   arr[1][j1]='-';
	   	
	 }  
    
//	printf("\n\n________________________________________________________\n\n");
system("CLS");printf("\n\n\n\t\t\t\t\t\t\t PUZZLE GAME \n\n\n\t\t\t\t [UP : W \t DOWN : S \t LEFT : A \t RIGHT : D]\n\n\n\n\n");

    
	for(i=0;i<3;i++){    
 for(j=0;j<3;j++){    
   printf("\t\t\t    %c \t",arr[i][j]);    
 }    
 printf("\n\n");
} 


}








if(x=='s'||x=='S'||x=='2')
 {
 	for(i=0;i<3;i++)
	 {    
 for(j=0;j<3;j++)
 {    
  if (arr[i][j]=='-')
  {
  	i1=i;j1=j;
	} 
}
}
	if(i1==2) 
	 goto check;
	if(i1==0)
	{
		arr[0][j1]=arr[1][j1];
	   arr[1][j1]='-';
	   	
	 }
	 
	if(i1==1)
	{
		arr[1][j1]=arr[2][j1];
	   arr[2][j1]='-';
	   	
	 }  
    
//	printf("\n\n________________________________________________________\n\n");
system("CLS");printf("\n\n\n\t\t\t\t\t\t\t PUZZLE GAME \n\n\n\t\t\t\t [UP : W \t DOWN : S \t LEFT : A \t RIGHT : D]\n\n\n\n\n");

	for(i=0;i<3;i++){    
 for(j=0;j<3;j++){    
   printf("\t\t\t    %c \t",arr[i][j]);    
 }    
 printf("\n\n");
} 


}







 if(x=='a'||x=='A'||x=='4')
 {
 	for(i=0;i<3;i++)
	 {    
 for(j=0;j<3;j++)
 {    
  if (arr[i][j]=='-')
  {
  	i1=i;j1=j;
	} 
}
}
	if(j1==0) 
	 goto check;
	if(j1==1)
	{
		arr[i1][1]=arr[i1][0];
	   arr[i1][0]='-';
	   	
	 }
	 
	if(j1==2)
	{
		arr[i1][2]=arr[i1][1];
	   arr[i1][1]='-';
	   	
	 }  
    
//	printf("\n\n________________________________________________________\n\n");
system("CLS");printf("\n\n\n\t\t\t\t\t\t\t PUZZLE GAME \n\n\n\t\t\t\t [UP : W \t DOWN : S \t LEFT : A \t RIGHT : D]\n\n\n\n\n");

	for(i=0;i<3;i++){    
 for(j=0;j<3;j++){    
   printf("\t\t\t    %c \t",arr[i][j]);    
 }    
 printf("\n\n");
} 


}







 if(x=='d'||x=='D'||x=='6')
 {
 	for(i=0;i<3;i++)
	 {    
 for(j=0;j<3;j++)
 {    
  if (arr[i][j]=='-')
  {
  	i1=i;j1=j;
	} 
}
}
	if(j1==2) 
	 goto check;
	if(j1==0)
	{
		arr[i1][0]=arr[i1][1];
	   arr[i1][1]='-';
	   	
	 }
	 
	if(j1==1)
	{
		arr[i1][1]=arr[i1][2];
	   arr[i1][2]='-';
	   	
	 }  
    
	//printf("\n\n________________________________________________________\n\n");
	system("CLS");printf("\n\n\n\t\t\t\t\t\t\t PUZZLE GAME \n\n\n\t\t\t\t [UP : W \t DOWN : S \t LEFT : A \t RIGHT : D]\n\n\n\n\n"); 

	for(i=0;i<3;i++){    
 for(j=0;j<3;j++){    
   printf("\t\t\t    %c \t",arr[i][j]);    
 }    
 printf("\n\n");
} 


}







}
return 0;  
}
