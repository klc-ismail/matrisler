#include <stdio.h>
main(){
	int A[3][3];
	int B[3][3];
	int C[3][3];
	int satir,sutun,tercih;
	char tercih2,check;
	
	system("COLOR B");
	printf("2x2'lik Matris Icin 2 /// 3x3'luk Matris Icin 3 Yaziniz\n\nTercihiniz===> ");
	scanf("%d",&tercih);

	if (tercih == 2){
		//A matrisi girdisi
		printf("\nA Matrisini Giriniz==> \n");
		for (satir=0; satir<2; satir++)
			for (sutun=0; sutun<2; sutun++){
				printf("%d.Satir %d.Sutun: ",satir+1,sutun+1);
				scanf("%d",&A[satir][sutun]);
			}
		//B matrisi girdisi
		printf("\nB Matrisini Giriniz==> \n");
		for (satir=0; satir<2; satir++)
			for (sutun=0; sutun<2; sutun++){
				printf("%d.Satir %d.Sutun: ",satir+1,sutun+1);
				scanf("%d",&B[satir][sutun]);
			}
		//A matrisi gosterimi
		printf("\n\nA Matrisi==>\n");
		for (satir=0; satir<2; satir++)
			for (sutun=0; sutun<2; sutun++){
				printf("[%d] ",A[satir][sutun]);
				if (sutun == 1)
					printf("\n");
			}
		//B matrisi gosterimi
		printf("\nB Matrisi ==>\n");
		for (satir=0; satir<2; satir++)
			for (sutun=0; sutun<2; sutun++){
				printf("[%d] ",B[satir][sutun]);
				if (sutun ==1)
					printf("\n");
			}
		//////// Matris islem secimi 
		printf("\nMatrisler Ile Herhangi Bir Islem Yapmak Istiyor Musunuz?(y/n): ");
		scanf("%s",&check);
		if (check=='y'){
		
			printf("\nYapmak Istediginiz Islemi Seciniz\n(Toplama Icin:+ /// Cikarma Icin:-)==> ");
			scanf("%s",&tercih2);
			// Matris Toplama
			if (tercih2=='+'){
				printf("\nA ve B Matrislerinin Toplami==>\n");
				for (satir=0; satir<2; satir++)
					for (sutun=0; sutun<2; sutun++){
						C[satir][sutun] = A[satir][sutun] + B[satir][sutun];
					}
				for(satir=0; satir<2; satir++)
					for(sutun=0; sutun<2; sutun++){
						printf("[%d] ",C[satir][sutun]);
						if (sutun==1)
							printf("\n");
					}
			}
			// Matris Cikarma
			else if (tercih2=='-'){
				printf("\n\nA Matrisinin B Matrisinden Farki==>\n");
				for (satir=0; satir<2; satir++)
					for (sutun=0; sutun<2; sutun++){
						C[satir][sutun] = A[satir][sutun] - B[satir][sutun];
					}
				for (satir=0; satir<2; satir++)
					for (sutun=0; sutun<2; sutun++){
						printf("[%d] ",C[satir][sutun]);
						if (sutun==1)
							printf("\n");
					}
				printf("\nB Matrisinin A Matrisinden Farki==>\n");
				for (satir=0; satir<2; satir++)
					for (sutun=0; sutun<2; sutun++){
						C[satir][sutun] = B[satir][sutun] - A[satir][sutun];
					}
				for (satir=0; satir<2; satir++)
					for (sutun=0; sutun<2; sutun++){
						printf("[%d] ",C[satir][sutun]);
						if (sutun==1)
							printf("\n");
					}
			}
			else{
				system("COLOR C");
				printf("\n\n\nGECERSIZ ISLEM!!!\n\n\n");
			}
		}
		else if(check=='n'){
			printf("Cikmak Icin Enter'a Basiniz");
		}
		else{
			system("COLOR C");
			printf("\n\n\nGECERSIZ GIRDI!!!\n\n\n");
		}
	
	}
	else if (tercih == 3){
		//A matrisi girdisi
		printf("\nA Matrisini Giriniz==> \n");
		for (satir=0; satir<3; satir++)
			for (sutun=0; sutun<3; sutun++){
				printf("%d.Satir %d.Sutun: ",satir+1,sutun+1);
				scanf("%d",&A[satir][sutun]);
			}
		//B matrisi girdisi
		printf("\nB Matrisini Giriniz==> \n");
		for (satir=0; satir<3; satir++)
			for (sutun=0; sutun<3; sutun++){
				printf("%d.Satir %d.Sutun: ",satir+1,sutun+1);
				scanf("%d",&B[satir][sutun]);
			}
		//A matrisi gosterimi
		printf("\n\nA Matrisi==>\n");
		for (satir=0; satir<3; satir++)
			for (sutun=0; sutun<3; sutun++){
				printf("[%d] ",A[satir][sutun]);
				if (sutun == 2)
					printf("\n");
			}
		//B matrisi gosterimi
		printf("\nB Matrisi ==>\n");
		for (satir=0; satir<3; satir++)
			for (sutun=0; sutun<3; sutun++){
				printf("[%d] ",B[satir][sutun]);
				if (sutun ==2)
					printf("\n");
			}
		//////// Matris islem secimi 
		printf("\nMatrisler Ile Herhangi Bir Islem Yapmak Istiyor Musunuz?(y/n): ");
		scanf("%s",&check);
		if (check == 'y'){
			printf("\nYapmak Istediginiz Islemi Seciniz\n(Toplama Icin:+ /// Cikarma Icin:- Giriniz)==> ");
			scanf("%s",&tercih2);
			// Matris Toplama
			if (tercih2=='+'){
				printf("\nA ve B Matrislerinin Toplami==>\n");
				for (satir=0; satir<3; satir++)
					for (sutun=0; sutun<3; sutun++){
						C[satir][sutun] = A[satir][sutun] + B[satir][sutun];
					}
				for(satir=0; satir<3; satir++)
					for(sutun=0; sutun<3; sutun++){
						printf("[%d] ",C[satir][sutun]);
						if (sutun==2)
							printf("\n");
					}
			}
			// Matris Cikarma
			else if (tercih2=='-'){
				printf("\n\nA Matrisinin B Matrisinden Farki==>\n");
				for (satir=0; satir<3; satir++)
					for (sutun=0; sutun<3; sutun++){
						C[satir][sutun] = A[satir][sutun] - B[satir][sutun];
					}
				for (satir=0; satir<3; satir++)
					for (sutun=0; sutun<3; sutun++){
						printf("[%d] ",C[satir][sutun]);
						if (sutun==2)
							printf("\n");
					}
				printf("\nB Matrisinin A Matrisinden Farki==>\n");
				for (satir=0; satir<3; satir++)
					for (sutun=0; sutun<3; sutun++){
						C[satir][sutun] = B[satir][sutun] - A[satir][sutun];
					}
				for (satir=0; satir<3; satir++)
					for (sutun=0; sutun<3; sutun++){
						printf("[%d] ",C[satir][sutun]);
						if (sutun==2)
							printf("\n");
					}
			}
			else{
				system("COLOR C");
				printf("\n\n\nGECERSIZ ISLEM!!!\n\n\n");
			}
		}
		else if (check == 'n'){
			printf("Cikmak Icin Enter'a Basiniz");
		}
		else{
			system("COLOR C");
			printf("\n\n\nGECERSIZ GIRDI!!!\n\n\n");
		}
	}
	else{
		system("COLOR C");
		printf("\n\n\nGECERSIZ GIRDI!!!\n\n\n");
	}
	getch();
}
