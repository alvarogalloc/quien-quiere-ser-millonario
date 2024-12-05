# Quien Quiere Ser Millonario
## Proyecto Final: Análisis y Diseño de algoritmos

## Hecho por: Lourdes Orozco, Lourdes Álvarez y Álvaro Gallo

## Descripción

Este proyecto es una implementación en **C++23** de un juego inspirado en el clásico "Quien Quiere Ser Millonario". Utiliza la biblioteca **HelloImGui** para la interfaz gráfica de usuario (GUI) y permite al usuario participar en un cuestionario interactivo para ganar premios simulados en efectivo.

El juego presenta un conjunto de preguntas de opción múltiple con niveles de dificultad, mostrando las recompensas correspondientes según la cantidad de preguntas respondidas correctamente.

## Requisitos

- **Un compilador compatible con C++23** (probado con clang 19.1.3 y msvc 19).
- **Librerías de ImGui**: Es necesario instalar ImGui y sus dependencias para compilar y ejecutar este proyecto.
- **CMake**: usado para crear los ejecutables de manera multiplataforma

## Instrucciones para compilar
- se asume terminal de comandos bash, zsh o fish
```
git clone https://github.com/alvarogalloc/quien-quiere-ser-millonario
cd quien-quiere-ser-millonario
cmake -S . -B build
cmake --build build
./build/quien-quiere-ser-millonario
```

### Dependencias

- **ImGui**: Biblioteca para la creación de interfaces gráficas.
- **HelloImGui**: Facilita la integración de ImGui en aplicaciones con múltiples plataformas y entornos gráficos.
- **Librerías estándar de C++23** (se utilizan librerias modernas `<print>`, `<array>`, `<string_view`, etc.).

## Características

- **Interfaz gráfica** creada con **HelloImGui** y **ImGui**.
- **Preguntas aleatorias** en formato múltiple.
- **Sistema de puntuación** basado en la correcta respuesta de las preguntas.
- **Premios simulados** que aumentan con cada pregunta respondida correctamente.

