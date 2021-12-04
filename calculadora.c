#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float num1,num2,total;
	char op;
	while(op!='q')
	{
		printf("digite 1 para somar\n");
		printf("digite 2 para substruir\n");
		printf("digite 3 para multiplicacao\n");
		printf("digite 4 para divisao\n");
		printf("digite 'Q'para fechar o programa\n");
		scanf("%c",&op);
		switch(op)
		{
			
			case '1':
				printf("digite o primeiro numero\n");
				scanf("%f",&num1);
				printf("digite o segundo numero\n");
				scanf("%f",&num2);
				total=num1+num2;
				printf("o total e %2f\n",total);
				break;
			case '2':
				printf("digite o primeiro numero\n");
				scanf("%f",&num1);
				printf("digite o segundo numero\n");
				scanf("%f",&num2);
				total=num1-num2;
				printf("o total e %2f\n",total);
				break;
			case'3':
				printf("digite o primeiro numero\n");
				scanf("%f",&num1);
				printf("digite o segundo numero\n");
				scanf("%f",&num2);
				total=num1*num2;
				printf("o total e %2f\n",total);
				break;
			case'4':
				printf("digite o primeiro numero\n");
				scanf("%f",&num1);
				printf("digite o segundo numero\n");
				scanf("%f",&num2);
				total=num1/num2;
				printf("o total e %2f\n",total);
				break;	
		}
    }
	
}

