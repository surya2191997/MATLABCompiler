int printInt(int num);
int readInt(int *a);
int printStr(char *b);
int readStr(char* c);
void printStr_(int d);


int main();					// ALL functions must be declared before defining, this is a constraint of the translator




int main()
{

Matrix m[3][3];

int i,j,k,a, largest;

printStr_(9);

for(i=0;i<3;i++)
{

for(j=0;j<3;j++)
{
readInt(&a);
m[i][j] = a;

if(i==0 && j==0)
largest = m[0][0];

if(largest < m[i][j])
largest = m[i][j];
}


}

printStr_(10);
printInt(largest);

return 0;

}
