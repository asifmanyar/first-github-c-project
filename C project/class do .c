 # include<stdio.h>
 main ()
 {
 	int i=1,n,fact=1;
 	printf("\n enter the n=");
 	scanf("%d",&n);
 	do
 	{
 		fact=fact*i;
 		i++;
 		
	 }
	 while(i<=n);
	 printf(
	 "\n fact=%d",fact);
}

 	
