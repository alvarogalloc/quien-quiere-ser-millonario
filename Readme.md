# Quien Quiere Ser Millonario
## Proyecto Final: Análisis y Diseño de algoritmos

## Hecho por: Lourdes Orozco, Lourdes Álvarez y Álvaro Gallo

## Descripción

Este proyecto es una implementación en **C++23** de un juego inspirado en el clásico "Quien Quiere Ser Millonario". Utiliza la biblioteca **HelloImGui** para la interfaz gráfica de usuario (GUI) y permite al usuario participar en un cuestionario interactivo para ganar premios simulados en efectivo.

El juego presenta un conjunto de preguntas de opción múltiple con niveles de dificultad, mostrando las recompensas correspondientes según la cantidad de preguntas respondidas correctamente.

## Requisitos

- **C++23** compatible con tu compilador.
- **HelloImGui**: Una biblioteca basada en **Dear ImGui** para crear interfaces gráficas rápidas y reactivas.
- **Un compilador compatible con C++23**.
- **Librerías de ImGui**: Es necesario instalar ImGui y sus dependencias para compilar y ejecutar este proyecto.

### Dependencias

- **ImGui**: Biblioteca para la creación de interfaces gráficas.
- **HelloImGui**: Facilita la integración de ImGui en aplicaciones con múltiples plataformas y entornos gráficos.
- **Librerías estándar de C++** (para funciones como `std::array`, `std::string`, `std::locale` y manipulación de números aleatorios).
- **Cmake**: usado para crear los ejecutables de manera multiplataforma


## Características

- **Interfaz gráfica** creada con **HelloImGui** y **ImGui**.
- **Preguntas aleatorias** en formato múltiple.
- **Sistema de puntuación** basado en la correcta respuesta de las preguntas.
- **Premios simulados** que aumentan con cada pregunta respondida correctamente.

## Estructura del código

### Funciones principales

1. **poll_random_question(level)**:
   Genera una pregunta aleatoria basada en el nivel del jugador.

2. **CustomButton(label)**:
   Define y dibuja un botón personalizado para la interfaz gráfica.

3. **BackgroundImage()**:
   Dibuja el fondo de la interfaz desde un archivo de imagen.

4. **prize_box(question_number, current_question)**:
   Muestra las cajas de premios con los montos que el jugador puede ganar dependiendo de las preguntas respondidas correctamente.

5. **question_gui(state, current_question)**:
   Muestra la interfaz de la pregunta actual, sus respuestas y evalúa si la respuesta seleccionada es correcta o incorrecta.

6. **show_scores_gui(current_question)**:
   Muestra la interfaz con los premios de las preguntas ya respondidas.

### Escenas

- **title**: Pantalla de inicio, muestra el logo y los botones "Jugar" y "Salir".
- **show_scores**: Pantalla de puntuación, muestra el progreso de las respuestas.
- **question**: Pantalla donde se presentan las preguntas y opciones de respuesta.
- **gameover**: Pantalla de fin de juego en caso de respuesta incorrecta.
- **winner**: Pantalla de victoria cuando el jugador llega al final del juego con todas las respuestas correctas.

### Configuración de paleta de colores

Se utilizan colores personalizados para botones, bordes y fondos:
```cpp
namespace pallete {
    constexpr static auto title_button = ImColor(23, 14, 55).Value;
    constexpr static auto title_button_hovered = ImColor(46, 38, 75).Value;
    constexpr static auto color_border = ImColor(255, 255, 255).Value;
    constexpr static auto green = ImColor(105, 175, 18).Value;
    constexpr static auto gold = ImColor(175, 168, 18).Value;
}
```

### Funciones adicionales

- **MyLoadFonts()**: Carga las fuentes personalizadas para la interfaz gráfica.
- **BackgroundImage()**: Dibuja el fondo de la pantalla utilizando una imagen.

## Ejecución del Juego

- Al iniciar el juego, el jugador verá una pantalla de inicio con las opciones de "Jugar" y "Salir".
- Al seleccionar "Jugar", comenzará el juego con una serie de preguntas y opciones.
- El jugador avanza respondiendo correctamente las preguntas. La puntuación se muestra en la pantalla de "show_scores".
- El juego termina cuando el jugador responde incorrectamente (pantalla de "Game Over") o completa todas las preguntas (pantalla de "Ganaste").

