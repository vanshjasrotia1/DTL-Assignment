#include<stdio.h>
#include<math.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mult(int a,int b)
{
	return a*b;
}
int expo(int a,int b)
{
	return pow(a,b);
}

int binary_to_decimal(const char *binary) {
    int decimal = 0;
    int position = 1;
    
    for (int i = strlen(binary) - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += position;
        }
        position *= 2;
    }
    
    return decimal;
}

// Function to convert decimal to binary
void decimal_to_binary(int decimal) {
    int binary[32];
    int i = 0;
    
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}


int main()
{
	int a,b;
	printf("Enter:");
	scanf("%d %d",&a,&b);
	
	add(a,b);
	printf("%d\n",add(a,b));
	sub(a,b);
	printf("%d\n",sub(a,b));
	mult(a,b);
	printf("%d\n",mult(a,b));
	expo(a,b);
	printf("%d\n",expo(a,b));

	printf("a to Binary:\n");
    decimal_to_binary(a);
    printf("b to Binary:\n");
    decimal_to_binary(b);
	return 0;
}
