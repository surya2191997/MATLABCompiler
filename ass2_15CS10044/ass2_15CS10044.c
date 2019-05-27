# include "myl.h"



int printFlt(float f)
{
	char buff[100];
	int intpart = (int)f;
	float decpart = f - (float)intpart ;
	if(decpart < 0 ) decpart = -decpart;
	if(intpart < 0 ) intpart = -intpart;
	int i = 0, l = 0, r, j, temp, bytes;


	
	if(f<0) { buff[i++] = '-'; l = 1; } 

	// Convert integer part to string
	do
	{

		buff[i++] = (intpart%10) + '0';
		intpart/=10;
	
	}while(intpart);

	r = i-1;  
    while (l < r)
    {
        temp = buff[l];
        buff[l] = buff[r];
        buff[r] = temp;
        l++; r--;
    }

     // Add Decimal Point
    buff[i++] = '.';
    
    
    // Multiplying decimal part by 10^6
    for(j=0;j<6;j++)
    	decpart = 10*decpart;

    intpart = (int) decpart;
   
    // Convert decimal part to string
    l = i;
    while(intpart)
	{
		buff[i++] = (intpart%10) + '0';
		intpart/=10;
	}

	while(i - l  < 6)
		buff[i++] = '0';

	r = i-1;
    
    while (l < r)
    {
        temp = buff[l];
        buff[l] = buff[r];
        buff[r] = temp;
        l++; r--;
    }
    
    

    buff[i]='\n';
	bytes = i+1;
	
	__asm__ __volatile__ (
	"movl $1, %%eax \n\t"
	"movq $1, %%rdi \n\t"
	"syscall \n\t"
	:
	:"S"(buff), "d"(bytes)
	) ; 
	

    return i;

}


int printStr(char* s)
{


	char buff[100];
	int i=0,bytes;

	// copy str into buff array
	while(s[i]!='\0')
	{	
		buff[i] = s[i];
		i++;
	}
	bytes = i;

	__asm__ __volatile__ (
	"movl $1, %%eax \n\t"
	"movq $1, %%rdi \n\t"
	"syscall \n\t"
	:
	:"S"(buff), "d"(bytes)
	) ;

	return i;


}


int printInt(int n)
{
	
	char buff[100], zero='0';
	
	int i=0, j, k, bytes;
	
	// to handle the case when n is 0
	if(n == 0) 
		buff[i++]=zero;

	else
	{
		// if n is negative append negative sign
		if(n < 0) 
		{
			buff[i++]= '-';
			n = -n;
		}

		// convert int to string
		while(n)
		{
			int dig = n%10;
			buff[i++] = (char)(zero+dig);
			n /= 10;
		}		


		if(buff[0] == '-') j = 1;
		else j = 0;
		
		k=i-1;

		while(j<k)
		{
			char temp=buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}

	buff[i]='\n';
	bytes = i+1;
	
	__asm__ __volatile__ (
	"movl $1, %%eax \n\t"
	"movq $1, %%rdi \n\t"
	"syscall \n\t"
	:
	:"S"(buff), "d"(bytes)
	) ; 
	

	
	return i;
	
}

int readInt(int* n)
{
	
	char Buff[10];
	int bytes =  10;
	
	__asm__ __volatile__ (
	"movl $0, %%eax \n\t"
	"movq $1, %%rdi \n\t"
	"syscall \n\t"
	:
	:"S"(Buff), "d"(bytes)
	) ;

	
    int res = 0;  
    int sign = 1;  
    int i = 0;  
  
  	
    
    if (Buff[0] == '-')
    {
     	sign = -1;
        i++; 
    }
  
    
   	for (; Buff[i]!='\n'; i++)
    {
    	
        if ( !(Buff[i] >= '0' && Buff[i] <= '9') ) // check for valid digit
            break;   
        	res = res*10 + Buff[i] - '0';
    }
  
    *n = sign*res;
    return OK;
	

}


int readFlt(float* f)
{

	char Buff[32];
	int bytes = 32;
	__asm__ __volatile__ (
	"movl $0, %%eax \n\t"
	"movq $1, %%rdi \n\t"
	"syscall \n\t"
	:
	:"S"(Buff), "d"(bytes)
	) ;


	float res = 0,k=0;  
    int sign = 1;  
    int i = 0;  
  
  	
    
    if (Buff[0] == '-')
    {
     	sign = -1;
        i++; 
    }
  
    
   	for (; Buff[i]!='\n'; i++)
    {
    	
        if ( !(Buff[i] >= '0' && Buff[i] <= '9') ){
            if(Buff[i] == '.')
            	 k = 1; 
            	 break; 
           

        }

        	res = res*10 + Buff[i] - '0';

    }

    float dec = 0.1;
    if(k==1)
    { 
    
    i++;
    
    for (; Buff[i]!='\n'; i++)
    {
    	
        if ( !(Buff[i] >= '0' && Buff[i] <= '9') )
            break;

        	res = res + (Buff[i] - '0')*dec;
        	dec = dec*dec;

    }
	
	}


  
    *f = sign*res;
    return OK;
	


}

