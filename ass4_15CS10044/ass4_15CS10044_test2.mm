Matrix a[2][3] = {1.0,2.0,9.0;3.0,4.0,8.0};
int main();					// ALL functions must be declared before defining, this is a constraint of the translator
int func(Matrix b[2][3], int i);

int func(Matrix b[2][3], int i)
{


b = a.' 	// ok since a.' is of 3X2
b = b*i;
b = a - b	// invalid as dimensions of matrix are not same, will show error along with line number in the program file

}


int main()
{
int k =9;
Matrix b[3][2];
func(b,k);

}


