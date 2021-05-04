#include <iostream>
#include <string>

using namespace std;

struct empleado {
	string nombre;
	int edad;
	char genero;
	float sueldo;
};







int main() {
	//declaracion o creacion de instancia
	empleado em[20];


	int opcion, contador=0, opcion2 ;
	

	do {
		cout << "1. Contratacion" << endl;
		cout << "2. Empleados actuales" << endl;
		cout << "3. Genero femenino" << endl;
		cout << "4. Eddad 30 años" << endl;
		cout << "5. Buscar empleado" << endl;
		cout << "6. Salir" << endl;
		cin >> opcion;
		if (opcion == 1) {
			cout << "Ingrese nombre: ";
			cin >> em[contador].nombre;
			cout << "Ingrese edad: ";
			cin >> em[contador].edad;
			cout << "Ingrese genero: Femenino (f) o Masculino (m): ";
			cin >> em[contador].genero;
			cout << "Ingrese sueldo: ";
			cin >> em[contador].sueldo;
			contador++;

			cout << endl << "Empleados contratados: " << contador << endl;
		}
		else if (opcion == 2) {
			for (int i = 0; i < contador; i++) {

				cout << em[i].nombre << " - " << em[i].edad << " - "
					<< em[i].genero <<" - " << em[i].sueldo << endl;
				
			}
			
		}
		else if (opcion == 3) {
			cout << "Genero femenino" << endl;
			for (int i = 0; i < contador; i++) {

				if (em[i].genero == 'm' || em[i].genero == 'M')
				{
					cout << em[i].nombre << " - " << em[i].edad << " - "
						<< em[i].genero << " - " << em[i].sueldo << endl;
				}
			}
		}
		else if (opcion == 4) {
			cout << "EDAD MAYOR A 30" << endl;
			for (int i = 0; i < contador; i++) {

				if (em[i].edad >= 30) {

				cout << em[i].nombre << " - " << em[i].edad << " - "
					<< em[i].genero << " - " << em[i].sueldo << endl;
				}
			}
			
		}
		else if (opcion == 5) {
			string buscado; bool bandera = false;
			cout << "Ingrese nombre del empleado a buscar: ";
			cin >> buscado;

			for (int i = 0; i < contador; i++) {

				if (buscado == em[i].nombre) {
					cout << "ENCONTRADO" << endl;
					cout << em[i].nombre << " - " << em[i].edad << " - "
						<< em[i].genero << " - " << em[i].sueldo << endl;
					bandera = true;
				}
			}

			if (bandera == false) {
				cout << "NO ENCONTRADO" << endl;
			}
		}

	} while (opcion != 6);

	
	

	system("pause");
	return 0;
}