/*9 - Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para 
otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual 
cada usuário respondia:
- o elevador que utilizava com mais frequência;
- o período que utilizava o elevador, entre:
- “M” = matutino;
- “V” = vespertino;
- “N” = noturno.
Construa um algoritmo que calcule e imprima:
- qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
- qual o período mais usado de todos e a que elevador pertence;
- qual a diferença percentual entre o mais usado dos horários e o menos usado;
- qual a percentagem sobre o total de serviços prestados do elevador de média utilização*/

#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    
    char elevador,periodo;//switchs
    int i;//for
    int cont_a=0,cont_am=0,cont_av=0,cont_an=0;//contadores A
    int cont_b=0,cont_bm=0,cont_bv=0,cont_bn=0;//contadores B
    int cont_c=0,cont_cm=0,cont_cv=0,cont_cn=0;//contadores C
    int cont_m=0,cont_v=0,cont_n=0;//Contadores períodos
    float prct_a, prct_b, prct_c,diferenca_prct,prct_media;//porcentagem dos elevadores
    
        printf("Responda a pesquisa a seguir, sendo:\n");
        printf("\n   Elevadores    |     Períodos\n");   
		printf("a - Elevador A;  |  m - Matutino;\n");
        printf("b - Elevador B;  |  v - Vespertino;\n");
        printf("a - Elevador C.  |  n - Noturno.");
        printf("\n\n=======================================================================================================================");
        
        for(i=1; i<=50; i++)
        {
        	printf("\n\nQual elevador você utiliza com maior frequência (a, b ou c): ");
            scanf(" %c",&elevador);
            
            printf("Em qual período você utiliza com maior frequência (m, v ou n): ");
            scanf(" %c",&periodo);
            
            //ELEVADOR A
            if(elevador=='a'&&periodo=='m')
            {
            	cont_a++;
            	cont_m++;
            	cont_am++;
			}
            else if(elevador=='a'&&periodo=='v')		
            {
            	cont_a++;
            	cont_v++;
            	cont_av++;
			}		
            else if(elevador=='a'&&periodo=='n')		
            {
            	cont_a++;
            	cont_n++;
            	cont_an++;
			}	    
		    
		    //ELEVADOR B
		    if(elevador=='b'&&periodo=='m')
            {
            	cont_b++;
            	cont_m++;
            	cont_bm++;
			}
            else if(elevador=='b'&&periodo=='v')		
            {
            	cont_b++;
            	cont_v++;
            	cont_bv++;
			}		
            else if(elevador=='b'&&periodo=='n')		
            {
            	cont_b++;
            	cont_n++;
            	cont_bn++;
			}
			
			//ELEVADOR C
			if(elevador=='c'&&periodo=='m')
            {
            	cont_c++;
            	cont_m++;
            	cont_cm++;
			}
            else if(elevador=='c'&&periodo=='v')		
            {
            	cont_c++;
            	cont_v++;
            	cont_cv++;
			}		
            else if(elevador=='c'&&periodo=='n')		
            {
            	cont_c++;
            	cont_n++;
            	cont_cn++;
			}  
		}
		
		printf("\n\n=======================================================================================================================");
		
		//PORCENTAGEM PARA CÁLCULOS
		prct_a=(cont_a*100)/50;
		prct_b=(cont_b*100)/50;
		prct_c=(cont_c*100)/50;
		
		//*ELEVADOR MAIS USADO*
		    //ELEVADOR A MAIS USADO
		if(cont_a>cont_b&&cont_a>cont_c)
		{
			if(cont_am>cont_av&&cont_am>cont_an)
			{
		        printf("\n\nO elevador A é o mais utilizado e seu maior fluxo se concentra no período matutino.");
		    } 
		    else if(cont_av>cont_am&&cont_av>cont_an)
		    {
		        printf("\n\nO elevador A é o mais utilizado e seu maior fluxo se concentra no período vespertino.");
	      	}
	      	else if(cont_an>cont_am&&cont_an>cont_av)
		    {
		        printf("\n\nO elevador A é o mais utilizado e seu maior fluxo se concentra no período noturno.");
	      	}
	      	
	      	//diferença percentual entre o mais usado dos horários e o menos usado
	      	if(cont_b>cont_c)
	      	{
	      	    diferenca_prct=prct_a-prct_c;
	      	    prct_media=prct_b;
			}
			else if(cont_c>cont_b)
			{ 
			    diferenca_prct=prct_a-prct_b;
			    prct_media=prct_c;
			}
			else if(cont_b==cont_c)
	      	{
	      	    diferenca_prct=prct_a-prct_c;
	      	    prct_media=prct_c;
			}
		}
		    //ELEVADOR B MAIS USADO
		else if(cont_b>cont_a&&cont_b>cont_c)
		{
			if(cont_bm>cont_bv&&cont_bm>cont_bn)
			{
		        printf("\n\nO elevador B é o mais utilizado e seu maior fluxo se concentra no período matutino.");
		    } 
		    else if(cont_bv>cont_bm&&cont_bv>cont_bn)
		    {
		        printf("\n\nO elevador B é o mais utilizado e seu maior fluxo se concentra no período vespertino.");
	      	}
	      	else if(cont_bn>cont_bm&&cont_bn>cont_bv)
		    {
		        printf("\n\nO elevador B é o mais utilizado e seu maior fluxo se concentra no período noturno.");
	      	}
	      	
	      	//diferença percentual entre o mais usado dos horários e o menos usado
	      	if(cont_a>cont_c)
	      	{
	      	    diferenca_prct=prct_b-prct_c;
	      	    prct_media=prct_a;
			}
			else if(cont_c>cont_a)
			{ 
			    diferenca_prct=prct_b-prct_a;
			    prct_media=prct_c;
			}
			else if(cont_a==cont_c)
	      	{
	      	    diferenca_prct=prct_b-prct_c;
	      	    prct_media=prct_c;
			}
		}
		    //ELEVADOR C 
		else if(cont_c>cont_a&&cont_c>cont_b)
		{
			if(cont_cm>cont_cv&&cont_cm>cont_cn)
			{
		        printf("\n\nO elevador C é o mais utilizado e seu maior fluxo se concentra no período matutino.");
		    } 
		    else if(cont_cv>cont_cm&&cont_cv>cont_cn)
		    {
		        printf("\n\nO elevador C é o mais utilizado e seu maior fluxo se concentra no período vespertino.");
	      	}
	      	else if(cont_cn>cont_cm&&cont_cn>cont_cv)
		    {
		        printf("\n\nO elevador C é o mais utilizado e seu maior fluxo se concentra no período noturno.");
	      	}
	      	
	      	//diferença percentual entre o mais usado dos horários e o menos usado
	      	if(cont_a>cont_b)
	      	{
	      	    diferenca_prct=prct_c-prct_b;
	      	    prct_media=prct_a;
			}
			else if(cont_b>cont_a)
			{ 
			    diferenca_prct=prct_c-prct_a;
			    prct_media=prct_b;
			}
			else if(cont_a==cont_b)
	      	{
	      	    diferenca_prct=prct_c-prct_a;
	      	    prct_media=prct_a;
			}
		}
		
		//*PERÍDO A MAIS USADO*
		    //MATUTINO
		if(cont_m>cont_v&&cont_m>cont_n)
		{
			if(cont_am>cont_bm&&cont_am>cont_cm)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período matutino e o elevador mais usado nesse período é o A.");
			}
			else if(cont_bm>cont_am&&cont_bm>cont_cm)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período matutino e o elevador mais usado nesse período é o B.");
			}
			else if(cont_cm>cont_am&&cont_cm>cont_bm)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período matutino e o elevador mais usado nesse período é o C.");
			}
		}
		    //VESPERTINO
		else if(cont_v>cont_m&&cont_v>cont_n)
		{
			if(cont_av>cont_bv&&cont_av>cont_cv)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período vespertino e o elevador mais usado nesse período é o A.");
			}
			else if(cont_bv>cont_av&&cont_bv>cont_cv)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período vespertino e o elevador mais usado nesse período é o B.");
			}
			else if(cont_cv>cont_av&&cont_cv>cont_bv)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período vespertino e o elevador mais usado nesse período é o C.");
			}
		}
			//NOTURNO
		else if(cont_n>cont_m&&cont_n>cont_v)
		{
			if(cont_an>cont_bn&&cont_an>cont_cn)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período noturno e o elevador mais usado nesse período é o A.");
			}
			else if(cont_bn>cont_an&&cont_bn>cont_cn)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período noturno e o elevador mais usado nesse período é o B.");
			}
			else if(cont_cn>cont_an&&cont_cn>cont_bn)
			{
				printf("\n\nO maior fluxo de uso dos elevadores se concentra no período noturno e o elevador mais usado nesse período é o C.");
			}
		}
		
		//diferença percentual entre o mais usado dos horários e o menos usado
		printf("\n\nA diferença percentual entre o mais usado dos horários e o menos usado é de %.2f porcento.",diferenca_prct);
		printf("\n\nA a percentagem sobre o total de serviços prestados do elevador de média utilização é de %.2f porcento.",prct_media);
