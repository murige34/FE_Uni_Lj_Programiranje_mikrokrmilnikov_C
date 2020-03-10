#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a1, b1, a2, b2;   // kompleksni stevili: a+bi
	double vsota_a, vsota_b;
	double razlika_a, razlika_b;
	double produkt_a, produkt_b;
	double kvocient_a, kvocient_b;

	printf("Vnesi prvo kompleksno stevilo:");
	scanf("%lf%lfi", &a1, &b1);

	printf("Vnesi drugo kompleksno stevilo:");
	scanf("%lf%lfi", &a2, &b2);

	//Izracunamo vsoto
	vsota_a = a1 + a2;
	vsota_b = b1 + b2;
	printf("Vsota: %.2lf%+.2lfi \n", vsota_a, vsota_b);

	//Izracunamo razliko
	razlika_a = a1 - a2;
	razlika_b = b1 - b2;
	printf("Razlika: %.2lf%+.2lfi \n", razlika_a, razlika_b);

	//Izracunamo produkt
	produkt_a = a1*a2 - b1*b2;
	produkt_b = a1*b2 + a2*b1;
	printf("Produkt: %.2lf%+.2lfi \n", produkt_a, produkt_b);

	//Izračunamo kvocient
	kvocient_a = (a1*a2 + b1*b2) / (a2*a2 + b2*b2);
	kvocient_b = (a2*b1 - a1*b2) / (a2*a2 + b2*b2);
	printf("Kvocient: %.2lf%+.2lfi \n", kvocient_a, kvocient_b);

}
