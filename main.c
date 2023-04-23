#include <stdio.h>

// Function prototype
void viewMeterToCentimetersOrMilimiters();
void viewCelsiusToKelvin();
void opcao3();
void opcao4();

int main() {
    int opcao;

    do {
        printf("\nMENU\n");
        printf("1 - Meters to Centimeters/Milimiters\n");
        printf("2 - Celsius para Kelvin");
        printf("3 - Opcao 3\n");
        printf("4 - Opcao 4\n");
        printf("0 - Sair\n");

        printf("Escolha uma opc"
               "ao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                viewMeterToCentimetersOrMilimiters();
                break;
            case 2:
                viewCelsiusToKelvin();
                break;
            case 3:
                opcao3();
                break;
            case 4:
                opcao4();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}


void viewMeterToCentimetersOrMilimiters() {
    int meters;
    printf("\n----------------------------------------------------n");
    printf("1 - Conversor metros para centimetros/milimetros\n");
    printf("\n----------------------------------------------------n");

    printf("Quantiade de metros: ");
    scanf("%d", &meters);
}


/**
 * create a function that  receives the temperature in Celsius degree
 * then convert to Kelvin degree
 * the conversion formula is: K = C + 273.15
 */
float temperatureCelsiusToKelvin (float celsius) {
    return celsius + KELVIN; // Conversion
}

/**
 * User input
 */
void viewCelsiusToKelvin() {
    float kelvin, celsius;
    printf ("enter the degree in Celsius");
    scanf("%i", &celsius);
    kelvin = temperatureCelsiusToKelvin(celsius);
    printf("the result of the conversion is: %.2f (Kelvin)\n", kelvin);
}



void opcao3() {
    printf("Opcao 3 selecionada!\n");
}

void opcao4() {
    printf("Opcao 4 selecionada!\n");
}
