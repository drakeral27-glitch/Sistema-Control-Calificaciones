#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    char continuar;

    // Este do-while permite registrar uno o varios grupos.
    do {
        int cantidadEstudiantes;
        int aprobados = 0;
        int reprobados = 0;
        double sumaPromedios = 0.0;
        double promedioMasAlto = -1.0;
        string nombreMejorEstudiante;

        cout << "\n=== SISTEMA DE CALIFICACIONES ===\n";
        cout << "Cantidad de estudiantes: ";
        cin >> cantidadEstudiantes;

        // Validar que la cantidad de estudiantes sea positiva.
        while (cantidadEstudiantes <= 0) {
            cout << "Dato invalido. Escriba una cantidad mayor que cero: ";
            cin >> cantidadEstudiantes;
        }

        // Recorrer todos los estudiantes del grupo.
        for (int estudiante = 1; estudiante <= cantidadEstudiantes; estudiante++) {
            string nombre;
            double sumaNotas = 0.0;
            double nota;

            cout << "\n--- Registro del estudiante " << estudiante << " ---\n";

            // Limpiar el salto de linea antes de leer el nombre completo.
            cin.ignore(10000, '\n');
            cout << "Nombre del estudiante: ";
            getline(cin, nombre);

            // Solicitar las cuatro calificaciones y validar cada una.
            for (int numeroNota = 1; numeroNota <= 4; numeroNota++) {
                cout << "Calificacion " << numeroNota << " (0-100): ";
                cin >> nota;

                while (nota < 0 || nota > 100) {
                    cout << "Calificacion fuera de rango. Intente otra vez: ";
                    cin >> nota;
                }

                sumaNotas += nota;
            }

            double promedio = sumaNotas / 4.0;
            cout << fixed << setprecision(2);
            cout << "Promedio de " << nombre << ": " << promedio;

            if (promedio >= 70.0) {
                cout << " - Aprobado\n";
                aprobados++;
            } else {
                cout << " - Reprobado\n";
                reprobados++;
            }

            sumaPromedios += promedio;

            // Guardar el nombre y promedio cuando se encuentra uno mayor.
            if (promedio > promedioMasAlto) {
                promedioMasAlto = promedio;
                nombreMejorEstudiante = nombre;
            }
        }

        double promedioGrupo = sumaPromedios / cantidadEstudiantes;

        cout << "\n========== RESUMEN DEL GRUPO ==========\n";
        cout << "Aprobados: " << aprobados << '\n';
        cout << "Reprobados: " << reprobados << '\n';
        cout << "Promedio general: " << promedioGrupo << '\n';
        cout << "Mejor promedio: " << nombreMejorEstudiante
             << " (" << promedioMasAlto << ")\n";

        cout << "\nDesea registrar otro grupo? (s/n): ";
        cin >> continuar;

        // El proceso se repite mientras la respuesta sea s o S.
    } while (continuar == 's' || continuar == 'S');

    cout << "\nFin del sistema. Gracias.\n";
    return 0;
}
