#include<stdio.h>
int main()
{ int sn=500,a1=0,an=0,print=0;
  for(a1=1;a1<250;a1++) 
	{
	     for(an=30;(2*sn)>=(a1+an)*(an-a1+1);an++)
         {
		   if((2*sn)==(a1+an)*(an-a1+1))
  		    {   
			    for(print=a1;print<=an;print++)
  		         { printf("%-2d ",print);
                 }
                  printf("\n");
            }
	    }
   }
return 0;
 } 

