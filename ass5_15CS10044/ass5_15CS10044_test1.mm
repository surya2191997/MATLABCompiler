int printInt(int num);
int readInt(int *a);
int printStr(char *b);
int readStr(char* c);
void printStr_(int d);


int main();					// ALL functions must be declared before defining, this is a constraint of the translator

int fact(int n);

int fact(int n)
{

if(n==1) return 1;
return n*fact(n-1);

}



int main()
{

int a,k;
printStr_(6);

readInt(&a);
k = fact(a);

printStr_(7);
printInt(k);

}
