#include <stdio.h>
#include <string.h>
 
typedef unsigned int uint;
 
uint pow2(uint a, uint b) {
 
	   uint res = 1;
 
	   for(uint i = 1; i <= b; ++i) {
 
	   	   res = res * a;
	   }
 
	   return res;
}
 
 
void _generate_subsets(uint dim) {
     
	 uint n = pow2(2, dim);

     char *fout = "submultimi.out";
 
     freopen(fout, "w", stdout);
 
     for (int i = 1; i < n; ++i)
     {
     	for (int j = 0; j < dim; ++j)
     	{
     		 if(i & (1<<j)) {
                
                printf("%d ", (j + 1));
     		 }
     	}
 
     	printf("\n");
     }
 
}
 
 
int main(int argc, char const *argv[])
{
	char *fin = "submultimi.in";
 
    uint len;
 
    freopen(fin, "r", stdin);
 
    scanf("%d",&len); 
 
 	_generate_subsets( len );
 
	return 0;
}
