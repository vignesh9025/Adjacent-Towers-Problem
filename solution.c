#include<stdio.h>
int main()
 {
  unsigned long int h[100000], n,i,f,current,cf,cb,max,area[1000000];
  long int b;
  scanf("%lu",&n);
  for(i=0;i<n;i++)
   {
    scanf("%lu ",&h[i]);
   }
 for(i=0;i<n;i++)
  {
  	 current=h[i];
  	 cf=1;
  	 cb=1;
  	 for(f=i+1;f<n;f++)
  	  {
  	  	 if(h[f]>=current)
  	  	  {
  	  	  	 cf++;
  	  	  }
  	  	 else
  	  	  {
  	  	  	 break;
  	  	  }
  	  }
  	 for(b=i-1;b>=0;b--)
  	  {
  	  	if(h[b]>=current)
  	  	 {
  	  	 	cb++;
  	  	 }
  	  	 else
  	  	 {
  	  	 	break;
  	  	 }
  	  }
  	  area[i]=(cf+cb-1)*h[i];
  }	  
   max=area[0];
   for(i=1;i<n;i++)
    {
     if(area[i]>max)
      {
       max=area[i];
      }
    }
  printf("\n%lu",max);      
  return 0;
 }  
