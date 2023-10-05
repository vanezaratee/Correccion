#include <iostream>

int tiempotr = 0;
double distanciare = 2.0;
double velocidadmotor = 0.7;
char opcion;
int tiempo_acumulado = 0;

int main() {
    std::cout << "--AUTONOMO--" << std::endl;

do {
        std::cout << "1.- Quitar llantas " << std::endl;
        std::cout << "2.- Poner llantas " << std::endl;
        std::cout << "3.- Limpiar zona de herramientas " << std::endl;
        std::cout << "Escoja una de las tres opciones para realizar: " << std::endl;
        std::cin >> opcion;

        if (opcion == '1') {
            double tiempoav = distanciare/velocidadmotor;
            std::cout << "El robot avanza por " << tiempoav << " segundos" << std::endl;
            tiempotr += static_cast<int>(tiempoav);
            
            std::cout << "El robot gira a la derecha por 1.5 segundos" << std::endl;
            tiempotr += 1;
            
            std::cout << "El robot toma la llanta por 3 segundos" << std::endl;
            tiempotr += 3;

            std::cout << "El robot gira a la derecha por 1.5 segundos" << std::endl;
            tiempotr += 1;

            std::cout << "El robot avanza de regreso por " << tiempoav << " segundos" << std::endl;
            tiempotr += static_cast<int>(tiempoav);

            std::cout << "El robot deja la llanta por 3 segundos" << std::endl;
            tiempotr += 3;

        } else if (opcion == '2') {
            double tiempoav = distanciare/velocidadmotor;
            std::cout << "El robot gira a la izquierda por 1.5 segundos" << std::endl;
            tiempotr += 1;

            std::cout << "El robot avanza por " << tiempoav << " segundos" << std::endl;
            tiempotr += static_cast<int>(tiempoav);
  
            std::cout << "El robot toma la llanta por 3 segundos" << std::endl;
            tiempotr += 3;

            std::cout << "El robot gira a la derecha por 1.5 segundos" << std::endl;
            tiempotr += 1;

            std::cout << "El robot avanza por " << tiempoav << " segundos" << std::endl;
            tiempotr += static_cast<int>(tiempoav);

            std::cout << "El robot gira a la derecha por 1.5 segundos" << std::endl;
            tiempotr += 1;

            std::cout << "El robot coloca la llanta por 3 segundos" << std::endl;
            tiempotr += 3;

            std::cout << "El robot gira a la izquierda por 1.5 segundos" << std::endl;
            tiempotr += 1;

            std::cout << "El robot avanza de regreso por " << tiempoav << " segundos" << std::endl;
            tiempotr += static_cast<int>(tiempoav);

        } else if (opcion == '3') {
            double tiempoav = distanciare/velocidadmotor;
            std::cout << "El robot avanza por " << tiempoav << " segundos" << std::endl;
            tiempotr += static_cast<int>(tiempoav);
            
            std::cout << "El robot gira a la izquierda por 1.5 segundos" << std::endl;
            tiempotr += 1;

            std::cout << "El robot avanza por " << tiempoav << " segundos" << std::endl;
            tiempotr += static_cast<int>(tiempoav);

            std::cout << "El robot gira a la izquierda por 1.5 segundos" << std::endl;
            tiempotr += 1;

            std::cout << "El robot toma 3 herramientas por 5 segundos" << std::endl;
            tiempotr += 5;

            std::cout << "El robot gira a la izquierda por 1.5 segundos" << std::endl;
            tiempotr += 1;

            std::cout << "El robot avanza de regreso por " << tiempoav << " segundos" << std::endl;
            tiempotr += static_cast<int>(tiempoav);

            std::cout << "El robot deja herramientas por 2 segundos" << std::endl;
            tiempotr += 2;
            
        } else {
            std::cout << "\nIngrese una opcion valida. " << std::endl;
        }
    } while (opcion != '1' && opcion != '2' && opcion != '3');

    std::cout << "\n\n--- Ingresando al teleoperado... ---\n\n" << std::endl;
    while (tiempo_acumulado < 160) {
       char opcion;
        int tiempo = 0, grados = 0;

        std::cout << "Elija un botón (x, y, b, a) o axis (1, 2, 3, 4): ";
        std::cin >> opcion;

        if (opcion == 'x') {
            tiempo = 3;
            std::cout << "La polea sube por " << tiempo << " segundos" << std::endl;
            tiempotr += tiempo;
            
        } else if (opcion == 'y') {
            tiempo = 3;
            std::cout << "La polea baja por " << tiempo << " segundos" << std::endl;
            tiempotr += tiempo;
            
        } else if (opcion == 'b') {
            tiempo = 1;
            std::cout << "Los brazos se abren por " << tiempo << " segundo" << std::endl;
            tiempotr += tiempo;
            
        } else if (opcion == 'a') {
            tiempo = 1;
            std::cout << "Los brazos se cierran por " << tiempo << " segundo" << std::endl;
            tiempotr += tiempo;
            
        } else if (opcion == '1') {
            std::cout << "¿Por cuánto tiempo avanza el chasis? ";
            std::cin >> tiempo;
            std::cout << "El chasis avanza por " << tiempo << " segundos" << std::endl;
            tiempotr += tiempo;
            
        } else if (opcion == '2') {
            std::cout << "¿Por cuánto tiempo retrocede el chasis? ";
            std::cin >> tiempo;
            std::cout << "El chasis retrocede por " << tiempo << " segundos" << std::endl;
            tiempotr += tiempo;
            
        } else if (opcion == '3') {
            std::cout << "¿Por cuánto tiempo gira a la derecha el chasis? " << std::endl;
            std::cin >> tiempo;
            std::cout << "¿Cuántos grados gira a la derecha el chasis? " << std::endl;
            std::cin >> grados;
            std::cout << "El chasis gira a la derecha por " << tiempo << " segundos y gira " << grados << " grados" << std::endl;
            tiempotr += tiempo;
            
        } else if (opcion == '4') {
            std::cout << "¿Por cuánto tiempo gira a la izquierda el chasis? " << std::endl;
            std::cin >> tiempo;
            std::cout << "¿Cuántos grados gira a la izquierda el chasis? " << std::endl;
            std::cin >> grados;
            std::cout << "El chasis gira a la izquierda por " << tiempo << " segundos y gira " << grados << " grados" << std::endl;
            tiempotr += tiempo;
            
        } else {
            std::cout << "Opción no válida. Por favor, elija de nuevo." << std::endl;
            continue;
        }

        int tiempo_restante = 165 - tiempotr;
        std::cout << "Te quedan " << tiempo_restante << " segundos" << std::endl;
        if (tiempo_restante <= 30) {
            std::cout << "tiempo endgame" << std::endl;
        }
        if (tiempo_restante >= 165) {
            std::cout << "Se acabó el tiempo." << std::endl;
        }
    }

    return 0;
}
