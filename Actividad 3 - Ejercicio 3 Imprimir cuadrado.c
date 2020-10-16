int main (){
	char carac = '*', carac2 = '-', carac3 = '+';
	int fila = 15;
	int colu = 15;
	for(fila = 1; fila <=10; fila+=1)
	{
		for (colu = 1; colu <= 10; colu= colu+1){
		if (fila == 1 || fila == 10){
			if(fila==1 && colu ==1 || fila == 1 && colu ==10 || colu ==1 || fila == 10 && colu ==10||fila==1&&colu==1)
			{
				printf("%c", carac3);
			}else {
				printf("%c", carac2);
			}
		}else{
			if(colu == 1 || colu == 10)
			{
				printf("%c", carac);
			}else{
				printf(" ");
			}
		}
		}  printf ("\n");
			}
		return 0;
	}
	
	
	
	
	


