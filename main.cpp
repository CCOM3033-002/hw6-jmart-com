/*
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

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
    cout << "Este programa calcula el volumen y el área de la supercicie de tres figuras!";

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

    // Descicion de figura

    switch (seleccionFig)
    {
        case 'a':
        {
            double radio;
            double altura;

            cout << "Escoja entre las siguientes opciones: " << endl;
            cout << "   a. Volumen" << endl;
            cout << "   b. Area" << endl;
            cout << "Selección: ";
            cin >> seleccionOp;

            while (seleccionOp != 'a' && seleccionOp != 'b')
            {
                cout << "ERROR: Entre dato valido";

                cout << "Escoja entre las siguientes opciones: " << endl;
                cout << "   a. Volumen" << endl;
                cout << "   b. Area" << endl;
                cout << "   Selección: ";
                cin >> seleccionOp;
            }

            if (seleccionOp = 'a')
            {
                cout << "Entre el radio del cilindro: ";
                cin >> radio;

                cout << "Entre la altura del cilindro: ";
                cin >> altura;

                while (radio <= 0.0 || altura <= 0.0)
                {
                    cout << "ERROR: Entre dato valido";

                    cout << "Entre el radio del cilindro: ";
                    cin >> radio;

                    cout << "Entre la altura del cilindro: ";
                    cin >> altura;
                }

                cout << "El volumen del cilindro es: " << volumen(altura, radio) << endl;

                return 0;
            }

            else
            {
                cout << "Entre el radio del cilindro: ";
                cin >> radio;

                cout << "Entre la altura del cilindro: ";
                cin >> altura;

                while (radio <= 0.0 || altura <= 0.0)
                {
                    cout << "ERROR: Entre dato valido";

                    cout << "Entre el radio del cilindro: ";
                    cin >> radio;

                    cout << "Entre la altura del cilindro: ";
                    cin >> altura;
                }

                cout << "El area del cilindro es: " << area(altura, radio) << endl;

                return 0;
            }
            
        }

        case 'b':
        {
            double radio;

            cout << "Escoja entre las siguientes opciones: " << endl;
            cout << "   a. Volumen" << endl;
            cout << "   b. Area" << endl;
            cout << "   Selección: ";
            cin >> seleccionOp;

            while (seleccionOp != 'a' && seleccionOp != 'b')
            {
                cout << "ERROR: Entre dato valido";

                cout << "Escoja entre las siguientes opciones: " << endl;
                cout << "   a. Volumen" << endl;
                cout << "   b. Area" << endl;
                cout << "   Selección: ";
                cin >> seleccionOp;
            }

            if (seleccionOp = 'a')
            {
                cout << "Entre el radio de la esfera: ";
                cin >> radio;

                while (radio <= 0.0)
                {
                    cout << "ERROR: Entre dato valido";

                    cout << "Entre el radio de la esfera: ";
                    cin >> radio;
                }

                cout << "El volumen de la esfera es: " << volumen(radio) << endl;

                return 0;
            }

            else
            {
                cout << "Entre el radio de la esfera: ";
                cin >> radio;

                while (radio <= 0.0)
                {
                    cout << "ERROR: Entre dato valido";

                    cout << "Entre el radio del cilindro: ";
                    cin >> radio;
                }

                cout << "El area de la esfera es: " << area(radio) << endl;

                return 0;
            }
        }

        case 'c':
        {
            double longitud;
            double ancho;
            double altura;

            cout << "Escoja entre las siguientes opciones: " << endl;
            cout << "   a. Volumen" << endl;
            cout << "   b. Area" << endl;
            cout << "   Selección: ";
            cin >> seleccionOp;

            while (seleccionOp != 'a' && seleccionOp != 'b')
            {
                cout << "ERROR: Entre dato valido";

                cout << "Escoja entre las siguientes opciones: " << endl;
                cout << "   a. Volumen" << endl;
                cout << "   b. Area" << endl;
                cout << "   Selección: ";
                cin >> seleccionOp;
            }

            if (seleccionOp = 'a')
            {
                cout << "Entre la longitud del prisma: ";
                cin >> longitud;

                cout << "Entre el ancho del prisma: ";
                cin >> ancho;

                cout << "Entre la altura del prisma: ";
                cin >> altura;


                while (longitud <= 0.0 || ancho <= 0.0 || altura <= 0.0)
                {
                    cout << "ERROR: Entre dato valido";

                    cout << "Entre la longitud del prisma: ";
                    cin >> longitud;

                    cout << "Entre el ancho del prisma: ";
                    cin >> ancho;

                    cout << "Entre la altura del prisma: ";
                    cin >> altura;

                cout << "El volumen de la esfera es: " << volumen(longitud, ancho, altura) << endl;
                
                return 0;
            }
           
            else
            {
                cout << "Entre la longitud del prisma: ";
                cin >> longitud;

                cout << "Entre el ancho del prisma: ";
                cin >> ancho;

                cout << "Entre la altura del prisma: ";
                cin >> altura;


                while (longitud <= 0.0 || ancho <= 0.0 || alt <= 0.0)
                {
                    cout << "ERROR: Entre dato valido";

                    cout << "Entre la longitud del prisma: ";
                    cin >> longitud;

                    cout << "Entre el ancho del prisma: ";
                    cin >> ancho;

                    cout << "Entre la altura del prisma: ";
                    cin >> altura;
                        
                }

                cout << "El area del prisma es: " << area(longitud, ancho, altura) << endl;

                return 0;
            }
        }
    }

    return 0;
}



// Funciones Cilindro

double volumen(double alt, double rad)
{
    return M_PI * pow(rad, 2.0) * alt;
}

double area(double alt, double rad)
{
    return 2.0 * M_PI * rad * (alt + rad);
}


// Funciones Esfera

double volumen(double rad)
{
    return (4.0 / 3.0) * M_PI * pow(rad, 3);
}

double area(double rad)
{
    return 4.0 * M_PI * pow(rad, 2);
}

// Funciones Prisma Rectangular


double volumen(double lon, double anc, double alt)
{
    return 0;
}

double area(double lon, double lado1, double lado2, double lado3, double base, double alt)
{
    return 0.0;
}

