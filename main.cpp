/*
*/

#include <iostream>
#include <cstdlib>

using namespace std;

double volumen(double alt, double rad); // Volumen de Cilindro
double volumen(double rad); // Volumen de Esfera
double volumen(double lado1, double lado2, double lado3); // Volumen de Prisma Triangular

double area(double alt, double rad); // Area de Cilindro
double area(double rad); // Area de Esfera
double area(double lon, double lado1, double lado2, double lado3, double base, double alt); // Area de Prisma Triangular

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
    cout << "   c. Prisma Triangular" << endl;
    cout << "Selección: ";
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
            cout << "   b. Base" << endl;
            cout << "Selección: ";
            cin >> seleccionOp;

            while (seleccionOp != 'a' && seleccionOp != 'b')
            {
                cout << "ERROR: Entre dato valido";

                cout << "Escoja entre las siguientes opciones: " << endl;
                cout << "   a. Volumen" << endl;
                cout << "   b. Base" << endl;
                cout << "Selección: ";
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
            cout << "Escoja la figura: " << endl;
            cout << "   a. Volumen" << endl;
            cout << "   b. Base" << endl;
            cout << "Selección: ";
            cin >> seleccionOp;
        }

        case 'c':
        {
            cout << "Escoja la figura: " << endl;
            cout << "   a. Volumen" << endl;
            cout << "   b. Base" << endl;
            cout << "Selección: ";
            cin >> seleccionOp;
        }
    }

    return 0;
}


double volumen(double alt, double rad)
{
    return 0.0;
}

double area(double alt, double rad)
{
    return 0.0;
}


