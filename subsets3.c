#include <stdio.h>
int vec[9],i,n,s;
void main() {

     printf("\nFinding all the subsets of a set:\n");
     scanf("%d",&n);

     for(i=0;i<n;i++) {
	 vec[i++]=0;
     }

     do{

       vec[n-1]++;

       for(i=n-1;i>0;i--) {

	   if(vec[i]>1) {
	      vec[i] -=2;
	      vec[i-1] +=1;
	   }
       }

       s = 0;

       for(i=0;i<n;i++) {
	   s += vec[i];
       }

       for(i=0;i<n;i++) {

	   if(vec[i]){
	      printf("%d ",i+1);
	   }
       }

       printf("\n");

     }while(s<n);

     printf("{empty set}");
}
