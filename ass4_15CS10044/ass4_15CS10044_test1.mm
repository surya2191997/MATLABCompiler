int func(Matrix arr[5][5], int n);		// ALL functions must be declared before defining, this is a constraint of the translator
int func(Matrix arr[5][5], int n) {
       int prod = 0, i, j = 9;
	
       arr = arr.';       // matrix transpose is supported
       arr = arr*9;  	 // multiplication of matrix by int supported
       for(i = 0; i < n; i++) {
               while(j >= 0) {
                       prod = prod*n + arr[i][j];
		       j--;
               }
       }
       return prod;
}





