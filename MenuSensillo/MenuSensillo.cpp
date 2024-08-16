//En este video crearemos un menu sensillo

#include <iostream>

int main()
{
	bool salir = false;
	int opcion = 0;

	do {
		std::cout << "--- Menu ---" << std::endl;
		std::cout << "1- Opcion uno" << std::endl;
		std::cout << "2- Opcion dos" << std::endl;
		std::cout << "3- Opcion tres" << std::endl;
		std::cout << "4- Opcion cuatro" << std::endl;
		std::cout << "5- Salir" << std::endl;
		std::cout << "Introduce una opcion: " << std::endl;
		std::cin >> opcion;

		switch (opcion)
		{
		case 1:
			std::cout << "Esta es la opcion uno" << std::endl;
			break;
		case 2:
			std::cout << "Esta es la opcion dos" << std::endl;
			break;
		case 3:
			std::cout << "Esta es la opcion tres" << std::endl;
			break;
		case 4:
			std::cout << "Esta es la opcion cuatro" << std::endl;
			break;
		case 5:
			std::cout << "Saliendo..." << std::endl;
			salir = true;
			break;

		default:
			std::cout << "La opcion ingresa no es valida!" << std::endl;
			break;
		}


	} while (salir == false);
}

