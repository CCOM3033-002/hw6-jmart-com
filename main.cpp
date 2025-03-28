/*

Javier A. Martinez Ballagas / jmart-com

801-24-2310

CCOM3033-002

HW6: Figuras 3D

Contribuciones:
    Varios sitos web para las formulas de las figuras

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double volumen(double alt, double rad); // Volumen de Cilindro
double volumen(double rad); // Volumen de Esfera
double volumen(double lado1, double lado2, double lado3); // Volumen de Prisma Triangular

double area(double alt, double rad); // Area de Cilindro
double area(double rad); // Area de Esfera
double area(double lon, double anc, double alt); // Area de Prisma Rectangular

int main()
{
    // Desplegar proposito
    cout << "Este programa calcula el volumen y el área de la supercicie de tres figuras!" << endl;

    // Declarar variable

    char seleccionFig;
    char seleccionOp;

    // Recibir seleccion de figura

    cout << "Escoja la figura: " << endl;
    cout << "   a. Cilindro" << endl;
    cout << "   b. Esfera" << endl;
    cout << "   c. Prisma Rectangular" << endl;
    cout << "   Selección: ";
    cin >> seleccionFig;

    // I.V de Seleccion de Figura

    while (seleccionFig != 'a' && seleccionFig != 'b' && seleccionFig != 'c')
    {
        cout << "ERROR: Entre dato valido";

        cout << "Escoja la figura: " << endl;
        cout << "   a. Cilindro" << endl;
        cout << "   b. Esfera" << endl;
        cout << "   c. Prisma Rectangular" << endl;
        cout << "   Selección: ";
        cin >> seleccionFig;
    }

    // Descicion de figura

    switch (seleccionFig)
    {
        case 'a': // Seleccion de Cilindro
        {
            double radio;
            double altura;

            cout << "Escoja entre las siguientes opciones: " << endl;
            cout << "   a. Volumen" << endl;
            cout << "   b. Area" << endl;
            cout << "Selección: ";
            cin >> seleccionOp;

            // I.V de Menu de Operaciones
            while (seleccionOp != 'a' && seleccionOp != 'b')
            {
                cout << "ERROR: Entre dato valido";

                cout << "Escoja entre las siguientes opciones: " << endl;
                cout << "   a. Volumen" << endl;
                cout << "   b. Area" << endl;
                cout << "   Selección: ";
                cin >> seleccionOp;
            }

            if (seleccionOp == 'a') // Seleccion de Volumen
            {
                cout << "Entre el radio del cilindro: ";
                cin >> radio;

                cout << "Entre la altura del cilindro: ";
                cin >> altura;

                // I.V de datos
                while (radio <= 0.0 || altura <= 0.0)
                {
                    cout << "ERROR: Entre dato valido" << endl;

                    cout << "Entre el radio del cilindro: ";
                    cin >> radio;

                    cout << "Entre la altura del cilindro: ";
                    cin >> altura;
                }

                cout << "El volumen del cilindro es: " << setprecision(2) << fixed << volumen(altura, radio) << endl;

                return 0;
            }

            else // Seleccion de Area
            {
                cout << "Entre el radio del cilindro: ";
                cin >> radio;

                cout << "Entre la altura del cilindro: ";
                cin >> altura;

                // I.V de datos
                while (radio <= 0.0 || altura <= 0.0)
                {
                    cout << "ERROR: Entre dato valido" << endl;

                    cout << "Entre el radio del cilindro: ";
                    cin >> radio;

                    cout << "Entre la altura del cilindro: ";
                    cin >> altura;
                }

                cout << "El area del cilindro es: " << setprecision(2) << fixed << area(altura, radio) << endl;

                return 0;
            }
            
        }

        case 'b': // Seleccion de Esfera
        {
            double radio;

            cout << "Escoja entre las siguientes opciones: " << endl;
            cout << "   a. Volumen" << endl;
            cout << "   b. Area" << endl;
            cout << "   Selección: ";
            cin >> seleccionOp;

            // I.V de Seleccion
            while (seleccionOp != 'a' && seleccionOp != 'b')
            {
                cout << "ERROR: Entre dato valido" << endl;

                cout << "Escoja entre las siguientes opciones: " << endl;
                cout << "   a. Volumen" << endl;
                cout << "   b. Area" << endl;
                cout << "   Selección: ";
                cin >> seleccionOp;
            }

            if (seleccionOp == 'a') // Selecion de Volumen
            {
                cout << "Entre el radio de la esfera: ";
                cin >> radio;

                // I.V de dato
                while (radio <= 0.0)
                {
                    cout << "ERROR: Entre dato valido" << endl;

                    cout << "Entre el radio de la esfera: ";
                    cin >> radio;
                }

                cout << "El volumen de la esfera es: " << setprecision(2) << fixed << volumen(radio) << endl;

                return 0;
            }

            else // Seleccion de Area
            {
                cout << "Entre el radio de la esfera: ";
                cin >> radio;

                // I.V de dato
                while (radio <= 0.0)
                {
                    cout << "ERROR: Entre dato valido" << endl;

                    cout << "Entre el radio del cilindro: ";
                    cin >> radio;
                }

                cout << "El area de la esfera es: " << setprecision(2) << fixed << area(radio) << endl;

                return 0;
            }
        }

        case 'c': // Seleccion Prisma Rectangular
        {
            double longitud;
            double ancho;
            double altura;

            cout << "Escoja entre las siguientes opciones: " << endl;
            cout << "   a. Volumen" << endl;
            cout << "   b. Area" << endl;
            cout << "   Selección: ";
            cin >> seleccionOp;

            // I.V de seleccion
            while (seleccionOp != 'a' && seleccionOp != 'b')
            {
                cout << "ERROR: Entre dato valido";

                cout << "Escoja entre las siguientes opciones: " << endl;
                cout << "   a. Volumen" << endl;
                cout << "   b. Area" << endl;
                cout << "   Selección: ";
                cin >> seleccionOp;
            }

            if (seleccionOp == 'a') // Seleccion de Volumen
            {
                cout << "Entre la longitud del prisma: ";
                cin >> longitud;

                cout << "Entre el ancho del prisma: ";
                cin >> ancho;

                cout << "Entre la altura del prisma: ";
                cin >> altura;


                // I.V de datos
                while (longitud <= 0.0 || ancho <= 0.0 || altura <= 0.0)
                {
                    cout << "ERROR: Entre dato valido" << endl;

                    cout << "Entre la longitud del prisma: ";
                    cin >> longitud;

                    cout << "Entre el ancho del prisma: ";
                    cin >> ancho;

                    cout << "Entre la altura del prisma: ";
                    cin >> altura;
                }

                cout << "El volumen de la esfera es: " << setprecision(2) << fixed << volumen(longitud, ancho, altura) << endl;
                
                return 0;
            }
           
            else // Seleccion Area
            {
                cout << "Entre la longitud del prisma: ";
                cin >> longitud;

                cout << "Entre el ancho del prisma: ";
                cin >> ancho;

                cout << "Entre la altura del prisma: ";
                cin >> altura;

                // I.V  de datos
                while (longitud <= 0.0 || ancho <= 0.0 || altura <= 0.0)
                {
                    cout << "ERROR: Entre dato valido" << endl;

                    cout << "Entre la longitud del prisma: ";
                    cin >> longitud;

                    cout << "Entre el ancho del prisma: ";
                    cin >> ancho;

                    cout << "Entre la altura del prisma: ";
                    cin >> altura;
                        
                }

                cout << "El area del prisma es: " << setprecision(2) << fixed << area(longitud, ancho, altura) << endl;

                return 0;
            }
        }
    }

    return 0;
}



// Funciones Cilindro

// input: Altura y Radio
// output: Volumen de cilindro
double volumen(double alt, double rad)
{
    return M_PI * pow(rad, 2.0) * alt;
}

// input: Altura y Radio
// output: Area de Superficie de Cilindro
double area(double alt, double rad)
{
    return 2.0 * M_PI * rad * (alt + rad);
}


// Funciones Esfera

// input: Radio
// output: Volumen de Esfera
double volumen(double rad)
{
    return (4.0 / 3.0) * M_PI * pow(rad, 3);
}

// input: Radio
// output: Area de Superficie de Esfera
double area(double rad)
{
    return 4.0 * M_PI * pow(rad, 2);
}


// Funciones Prisma Rectangular

// input: Longitud, Ancho y Altura
// output: Volumen de Prisma Rectangular
double volumen(double lon, double anc, double alt)
{
    return lon * anc * alt;
}

// input: Longitud, Ancho y Altura
// output: Area de Prisma Rectangular
double area(double lon, double anc, double alt)
{
    return 2 * ((anc * lon) + (alt * lon) + (anc * alt));
}

