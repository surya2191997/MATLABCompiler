int printInt(int num);
int readInt(int *a);
int printStr(char *b);
int readStr(char* c);
void printStr_(int d);


int main();					// ALL functions must be declared before defining, this is a constraint of the translator




int main()
{

// program to find sum of eigen values of a 4 X 4 matrix


int i,j, sum = 0,a;

Matrix m[4][4];
printStr_(11);

for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
readInt(&a);
m[i][j] = a;
}
}


for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(i==j)
sum = sum + m[i][j];
}
}


printStr_(12);
printInt(sum);


}


