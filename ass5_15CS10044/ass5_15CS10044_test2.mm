int printInt(int num);
int readInt(int *a);
int printStr(char *b);
int readStr(char* c);
void printStr_(int d);


int main();					// ALL functions must be declared before defining, this is a constraint of the translator




int main()
{

int a,i,j,k;



Matrix m1[2][2];
Matrix m2[2][2];
Matrix m3[2][2];

printStr_(1);

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
readInt(&a);
m1[i][j] = a;
}
}

printStr_(2);

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
readInt(&a);
m2[i][j] = a;
}
}


printStr_(2);

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
readInt(&a);
m3[i][j] = a;
}
}


m3 = (m1 + m2)*m3;

printStr_(8);

for(i=0;i<2;i++)
for(j=0;j<2;j++)
printInt(m3[i][j]);




return 0;








}


