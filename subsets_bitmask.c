#include <stdio.h>
#include <math.h>

//prototype
void generate_subsets(char *s, int size);

int main() {

 char set[] = {'a','b','c'};

 generate_subsets(set, 3);

 return(0);
}

void generate_subsets(char *s, int set_size) {
 
     int totalSubsets = pow(2, set_size), 
         i, j;

     for(i = 0; i < totalSubsets; ++i) {

         for(j = 0; j < set_size; j++) {

             if(i & (1<<j)) {
               
                printf("%c",s[j]);    
             }
         }  
         printf("\n");
     }
}
