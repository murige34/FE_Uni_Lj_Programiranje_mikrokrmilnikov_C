#include <stdio.h>
#include <stdlib.h>

struct kompleks{
	double Re,Im;
};
/*globalne spremenljivke:
c za konjugiranje, a in b za vse druge operacije */
struct kompleks a={1.0,-1.0},b={1.0,-1.0};

//prototipi funkcij: 
struct kompleks sestej(struct kompleks a, struct kompleks b);
struct kompleks odstej(struct kompleks a, struct kompleks b);
struct kompleks zmnozi(struct kompleks a, struct kompleks b);
struct kompleks zdeli(struct kompleks a, struct kompleks b);
struct kompleks konjugiraj(struct kompleks a);
void meni(void);
void sprem(void);

int main()
{	
	char izbira;
	//meni(); //prikaže zaèetni meni
	
	while(1){ //neskonèna zanka
		//system("cls");
		meni(); //prikaže zaèetni meni
		//izbira = getch(); // prebere kaj želimo storiti
		scanf(" %c", &izbira);
		
		switch(izbira){
			case '1':
			case 'v': 
				sprem();
				printf("Vnesli ste stevila: a: (%.4lf %+.4lfi), b: (%.4lf %+.4lfi).\n"
				,a.Re,a.Im,b.Re,b.Im);
				break;
			case '2':
			case 's': 
				printf("Vsota stevil (%.4lf %+.4lfi) in (%.4lf %+.4lfi) je: ",a.Re,a.Im,b.Re,b.Im);
				printf("(%.4lf %+.4lfi)\n", sestej(a,b).Re, sestej(a,b).Im); 
				break;
			case '3':
			case 'o':
				printf("Razlika stevil (%.4lf %+.4lfi) in (%.4lf %+.4lfi) je: ",a.Re,a.Im,b.Re,b.Im);
				printf("(%.4lf %+.4lfi)\n", odstej(a,b).Re, odstej(a,b).Im); 
				break;
			case '4':
			case 'z':
				printf("Produkt stevil (%.4lf %+.4lfi) in (%.4lf %+.4lfi) je: ",a.Re,a.Im,b.Re,b.Im);
				printf("(%.4lf %+.4lfi)\n", zmnozi(a,b).Re, zmnozi(a,b).Im); 
				break;
			case '5':
			case 'd':
				printf("Kvocient stevil (%.4lf %+.4lfi) in (%.4lf %+.4lfi) je: ",a.Re,a.Im,b.Re,b.Im);
				printf("(%.4lf %+.4lfi)\n", zdeli(a,b).Re, zdeli(a,b).Im);
				break;
			case '6':
			case 'x':
				printf("Hvala, ker ste uporabili naš program.");
				return 0;
			//default: return 0;
		}
	}
}

void meni(){
	printf("\nKompleksna stevila v1.0\n");
	printf("(1) v - vnos stevil\n");
	printf("(2) s - sestej\n");
	printf("(3) o - odstej\n");
	printf("(4) z - zmnozi\n");
	printf("(5) d - deli\n");
	printf("(6) x - izhod\n");
	printf("Vnesi ukaz: ");
}
void sprem(){
	printf("\nVnesi 2. kompleksni stevili oblike a+bi.\n");
	printf("Vnesi prvo st.:  ");
	scanf("%lf%lfi", &a.Re,&a.Im);
	printf("Vnesi drugo st.: ");
	scanf("%lf%lfi", &b.Re,&b.Im);
}
struct kompleks sestej(struct kompleks a, struct kompleks b){
	struct kompleks vsota;
	vsota.Re=a.Re+b.Re;
	vsota.Im=a.Im+b.Im;
	return vsota;
}
struct kompleks odstej(struct kompleks a, struct kompleks b){
	struct kompleks razlika;
	razlika.Re=a.Re-b.Re;
	razlika.Im=a.Im-b.Im;
	return razlika;
}
struct kompleks zmnozi(struct kompleks a, struct kompleks b){
	struct kompleks produkt;
	produkt.Re=a.Re*b.Re-a.Im*b.Im;
	produkt.Im=a.Re*b.Im+a.Im*b.Re;
	return produkt;
}
struct kompleks zdeli(struct kompleks a, struct kompleks b){
	struct kompleks kvocient;
	kvocient.Re=(a.Re*b.Re+a.Im*b.Im)/(b.Re*b.Re+b.Im*b.Im);
	kvocient.Im=(a.Im*b.Re-a.Re*b.Im)/(b.Re*b.Re+b.Im*b.Im);
	return kvocient;
}
struct kompleks konjugiraj(struct kompleks a){
	struct kompleks rezultat;
	rezultat.Re=a.Re;
	rezultat.Im=-a.Im;
	return rezultat;
}
