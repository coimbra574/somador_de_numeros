/* Somador de numeros
 *
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

float soma=0.0, fat=1;
char buff_temp[100], buff_anterior[100];
int i=0, j=0,n, a,k,flag_float=0,soma_fatorial=0;
char c,d;

for(k=0; k<100; k++){
buff_temp[k]=' ';
} 

while(c!='\n'){
	c=getchar();
	buff_anterior[j]=c;
	j++;

	if(((c>=48 && c <=57) || c=='.') && (j==1 || buff_anterior[j-2]==' ')){
		while((c>=48 && c<=57)||c=='.'){
			if(c=='.'){
			flag_float=1;
			}

			buff_temp[i]=c;
			i++;
			c=getchar();
			buff_anterior[j]=c;
			j++;
		}
	n=atoi(buff_temp);

		if(c=='!' && flag_float==0 && n>0){
			fat=1;
			for(k=1;k<=n;k=k+1){fat=fat*k;}
			soma_fatorial = soma_fatorial+fat;
	
			c=getchar();
			buff_anterior[j]=c;
			j++;
	
			i=0;
			for(k=0;k<100;k++){
			buff_temp[k]='0';
			}
		}

		if(c==' ' || c=='\n'){
			soma=soma+atof(buff_temp);
		}
	}
	i=0;
	flag_float=0;
	for(k=0;k<100;k++){
		buff_temp[k]=' ';
	}
}
soma=soma+soma_fatorial;
printf("%.2f\n", soma);

  return 0;
}
