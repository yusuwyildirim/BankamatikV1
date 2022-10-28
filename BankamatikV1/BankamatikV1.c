#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int islem,paracekme,parayatirma,bakiye,x,fatura,islem2,islem3,islem4,islem5;
	
	printf("***TOSUNOGLU BANK HOSGELDINIZ***\n\n");
	printf("lutfen yapmak istediginiz islemi seciniz:\n");
	printf("1)Para Cekme\n2)Para Yatirma\n3)Fatura Odeme\n4)Bakiye Sorgulama\n");
	
	bakiye=3500;
	
	
	
	
	//ÝLK SWITCH CASE KISMI 
	
	
	
	
	scanf("%d",&paracekme);
	switch(paracekme)
	{
		
		case 1: 
		printf("cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracekme);
		printf("\n\n\n");
		
		if(paracekme>3500)
		{
			printf("sende o kadar para mi var la\n\n\n");
		}
		
		if(paracekme<0)
		{
			printf("lutfen bakiyenizin degeri kadar para degeri giriniz");
		}
		
		else
		{
			printf("para cekme isleminiz basariyla gerceklesmistir");
			bakiye=bakiye-paracekme;
		}
		
		
		
		
		
		// BÝR DAHA ÝSLEM YAPMAK ÝSTER MÝSÝNÝZ KISMI
		
		
		
		
		
		
		printf("baska bir islem yapmak ister misiniz?\n");
		printf("1)Para Yatirma\n2)Fatura Yatirma\n3)Bakiye Sorgulama\n");
		scanf("%d",&islem2);
		printf("\n\n\n");
		
		switch(islem2)
		{
		
		
		case 1:
			printf("yatirmak istediginiz miktari giriniz:\n");
		scanf("%d",&parayatirma);
		
		if(parayatirma<0)
		{
			printf("sence o kadar para yatirabilir misin la\n");
			
		}
		
		if(parayatirma>5000)
	    {
	    	printf("bir kerede yatirabileceginiz toplam miktar 5000tl dir\n");
		}

	else
	{
		printf("para yatirma isleminiz basariyla gerceklesmistir\n");
		bakiye=bakiye+parayatirma;
	}
	
	break;
	

	
	case 2:
		printf("fatura odeme kismina hosgeldiniz...\nodemek istediginiz faturayi seciniz:\n");
		printf("6)telefon faturasi\n7)su faturasi\n8)elektrik faturasi\n4)vergiler\n");
		
	
		scanf("%d",&fatura);
		printf("\n\n\n");
	switch(fatura)
	{
		case 6:
			printf("telefon faturaniz odenmistir(213TL)\n");
	        bakiye=bakiye-213;
			
			break;
			
			case 7:
				printf("su faturaniz odenmistir(194TL)\n");
				bakiye=bakiye-194;
				
				break;
				
				case 8:
					printf("elektrik faturaniz odenmistir(456TL)\n");
					
					break;
					
					case 4:
						
						printf("vergileri odeyecek bakiyeniz mevcut degildir :))\n");
						
						break;
	}
	
	case 3:
		printf("guncel bakiyeniz: %d",bakiye);
		
		break;
		
	}
		
		
		
		
		
		
		// CASE 2 KISMI DEVAM
		
		
		
		
		
		break;
		
		case 2:
			printf("yatirmak istediginiz miktari giriniz:\n");
		scanf("%d",&parayatirma);
		printf("\n\n\n");
		
		if(parayatirma<0)
		{
			printf("sence o kadar para yatirabilir misin la\n");
			
		}
		
		if(parayatirma>5000)
	    {
	    	printf("bir kerede yatirabileceginiz toplam miktar 5000tl dir\n");
		}

	else
	{
		printf("para yatirma isleminiz basariyla gerceklesmistir\n");
		bakiye=bakiye+parayatirma;
	}
	
	
	
	// ÝSLEM 3 KISMI DEVAMMM
	
	
	
	
	
	printf("baska bir islem yapmak ister misiniz?\n");
		printf("1)Para Cekme\n2)Fatura Yatirma\n3)Bakiye Sorgulama\n");
		scanf("%d",&islem3);
		printf("\n\n\n");
		
		switch(islem3)
		{
			
			
			case 1: 
		printf("cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracekme);
		printf("\n\n\n");
		
		if(paracekme>3500)
		{
			printf("sende o kadar para mi var la\n\n\n");
		}
		
		if(paracekme<0)
		{
			printf("lutfen bakiyenizin degeri kadar para degeri giriniz");
		}
		
		else
		{
			printf("para cekme isleminiz basariyla gerceklesmistir");
			bakiye=bakiye-paracekme;
		}
		
			
		
			case 2:
		printf("fatura odeme kismina hosgeldiniz...\nodemek istediginiz faturayi seciniz:\n");
		printf("6)telefon faturasi\n7)su faturasi\n8)elektrik faturasi\n4)vergiler\n");
		
	
		scanf("%d",&fatura);
		printf("\n\n\n");
	switch(fatura)
	{
		case 6:
			printf("telefon faturaniz odenmistir(213TL)");
	        bakiye=bakiye-213;
			
			break;
			
			case 7:
				printf("su faturaniz odenmistir(194TL)\n");
				bakiye=bakiye-194;
				
				break;
				
				case 8:
					printf("elektrik faturaniz odenmistir(456TL)\n");
					
					break;
					
					case 4:
						
						printf("vergileri odeyecek bakiyeniz mevcut degildir :))");
						
						break;
	}
	
	case 3:
		printf("guncel bakiyeniz: %d",bakiye);
		
		break;
		
			
			
		}
	
	
	
	
	
	break;
	

		
		
		// CASE 3 KISMI DEVAMMMM
		
		
	
	case 3:
		printf("fatura odeme kismina hosgeldiniz...\nodemek istediginiz faturayi seciniz:\n");
		printf("6)telefon faturasi\n7)su faturasi\n8)elektrik faturasi\n4)vergiler\n");
		
	
		scanf("%d",&fatura);
		printf("\n\n\n");
	switch(fatura)
	{
		case 6:
			printf("telefon faturaniz odenmistir(213TL)\n");
	        bakiye=bakiye-213;
	        
	        
	        printf("baska bir islem yapmak ister misiniz?\n");
		printf("1)Para Cekme\n2)Fatura Yatirma\n3)Bakiye Sorgulama\n");
		scanf("%d",&islem4);
		
		scanf("%d",&paracekme);
		printf("\n\n\n");
		switch(islem4)
		{
			
			case 1: 
		printf("cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracekme);
		printf("\n\n\n");
		
		if(paracekme>3500)
		{
			printf("sende o kadar para mi var la\n\n\n");
		}
		
		if(paracekme<0)
		{
			printf("lutfen bakiyenizin degeri kadar para degeri giriniz");
		}
		
		else
		{
			printf("para cekme isleminiz basariyla gerceklesmistir");
			bakiye=bakiye-paracekme;
		}
		
			
			
			
		}
	        
			
			break;
			
			case 7:
				printf("su faturaniz odenmistir(194TL)\n");
				bakiye=bakiye-194;
				
				
				printf("baska bir islem yapmak ister misiniz?\n");
		printf("1)Para Cekme\n2)Fatura Yatirma\n3)Bakiye Sorgulama\n");
		scanf("%d",&islem4);
		
		scanf("%d",&paracekme);
		switch(islem4)
		{
			
			case 1: 
		printf("cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracekme);
		
		if(paracekme>3500)
		{
			printf("sende o kadar para mi var la\n\n\n");
		}
		
		if(paracekme<0)
		{
			printf("lutfen bakiyenizin degeri kadar para degeri giriniz");
		}
		
		else
		{
			printf("para cekme isleminiz basariyla gerceklesmistir");
			bakiye=bakiye-paracekme;
		}
		
			
			
			
		}
				
				
				break;
				
				case 8:
					printf("elektrik faturaniz odenmistir(456TL)\n");
					
					
					
					printf("baska bir islem yapmak ister misiniz?\n");
		printf("1)Para Cekme\n2)Fatura Yatirma\n3)Bakiye Sorgulama\n");
		scanf("%d",&islem4);
		
		scanf("%d",&paracekme);
		switch(islem4)
		{
			
			case 1: 
		printf("cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracekme);
		
		if(paracekme>3500)
		{
			printf("sende o kadar para mi var la\n\n\n");
		}
		
		if(paracekme<0)
		{
			printf("lutfen bakiyenizin degeri kadar para degeri giriniz");
		}
		
		else
		{
			printf("para cekme isleminiz basariyla gerceklesmistir");
			bakiye=bakiye-paracekme;
		}
		
			
			
			
		}
					
					
					
					break;
					
					case 4:
						
						printf("vergileri odeyecek bakiyeniz mevcut degildir :))\n");
						
						
						
						
						
						// ÝSLEM 4 KISMI DEVAMMMM
						
					
					
							printf("baska bir islem yapmak ister misiniz?\n");
		printf("1)Para Cekme\n2)Fatura Yatirma\n3)Bakiye Sorgulama\n");
		scanf("%d",&islem4);
		
		scanf("%d",&paracekme);
		printf("\n\n\n");
		switch(islem4)
		{
			
			case 1: 
		printf("cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracekme);
		printf("\n\n\n");
		
		if(paracekme>3500)
		{
			printf("sende o kadar para mi var la\n\n\n");
		}
		
		if(paracekme<0)
		{
			printf("lutfen bakiyenizin degeri kadar para degeri giriniz");
		}
		
		else
		{
			printf("para cekme isleminiz basariyla gerceklesmistir");
			bakiye=bakiye-paracekme;
		}
		
			
			
			
		}
						
						
						
						
						
						break;
	}
	
	
	
	
	
	case 4:
		printf("guncel bakiyeniz: %d",bakiye);
		
	printf("\n\n\n");
		
		
		
		
		//ÝSLEM 5 KISMI ARTIK SON INSALLAH
		
		
		printf("baska bir islem yapmak ister misiniz?\n");
		printf("1)Para Cekme\n2)Para Yatirma\n3)Fatura Yatirma\n");
		scanf("%d",&islem5);
		printf("\n\n\n");
		
		switch(islem5)
		{
			
			
			scanf("%d",&paracekme);
	{
		
		case 1: 
		printf("cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracekme);
		printf("\n\n\n");
		
		if(paracekme>3500)
		{
			printf("sende o kadar para mi var la\n\n\n");
		}
		
		if(paracekme<0)
		{
			printf("lutfen bakiyenizin degeri kadar para degeri giriniz");
		}
		
		else
		{
			printf("para cekme isleminiz basariyla gerceklesmistir");
			bakiye=bakiye-paracekme;
		}
			
			break;
			
			
			case 2:
			printf("yatirmak istediginiz miktari giriniz:\n");
		scanf("%d",&parayatirma);
		printf("\n\n\n");
		
		if(parayatirma<0)
		{
			printf("sence o kadar para yatirabilir misin la\n");
			
		}
		
		if(parayatirma>5000)
	    {
	    	printf("bir kerede yatirabileceginiz toplam miktar 5000tl dir\n");
		}

	else
	{
		printf("para yatirma isleminiz basariyla gerceklesmistir\n");
		bakiye=bakiye+parayatirma;
	}
			
		break;	
			
		
	}
		
		
		
		case 3:
		printf("fatura odeme kismina hosgeldiniz...\nodemek istediginiz faturayi seciniz:\n");
		printf("6)telefon faturasi\n7)su faturasi\n8)elektrik faturasi\n4)vergiler\n");
		
	
		scanf("%d",&fatura);
		printf("\n\n\n");
	switch(fatura)
	{
		case 6:
			printf("telefon faturaniz odenmistir(213TL)\n");
	        bakiye=bakiye-213;
	        
	        break;
	        
	        case 7:
				printf("su faturaniz odenmistir(194TL)\n");
				bakiye=bakiye-194;
				
				break;
				
				case 8:
					printf("elektrik faturaniz odenmistir(456TL)\n");
					
					break;
					
					case 4:
						
						printf("vergileri odeyecek bakiyeniz mevcut degildir :))\n");
					
					break;
		
		
	}
		
		
		
		
		
		
		
		
		
		
		
		}
		
		break;
}

	
	getch(0);
	return 0;
}
