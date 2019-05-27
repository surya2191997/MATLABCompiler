#include "myl.h"

int main()
{

int n; float f;
printStr("Enter an integer\n");

if(!readInt(&n))
{
printStr("Read integer is:\n");
printInt(n);
}
else
printStr("Failed to read!");


printStr("Enter a float\n");

if(!readFlt(&f))
{
printStr("Read float is:\n");
printFlt(f);
}
else
printStr("Failed to read!");


}
