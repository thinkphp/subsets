#include <stdio.h>
#define FIN "subsets.in"
#define FOUT "subsets.out"
#define MAXSIZE 100

void performSubsets(int n, int k){

     int i, j, s, v[ MAXSIZE ]; 

     freopen(FOUT, "w", stdout);

     
     memset(v, 0, sizeof( v ));

     do {

        v[ n - 1 ]++;

        for(i = n - 1; i >= 1; i--) {

            if(v[ i ] > 1) {

               v[ i ] -= 2;

               v[ i - 1 ] += 1;  
            }
        }

        s = 0;

        for(j = 0; j < n; j++) s += v[j];
        
        for(j = 0; j < n; j++) 

            if( v[ j ] && s == k) printf("%d ", (j + 1));

       if(s == k) printf("\n");

     } while(s < n);     

    fclose( stdout );      
}

int main() {

    int n, k; 

    freopen(FIN, "r", stdin);

    scanf("%d %d", &n, &k);

    fclose( stdin );

    performSubsets(n,k);
     
}
