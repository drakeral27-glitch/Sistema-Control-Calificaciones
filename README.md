# Sistema de control de calificaciones

**Estudiante:** Wilmen Baez  
**Matrícula:** 2025-2381  
**Asignatura:** Lógica de Programación  
**Profesor:** Gamalier Reyes del Carmen  
**Actividad:** Sistema de control de calificaciones de un centro educativo  
**Fecha de entrega:** [Completar]

## Descripción
Este programa de consola permite registrar las calificaciones de los estudiantes de un grupo. Solicita cuatro notas por estudiante, calcula el promedio y determina si el estudiante está aprobado o reprobado. Al finalizar presenta un resumen general del grupo.

## Datos de entrada
- Cantidad de estudiantes, que debe ser mayor que cero.
- Nombre de cada estudiante.
- Cuatro calificaciones por estudiante, cada una entre 0 y 100.
- Respuesta `s` o `n` para decidir si se registra otro grupo.

## Proceso
1. Se solicita y valida la cantidad de estudiantes.
2. Se recorren los estudiantes del grupo.
3. Para cada estudiante se solicita el nombre y sus cuatro calificaciones.
4. Se valida que cada calificación esté dentro del rango permitido.
5. Se calcula el promedio dividiendo la suma de las cuatro notas entre cuatro.
6. Se cuenta como aprobado al estudiante con promedio de 70 o más; en caso contrario, se cuenta como reprobado.
7. Se acumulan los promedios y se identifica el promedio más alto.
8. Se muestra el resumen y se pregunta si se desea registrar otro grupo.

## Datos de salida
- Promedio de cada estudiante y su condición (aprobado/reprobado).
- Cantidad total de aprobados y reprobados.
- Promedio general del grupo.
- Nombre y promedio del estudiante con el promedio más alto.

## Uso de las estructuras repetitivas
- **`do while`:** repite el registro completo cuando el usuario responde `s`. Se utiliza porque el proceso debe ejecutarse al menos una vez.
- **`while`:** valida que la cantidad de estudiantes sea mayor que cero y que cada calificación esté entre 0 y 100.
- **`for` externo:** recorre la cantidad de estudiantes indicada.
- **`for` interno:** solicita las cuatro calificaciones de cada estudiante.

## Compilación y ejecución
Con GCC instalado, abrir una terminal en la carpeta del proyecto y ejecutar:

```bash
g++ main.cpp -o main
./main
```

En Windows PowerShell, ejecutar el programa con:

```powershell
.\main.exe
```

## Evidencias de ejecución
Agregar en esta sección capturas reales del programa ejecutándose. Las capturas deben mostrar pruebas distintas, por ejemplo:
1. Registro de un grupo con estudiantes aprobados y reprobados.
2. Validación de una nota fuera del rango (por ejemplo, 120).
3. Registro de un segundo grupo.

Guardar las imágenes dentro de una carpeta llamada `capturas` y enlazarlas aquí. Ejemplo:

```markdown
![Prueba 1](capturas/prueba1.png)
![Prueba 2](capturas/prueba2.png)
![Prueba 3](capturas/prueba3.png)
```

## Archivos del proyecto
- `main.cpp`: código fuente del programa.
- `README.md`: documentación del proyecto.
- `capturas/`: evidencias de ejecución agregadas por el estudiante.
