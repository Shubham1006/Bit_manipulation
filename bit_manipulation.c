#include <stdio.h>

	
// Logic to convert num into bin format
void convertbin(int num)
{
	char i = 0, bin[32] = {0};

	while(num != 0)
	{
	    if(1 & num)
	    {
	        bin[i] = 1;
	    }
	    else
	    {
	        bin[i] = 0;
	    }

  	    num = num >> 1;  
	    i++;
	}
	
	printf("no of bits:%d bin :", i);
	
	for(char j = i-1; j >= 0; j--)
	{
	    printf(" %d", bin[j]);
	}
}

int setbit(int num, char bit_pos)
{
    num = num | (1 << bit_pos);
    
    printf("num after setting bit:%d is %d\n",bit_pos, num);
    
    return num;
}

int clearbit(int num, char bit_pos)
{
    num = num & (~(1 << bit_pos));

    printf("num after clear  bit:%d is %d\n",bit_pos, num);
        
    return num;
}


void checkBitSetReset(int num, char bit_pos)
{
    if((num >> bit_pos) & 1)
    {
        printf("bit:%d is set\n", bit_pos);
    }
    else
    {
        printf("bit:%d is clear\n", bit_pos);
    }
}

int togglebit(int num, char bit_pos)
{
    num = num ^ (1 << bit_pos);
    
    printf("num after toggle bit:%d is %d\n",bit_pos, num);
    
    return num;
}

void calcsetbits(int num)
{
    char i = 0;
    while(num != 0)
    {
        if(1 & num)
        {
            i++;
        }
        
        num = num >> 1;
    }
    
    printf("total set bits: %d", i);
}

int main(void) {

	int num;
	
	num = 4;

	convertbin(num);
	printf("\n");
	num = setbit(num, 0);
	checkBitSetReset(num, 0);
	num = togglebit(num, 0);
	num = togglebit(num, 0);
	//num = clearbit(num, 0);
	//num = togglebit(num, 1);
	calcsetbits(num);
	
	return 0;
}

