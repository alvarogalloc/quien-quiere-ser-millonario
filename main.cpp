#ifndef DISABLE_MODULES
import std;
import hello_imgui;
#else
  #include "hello_imgui/hello_imgui.h"
  #include <array>
  #include <print>
  #include <random>
  #include <string_view>
#endif
struct question {
  std::string_view question;
  std::array<std::string_view, 4> answers;
  std::uint8_t correct_answer;
};
using all_questions = std::array<std::array<question, 10>, 15>;
// arreglo con todas las preguntas
constexpr static all_questions questions {{
  // level1
  {{
    {"¿Cuál es el río más largo del mundo?", {"Amazonas", "Nilo", "Yangtsé", "Misisipi"}, 1},
    {"¿Quién escribió \"Cien años de soledad\"?",
     {"Pablo Neruda", "Mario Vargas Llosa", "Gabriel García Márquez", "Isabel Allende"},
     2},
    {"¿En qué año llegó el hombre a la luna?", {"1965", "1969", "1971", "1975"}, 1},
    {"¿Cuál es el país más poblado del mundo?",
     {"India", "China", "Estados Unidos", "Indonesia"},
     0},
    {"¿Cuál es el océano más grande del planeta?",
     {"Océano Atlántico", "Océano Índico", "Océano Ártico", "Océano Pacífico"},
     3},
    {"¿Quién pintó la Mona Lisa?", {"Leonardo da Vinci", "Miguel Ángel", "Rafael", "Tiziano"}, 0},
    {"¿En qué continente se encuentra el desierto del Sahara?",
     {"América del Sur", "Asia", "África", "Oceanía"},
     2},
    {"¿Cuántos huesos tiene el cuerpo humano adulto?", {"206", "210", "201", "198"}, 0},
    {"¿Cuál es la capital de Japón?", {"Osaka", "Tokio", "Kioto", "Yokohama"}, 1},
    {"¿Quién es el autor de \"La Odisea\"?", {"Sófocles", "Aristóteles", "Homero", "Platón"}, 2},
  }},
  // level2
  {{
    {"¿Cuál es el país con más islas en el mundo?",
     {"Noruega", "Suecia", "Filipinas", "Indonesia"},
     1},
    {"¿Cuál es el metal más abundante en la Tierra?", {"Hierro", "Aluminio", "Cobre", "Plata"}, 1},
    {"¿En qué año comenzó la Segunda Guerra Mundial?", {"1935", "1939", "1941", "1945"}, 1},
    {"¿En qué país se encuentra la Torre Eiffel?", {"Italia", "Francia", "Alemania", "España"}, 1},
    {"¿Quién desarrolló la teoría de la relatividad?",
     {"Isaac Newton", "Galileo Galilei", "Albert Einstein", "Niels Bohr"},
     2},
    {"¿Quién pintó el techo de la Capilla Sixtina?",
     {"Miguel Ángel", "Rafael", "Leonardo da Vinci", "Caravaggio"},
     0},
    {"¿En qué país se originaron los Juegos Olímpicos?", {"Italia", "Grecia", "China", "Japón"}, 1},
    {"¿Cuántos planetas hay en el sistema solar?", {"8", "7", "9", "6"}, 0},
    {"¿Quién pintó \"La última cena\"?",
     {"Leonardo da Vinci", "Pablo Picasso", "Claude Monet", "Salvador Dalí"},
     0},
    {"¿En qué ciudad está el Coliseo?", {"Atenas", "Roma", "París", "Estambul"}, 1},
  }},
  // level3
  {{
    {"¿Cuál es el idioma más hablado en el mundo?",
     {"Inglés", "Chino mandarín", "Español", "Hindú"},
     1},
    {"¿Cuál es el animal terrestre más rápido del mundo?",
     {"Guepardo", "León", "Tigre", "Elefante"},
     0},
    {"¿En qué país se encuentra la Gran Muralla?", {"China", "India", "Japón", "Corea del Sur"}, 0},
    {"¿Cuál es el planeta más cercano al sol?", {"Mercurio", "Venus", "Tierra", "Marte"}, 0},
    {"¿En qué continente se encuentra Egipto?",
     {"Asia", "Europa", "África", "América del Norte"},
     2},
    {"¿Cuál es el órgano más grande del cuerpo humano?",
     {"Cerebro", "Hígado", "Piel", "Corazón"},
     2},
    {"¿Quién pintó \"El grito\"?",
     {"Edvard Munch", "Vincent van Gogh", "Pablo Picasso", "Claude Monet"},
     0},
    {"¿En qué año se fundó Facebook?", {"2001", "2004", "2008", "2012"}, 1},
    {"¿Cuál es la moneda oficial de Japón?", {"Dólar", "Yen", "Peso", "Euro"}, 1},
    {"¿En qué país se celebraron los últimos juegos Olímpicos?",
     {"Francia", "Grecia", "Estados Unidos", "Italia"},
     0},
  }},
  // level4
  {{
    {"¿Cuál es el símbolo químico del agua?", {"HO", "O2", "H2O", "H2O2"}, 2},
    {"¿Cuántos lados tiene un hexágono?", {"5", "6", "7", "8"}, 1},
    {"¿Cuál es el metal más caro del mundo?", {"Plata", "Oro", "Rutenio", "Rodio"}, 3},
    {"¿En qué continente se encuentra Brasil?",
     {"África", "Europa", "América del Sur", "Oceanía"},
     2},
    {"¿Cuántos días tiene un año bisiesto?", {"364", "365", "366", "367"}, 2},
    {"¿Cuál es la capital de Australia?", {"Sydney", "Melbourne", "Canberra", "Brisbane"}, 2},
    {"¿Quién escribió \"Don Quijote de la Mancha\"?",
     {"Lope de Vega", "Miguel de Cervantes", "Garcilaso de la Vega", "Francisco de Quevedo"},
     1},
    {"¿Cuántos continentes hay en el mundo?", {"5", "6", "7", "8"}, 2},
    {"¿Quién es conocido como el \"Padre de la Computación\"?",
     {"Alan Turing", "Charles Babbage", "Nikola Tesla", "Steve Jobs"},
     0},
    {"¿En qué país se encuentra el Taj Mahal?",
     {"Arabia Saudita", "Pakistán", "India", "Nepal"},
     2},
  }},
  // level5
  {{
    {"¿Cuál es el océano más pequeño?",
     {"Océano Atlántico", "Océano Índico", "Océano Ártico", "Océano Pacífico"},
     2},
    {"¿Cuántos anillos tiene la bandera olímpica?", {"3", "4", "5", "6"}, 2},
    {"¿Quién fue el primer presidente de Estados Unidos?",
     {"George Washington", "Abraham Lincoln", "Thomas Jefferson", "John Adams"},
     0},
    {"¿En qué país se originó el ajedrez?", {"Rusia", "India", "China", "Grecia"}, 1},
    {"¿En qué año comenzó la Revolución Francesa?", {"1776", "1789", "1812", "1848"}, 1},
    {"¿Quién descubrió la penicilina?",
     {"Louis Pasteur", "Marie Curie", "Alexander Fleming", "Albert Einstein"},
     2},
    {"¿En qué año comenzó la Guerra de Independencia de México?",
     {"1810", "1821", "1808", "1836"},
     0},
    {"¿Qué estructura de datos utiliza el principio LIFO?",
     {"Cola", "Pila", "Lista enlazada", "Árbol"},
     1},
    {"¿Cuál es el planeta más grande del sistema solar?",
     {"Tierra", "Saturno", "Júpiter", "Marte"},
     2},
    {"¿En qué país no ha habido Juegos Olímpicos?", {"Egipto", "Finlandia", "China", "Japón"}, 0},
  }},
  // level6
  {{
    {"¿Cuál es el país más grande del mundo en términos de superficie "
     "terrestre?",
     {"Estados Unidos", "Rusia", "Canadá", "China"},
     1},
    {"¿Quién fue el último faraón de Egipto?",
     {"Ramsés II", "Tutankamón", "Cleopatra VII", "Nefertiti"},
     2},
    {"¿En qué año se fundó la Universidad de Harvard?", {"1609", "1636", "1700", "1500"}, 1},
    {"¿Qué ciudad es conocida como la \"Ciudad Eterna\"?",
     {"París", "Roma", "Atenas", "Jerusalén"},
     1},
    {"¿Qué filósofo es conocido por su obra La República?",
     {"Aristóteles", "Platón", "Sócrates", "Epicurio"},
     1},
    {"¿Qué continente tiene el mayor número de países?",
     {"Europa", "África", "Asia", "América"},
     1},
    {"¿Cuál es el único continente que no tiene una población indígena?",
     {"América", "Oceanía", "Europa", "Antártida"},
     3},
    {"¿Cuál es el país más pequeño del mundo?", {"Vaticano", "Mónaco", "Nauru", "San Marino"}, 0},
    {"¿Qué escritor británico es conocido como el \"Bardo de Avon\"?",
     {"Charles Dickens", "William Shakespeare", "James Joyce", "John Milton"},
     1},
    {"¿Cuál es el nombre del satélite natural de Saturno que se cree "
     "podría albergar vida?",
     {"Titan", "Europa", "Encélado", "Ganimedes"},
     2},
  }},
  // level7
  {{
    {"¿Qué metal es líquido a temperatura ambiente?", {"Mercurio", "Galio", "Bromo", "Plata"}, 1},
    {"¿Quién fue el primer emperador de China?",
     {"Qin Shi Huang", "Liu Bang", "Han Wudi", "Sun Yat-sen"},
     0},
    {"¿En qué país se originó el budismo?", {"China", "India", "Japón", "Nepal"}, 1},
    {"¿Cuál es el único mamífero capaz de volar?",
     {"Murciélago", "Ardilla voladora", "Murciélago de la fruta", "Colibrí"},
     0},
    {"¿Quién inventó el primer avión funcional?",
     {"Samuel Morse", "Charles Lindbergh", "Hermanos Wright", "Alberto Santos-Dumont"},
     2},
    {"¿Cuál es la lengua más hablada en el mundo, por número de hablantes "
     "nativos?",
     {"Inglés", "Mandarín", "Español", "Hindi"},
     1},
    {"¿En qué país se encuentra el sitio arqueológico de Machu Picchu?",
     {"Perú", "Bolivia", "México", "Chile"},
     0},
    {"¿Qué teoría científica fue propuesta por Charles Darwin?",
     {"Teoría de la relatividad", "Teoría de la evolución", "Teoría cuántica",
      "Teoría de la gravedad"},
     1},
    {"¿Cuál es el nombre del asteroide que causó la extinción de los "
     "dinosaurios?",
     {"Apofis", "Vesta", "Chicxulub", "Ceres"},
     2},
    {"¿Qué antiguo imperio abarcaba gran parte del Medio Oriente, el norte "
     "de África y Europa?",
     {"Imperio Romano", "Imperio Otomano", "Imperio Persa", "Imperio Bizantino"},
     2},
  }},
  // level8
  {{
    {"¿En qué año terminó la Guerra de Vietnam?", {"1972", "1975", "1969", "1980"}, 1},
    {"¿Quién es conocido como el \"padre de la teoría de la computación\"?",
     {"Alan Turing", "Charles Babbage", "John von Neumann", "Steve Jobs"},
     1},
    {"¿Qué país fue el primero en otorgar el derecho de voto a las "
     "mujeres?",
     {"Estados Unidos", "Nueva Zelanda", "Francia", "Canadá"},
     1},
    {"¿En qué año se construyó la Gran Muralla China?",
     {"300 a.C.", "221 a.C.", "500 a.C.", "150 a.C."},
     1},
    {"¿Cuál es la principal ciudad de la antigua Mesopotamia?",
     {"Ur", "Babilonia", "Nínive", "Asiria"},
     1},
    {"¿Qué antiguo filósofo griego dijo \"Solo sé que no sé nada\"?",
     {"Aristóteles", "Sócrates", "Platón", "Epicurio"},
     1},
    {"¿Quién pintó La persistencia de la memoria?",
     {"Pablo Picasso", "Claude Monet", "Salvador Dalí", "Vincent van Gogh"},
     2},
    {"¿En qué país se encuentra el Lago Baikal, el lago más profundo del "
     "mundo?",
     {"Estados Unidos", "Rusia", "China", "Canadá"},
     1},
    {"¿Cuál es la fórmula química del ozono?", {"O2", "O3", "O", "CO2"}, 1},
    {"¿Qué imperio construyó la Muralla de Adriano en el Reino Unido?",
     {"Imperio Romano", "Imperio Británico", "Imperio Persa", "Imperio Mongol"},
     0},
  }},

  // level9
  {{
    {"¿Cuál es el elemento químico más ligero?", {"Hidrógeno", "Helio", "Carbono", "Nitrógeno"}, 0},
    {"¿En qué continente se encuentra el Monte Kilimanjaro?",
     {"Asia", "África", "Europa", "América"},
     1},
    {"¿Qué escritor escribió El Infierno y La Divina Comedia?",
     {"William Shakespeare", "Dante Alighieri", "Johann Wolfgang von Goethe", "Víctor Hugo"},
     1},
    {"¿Qué famoso científico propuso la teoría heliocéntrica del sistema "
     "solar?",
     {"Galileo Galilei", "Nicolás Copérnico", "Johannes Kepler", "Isaac Newton"},
     1},
    {"¿Cuál es la capital de Mongolia?", {"Ulaanbaatar", "Bishkek", "Ulan Bator", "Astana"}, 0},
    {"¿Qué antiguo reino africano fue conocido por sus grandes riquezas y "
     "comercio de oro?",
     {"Egipto", "Imperio de Malí", "Imperio Zulú", "Reino de Kush"},
     1},
    {"¿Quién fue el primer ministro británico durante la Segunda Guerra "
     "Mundial?",
     {"Winston Churchill", "Neville Chamberlain", "Clement Attlee", "Edward Heath"},
     0},
    {"¿En qué año fue lanzado el primer satélite artificial, Sputnik 1?",
     {"1954", "1957", "1961", "1969"},
     1},
    {"¿Qué país tiene la mayor cantidad de pirámides en el mundo?",
     {"México", "Sudán", "Egipto", "Perú"},
     1},
    {"¿Qué filósofo francés es conocido por su famosa frase \"Pienso, "
     "luego existo\"?",
     {"Voltaire", "René Descartes", "Jean-Paul Sartre", "Michel de Montaigne"},
     1},
  }},

  // level10
  {{
    {"¿Qué famosa batalla tuvo lugar en 1066 en Inglaterra?",
     {"Batalla de Hastings", "Batalla de Waterloo", "Batalla de Agincourt", "Batalla de Naseby"},
     0},
    {"¿Qué país fue el primero en legalizar el matrimonio entre personas "
     "del mismo sexo?",
     {"Canadá", "Países Bajos", "España", "Argentina"},
     1},
    {"¿Qué civilización antigua construyó el Machu Picchu?",
     {"Los Incas", "Los Mayas", "Los Aztecas", "Los Egipcios"},
     0},
    {"¿Qué ciudad fue la primera en alcanzar los 1 millón de habitantes?",
     {"Roma", "Londres", "París", "Nueva York"},
     0},
    {"¿Qué animal tiene el cerebro más grande en relación con su tamaño "
     "corporal?",
     {"Delfín", "Cachalote", "Elefante", "Gorila"},
     1},
    {"¿Cuál es la montaña más alta de África?",
     {"Kilimanjaro", "Montañas del Atlas", "Monte Kenia", "Monte Ruinsori"},
     0},
    {"¿Qué filósofo griego fundó la escuela de pensamiento conocida como "
     "el \"Estoicismo\"?",
     {"Zenón de Citio", "Epicurio", "Sócrates", "Aristóteles"},
     0},
    {"¿En qué ciudad se encuentran las ruinas de Pompeya?",
     {"Nápoles", "Roma", "Florencia", "Venecia"},
     0},
    {"¿Qué famoso científico desarrolló la teoría de la evolución a través "
     "de la selección natural?",
     {"Charles Darwin", "Gregor Mendel", "Albert Einstein", "Louis Pasteur"},
     0},
    {"¿En qué ciudad se encuentra el famoso museo del Louvre?",
     {"Londres", "París", "Berlín", "Nueva York"},
     1},
  }},
  // level11
  {{
    {"¿Quién es el autor de El ruido y la furia?",
     {"William Faulkner", "F. Scott Fitzgerald", "Ernest Hemingway", "John Steinbeck"},
     0},
    {"¿Cuál fue el primer elemento químico sintetizado artificialmente?",
     {"Tecnecio", "Francio", "Americio", "Curio"},
     0},
    {"¿Cuál es el nombre del satélite natural más grande de Saturno?",
     {"Titán", "Encélado", "Europa", "Calisto"},
     0},
    {"¿Qué científico propuso el principio de incertidumbre?",
     {"Werner Heisenberg", "Albert Einstein", "Niels Bohr", "Max Planck"},
     0},
    {"¿Quién fue el último emperador romano?",
     {"Rómulo Augústulo", "Julio Nepote", "Constantino XI", "Teodosio I"},
     0},
    {"¿Cuál es el nombre del antiguo texto hindú que trata sobre la "
     "medicina y cirugía?",
     {"Sushruta Samhita", "Bhagavad Gita", "Rigveda", "Ramayana"},
     0},
    {"¿Qué imperio construyó la Gran Muralla China?",
     {"Dinastía Qin", "Dinastía Han", "Dinastía Ming", "Dinastía Tang"},
     0},
    {"¿En qué año se firmó la Declaración de Independencia de los Estados "
     "Unidos?",
     {"1776", "1783", "1775", "1789"},
     0},
    {"¿Cuál es el nombre de la primera novela escrita en inglés?",
     {"Beowulf", "Le Morte d'Arthur", "Piers Plowman", "The Canterbury Tales"},
     3},
    {"¿Quién es el padre de la medicina moderna?",
     {"Hipócrates", "Galeno", "Avicena", "Paracelso"},
     0},
  }},

  // level12
  {{
    {"¿En qué país se originó la filosofía estoica?", {"Grecia", "Roma", "Egipto", "Persia"}, 0},
    {"¿Cuál es el nombre científico del tigre?",
     {"Panthera leo", "Panthera tigris", "Panthera pardus", "Panthera onca"},
     1},
    {"¿Quién escribió En busca del tiempo perdido?",
     {"Marcel Proust", "James Joyce", "Virginia Woolf", "D. H. Lawrence"},
     0},
    {"¿Cuál es el único metal que es líquido a temperatura ambiente?",
     {"Mercurio", "Bismuto", "Cesio", "Galio"},
     0},
    {"¿En qué país tuvo lugar la Guerra de los Treinta Años?",
     {"Alemania", "Francia", "Inglaterra", "Italia"},
     0},
    {"¿Cuál es el símbolo químico del oro?", {"Au", "Ag", "Fe", "Pt"}, 0},
    {"¿Cuál es la capital de Bután?", {"Thimphu", "Katmandú", "Colombo", "Dhaka"}, 0},
    {"¿Quién fue el líder de la revolución rusa de octubre de 1917?",
     {"Vladimir Lenin", "Joseph Stalin", "León Trotsky", "Nicolás II"},
     0},
    {"¿Cuál es el nombre del primer satélite artificial lanzado al "
     "espacio?",
     {"Sputnik 1", "Explorer 1", "Vostok 1", "Apollo 11"},
     0},
    {"¿Qué lengua antigua es considerada la madre de las lenguas "
     "indoeuropeas?",
     {"Sánscrito", "Latín", "Griego", "Hebreo"},
     0},
  }},

  // level13
  {{
    {"¿Cuál es la capital de Uzbekistán?", {"Taskent", "Astana", "Dushanbe", "Biskek"}, 0},
    {"¿Quién desarrolló la teoría de la evolución por selección natural?",
     {"Charles Darwin", "Gregor Mendel", "Alfred Wallace", "Jean-Baptiste Lamarck"},
     0},
    {"¿Cuál es la composición de la atmósfera terrestre en su mayoría?",
     {"Nitrógeno", "Oxígeno", "Dióxido de carbono", "Argón"},
     0},
    {"¿Cuál fue la primera civilización en usar el sistema de base 60?",
     {"Los sumerios", "Los egipcios", "Los mayas", "Los romanos"},
     0},
    {"¿Quién es conocido como el padre de la geometría?",
     {"Euclides", "Pitágoras", "Tales de Mileto", "Arquímedes"},
     0},
    {"¿Cuál es el número atómico del carbono?", {"6", "8", "12", "4"}, 0},
    {"¿En qué año fue publicado el Manifiesto Comunista?", {"1848", "1837", "1867", "1859"}, 0},
    {"¿Qué poeta español escribió Poeta en Nueva York?",
     {"Federico García Lorca", "Antonio Machado", "Rafael Alberti", "Miguel Hernández"},
     0},
    {"¿Qué país colonizó el Congo en el siglo XIX?",
     {"Bélgica", "Francia", "Gran Bretaña", "Alemania"},
     0},
    {"¿Quién descubrió la estructura del ADN?",
     {"Watson y Crick", "Rosalind Franklin", "Mendel", "Pauling"},
     0},
  }},
  // level14
  {{
    {"¿Cuál es el lago más grande del mundo?",
     {"Mar Caspio", "Lago de Chapala", "Lago Victoria", "Lago Michigan"},
     0},
    {"¿Qué movimiento filosófico fue iniciado por René Descartes?",
     {"Racionalismo", "Empirismo", "Estoicismo", "Existencialismo"},
     0},
    {"¿En qué año cayó el Muro de Berlín?", {"1989", "1990", "1987", "1985"}, 0},
    {"¿Cuál es la función de los ribosomas en las células?",
     {"Síntesis de proteínas", "Almacenamiento de energía", "Transporte de nutrientes",
      "Replicación de ADN"},
     0},
    {"¿Qué país fue conocido antiguamente como Persia?", {"Irán", "Irak", "Turquía", "Siria"}, 0},
    {"¿En qué año comenzó la Primera Guerra Mundial?", {"1914", "1918", "1915", "1916"}, 0},
    {"¿Qué película fue la primera en ganar el Oscar a Mejor Película?",
     {"Lo que el viento se llevó", "Wings", "Casablanca", "La melodía de Broadway"},
     1},
    {"¿Quién escribió La metamorfosis?",
     {"Franz Kafka", "Herman Hesse", "Thomas Mann", "Albert Camus"},
     0},
    {"¿Cuál es el metal más abundante en la corteza terrestre?",
     {"Aluminio", "Hierro", "Calcio", "Magnesio"},
     0},
    {"¿Cuál es la velocidad de la luz en el vacío?",
     {"299,792 km/s", "300,000 km/s", "299,000 km/s", "310,000 km/s"},
     0},
  }},

  // level15
  {{
    {"¿Qué dios griego es conocido como el mensajero de los dioses?",
     {"Hermes", "Apolo", "Ares", "Zeus"},
     0},
    {"¿Qué científico introdujo el concepto de \"radioactividad\"?",
     {"Marie Curie", "Henri Becquerel", "Niels Bohr", "James Chadwick"},
     1},
    {"¿Cuál es el valor aproximado de la constante de Planck?",
     {"6.626 x 10^-34 J·s", "6.626 x 10^-31 J·s", "9.109 x 10^-34 J·s", "3.142 x 10^-34 J·s"},
     0},
    {"¿Cuál es la altura de la montaña más alta del mundo?",
     {"8,848 m", "8,611 m", "8,035 m", "9,001 m"},
     0},
    {"¿Qué país es conocido como el 'techo del mundo'?",
     {"Tíbet", "Nepal", "India", "Mongolia"},
     0},
    {"¿Cuál fue la capital del Imperio Inca?", {"Cuzco", "Machu Picchu", "Quito", "Cajamarca"}, 0},
    {"¿Cuál es el órgano más grande del cuerpo humano?",
     {"La piel", "El hígado", "El corazón", "Los pulmones"},
     0},
    {"¿Qué ciudad es famosa por el muro de los lamentos?",
     {"Jerusalén", "Tel Aviv", "Haifa", "Nazaret"},
     0},
    {"¿Qué matemático introdujo el concepto de 'infinito'?",
     {"Georg Cantor", "René Descartes", "Blaise Pascal", "Leonardo de Pisa"},
     0},
    {"¿Quién es el autor de la teoría heliocéntrica?",
     {"Nicolás Copérnico", "Johannes Kepler", "Galileo Galilei", "Tycho Brahe"},
     0},
  }},

}};

constexpr static std::string_view title {"Quien quiere ser millonario?"};
constexpr static std::array windowSize {1280, 720};
constexpr static std::array prizes {500,   1000,  2000,  3000,   5000,   7500,   10000,  12500,
                                    15000, 25000, 50000, 100000, 250000, 500000, 1000000};

namespace pallete {

  constexpr static auto title_button = ImColor(23, 14, 55).Value;
  constexpr static auto title_button_hovered = ImColor(46, 38, 75).Value;

  constexpr static auto color_border = ImColor(255, 255, 255).Value;
  constexpr static auto green = ImColor(105, 175, 18).Value;
  constexpr static auto gold = ImColor(175, 168, 18).Value;
} // namespace pallete
HelloImGui::FontDpiResponsive* g_font = nullptr;

// son funciones solo usadas en este archivo
auto poll_random_question(std::uint8_t level) -> question
{
  // no son objetos ligeros, por eso se usa static
  static std::random_device s_random_device;
  static std::minstd_rand s_generator(s_random_device());
  std::uniform_int_distribution<std::uint8_t> distribution(0, questions.at(0).size() - 1);
  return questions.at(level - 1).at(distribution(s_generator));
}

void load_my_font()
{
  HelloImGui::GetRunnerParams()->dpiAwareParams.onlyUseFontDpiResponsive = true;
  constexpr static auto font_size = 56.f;
  g_font = HelloImGui::LoadFontDpiResponsive("fonts/DroidSans.ttf", font_size);
}

void BackgroundImage()
{
  ImGui::SetCursorPos(ImVec2(0, 0));
  HelloImGui::ImageFromAsset("bg.png");
  ImGui::SetCursorPos(ImVec2(0, 0));
}

void top_left_logo()
{
  constexpr static ImVec2 logo_size {128, 128};
  HelloImGui::ImageFromAsset("Logo.png", logo_size);
  ImGui::SetCursorPos(ImVec2(0, 0));
}

auto custom_button(const char* label) -> bool
{
  constexpr static ImVec2 buttonSize(300, 80);
  ImGui::SetCursorPosX((ImGui::GetWindowWidth() - buttonSize.x) / 2);

  ImGui::PushStyleColor(ImGuiCol_Button, pallete::title_button);
  ImGui::PushStyleColor(ImGuiCol_ButtonHovered, pallete::title_button_hovered);
  ImGui::PushStyleColor(ImGuiCol_Border, pallete::color_border);

  ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 5.f);
  ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
  ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));
  ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 30.f);

  
  bool pressed = ImGui::Button(label, buttonSize);
  

  ImGui::PopStyleVar(4);

  ImGui::PopStyleColor(3);
  return pressed;
}
void timer_bar(const std::uint8_t current_time, const std::uint8_t max_time)
{
  if (current_time > max_time) {
    std::println("Invalid time");
    return;
  }
  const auto progress = static_cast<float>(current_time) / max_time;

  constexpr static ImVec2 bar_size {300, 48};
  const ImVec2 bar_pos {(ImGui::GetWindowWidth() - bar_size.x) / 2, 10};

  ImGui::SetCursorPos(bar_pos);

  ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0);
  ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.f);

  ImGui::PushStyleColor(ImGuiCol_PlotHistogram, pallete::green);

  ImGui::ProgressBar(progress, bar_size, std::format("{:L} s", max_time - current_time).c_str());

  ImGui::PopStyleColor();
  ImGui::PopStyleVar(2);
}
auto title_screen_gui(bool &exit_flag) -> bool
{
  BackgroundImage();

  constexpr static ImVec2 logo_size {340, 340};
  ImGui::SetCursorPosX((ImGui::GetWindowWidth() - logo_size.x) / 2);
  HelloImGui::ImageFromAsset("Logo.png", logo_size);

  constexpr static ImVec2 spacing {0, 34};
  ImGui::Dummy(spacing);
  ImGui::Dummy(spacing);
  if (custom_button("Jugar")) {
    return true;
  }
  ImGui::Dummy(spacing);

  if (custom_button("Salir")) {
    exit_flag = true;
  }

  return false;
}

void prize_box(const std::uint8_t round_number, const std::uint8_t current_round)
{
  if (round_number < 1 || round_number > questions.size()) {
    std::println("Invalid question number");
    return;
  }
  const auto used_color = [round_number, current_round]() -> ImVec4 {
    ImVec4 color {pallete::title_button};
    if (round_number == current_round) {
      color = pallete::green;
    } else if (round_number == questions.size()) {
      color = pallete::gold;
    } else if (round_number < current_round) {
      color = pallete::title_button_hovered;
    } 
    return color;
  }();
  const ImVec2 prize_box_size {200.f + (25.f * round_number), 38};

  ImGui::SetCursorPosX((ImGui::GetWindowWidth() - prize_box_size.x) / 2);
  ImGui::PushStyleColor(ImGuiCol_Button, used_color);
  ImGui::PushStyleColor(ImGuiCol_ButtonActive, used_color);
  ImGui::PushStyleColor(ImGuiCol_ButtonHovered, used_color);
  ImGui::PushStyleColor(ImGuiCol_Border, pallete::color_border);

  ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 3.0f);
  ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 50.f);
  ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
  ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));

  

  ImGui::Button(std::format("$ {:L}", prizes.at(round_number - 1)).c_str(), prize_box_size);
  // formatea con $ y separador de miles, para eso se usa :L y std::locale("")
  // que usa el locale del sistema

  
  ImGui::PopStyleColor(4);
  ImGui::PopStyleVar(4);
}

// al presionar click, retorna true y pasa a la pregunta siguiente
auto show_scores_gui(std::uint8_t current_question) -> bool
{
  BackgroundImage();
  top_left_logo();

  // son 15 cajas de premios y iteramos de 15 a 1 para el tamaño de la caja
  for (std::int8_t i = questions.size(); i > 0; i--) {
    constexpr static ImVec2 spacing {0, 5};
    ImGui::Dummy(spacing);
    prize_box(i, current_question);
  }
  std::string_view prompt_text = "Haz click para continuar";
  
  // este patron se repite muchisimas veces, se podria hacer una funcion, 
  // pero complicaria un codigo que ya es de 800 lineas
  const ImVec2 prompt_pos {
    ImGui::GetWindowWidth() - (ImGui::CalcTextSize(prompt_text.data()).x + 10.f),
    ImGui::GetWindowHeight() - 50.f};
  ImGui::SetCursorPos(prompt_pos);

  ImGui::TextUnformatted(prompt_text.data());
  
  return ImGui::IsMouseClicked(0);
}

enum class question_state : std::uint8_t {
  not_answered,
  correct,
  incorrect,
};

// boton estilizado para el comodin
bool filter_5050_button()
{
  constexpr static ImVec2 button_size {96, 96};
  const ImVec2 button_pos {ImGui::GetWindowWidth() - button_size.x - 10, 10};
  ImGui::SetCursorPos(button_pos);

  ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 50.0f);
  ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 5.0f);

  ImGui::PushStyleColor(ImGuiCol_Button, pallete::title_button);
  ImGui::PushStyleColor(ImGuiCol_ButtonHovered, pallete::title_button_hovered);
  ImGui::PushStyleColor(ImGuiCol_Border, pallete::color_border);

  const bool is_pressed = ImGui::Button("50:50", button_size);

  ImGui::PopStyleColor(3);
  ImGui::PopStyleVar(2);
  return is_pressed;
}

bool play_again_button()
{
  constexpr static auto button_size = ImVec2(300, 80);
  ImGui::SetCursorPosX((ImGui::GetWindowWidth() - button_size.x) / 2);
  return custom_button("Jugar de nuevo");
}

// true cuando se presiona el boton y se quiere jugar de nuevo
bool end_screen_gui(std::string_view message)
{
  BackgroundImage();
  top_left_logo();

  
  const auto text_size = ImGui::CalcTextSize(message.data());
  ImGui::SetCursorPos(ImVec2((ImGui::GetWindowWidth() - text_size.x) / 2, 100));
  ImGui::TextUnformatted(message.data());
  

  ImGui::Dummy(ImVec2(0, 100));
  return play_again_button();
}

void question_gui(question_state& state, const question& current_question)
{
  BackgroundImage();
  top_left_logo();

  auto copy_color = pallete::title_button;
  copy_color.w = 0.7f;
  ImGui::PushStyleColor(ImGuiCol_Button, copy_color);
  ImGui::PushStyleColor(ImGuiCol_ButtonActive, copy_color);
  ImGui::PushStyleColor(ImGuiCol_ButtonHovered, copy_color);
  ImGui::PushStyleColor(ImGuiCol_Border, pallete::color_border);

  ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 5.0f);
  ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 50.f);
  ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
  ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));

  constexpr static ImVec2 prompt_pos {205, 64};
  constexpr static ImVec2 prompt_size {870, 160};
  ImGui::SetCursorPos(prompt_pos);
  constexpr static ImVec2 answer_button_size {480, 160};

  constexpr static auto spacing_around_prompt = 128;
  // lambda porque solo se usa aqui y el inline del compilador ayuda a reducir el tamaño, pero tiene su diagrama de flujo propio
  auto wrapped_text = [max_text_width = prompt_size.x - spacing_around_prompt](std::string str) {
    auto text_size = ImGui::CalcTextSize(str.data());
    if (text_size.x > max_text_width) {
      // put a \n in the middle of the string, but not in the middle of a word
      auto middle = str.size() / 2;
      auto middle_it = std::find_if(str.begin() + middle, str.end(), [](char ch) {
        return std::isspace(ch);
      });
      if (middle_it != str.end()) {
        *middle_it = '\n';
      }
    }
    return str;
  }(std::string {current_question.question});

  ImGui::Button(wrapped_text.c_str(), prompt_size);

  ImGui::PushStyleColor(ImGuiCol_ButtonHovered, [] {
    auto color = pallete::title_button_hovered;
    // change alpha
    color.w = 0.7f;
    return color;
  }());

  ImGui::SetCursorPosY(340);
  for (std::uint8_t i = 0; i < current_question.answers.size(); i++) {
    const auto& answer = current_question.answers.at(i);

    bool is_valid = answer != "";
    if (i % 2 == 1) {
      ImGui::SameLine();
      ImGui::SetCursorPosX(700);
    } else {
      ImGui::SetCursorPosX(100);
      if (i != 0) {
        ImGui::SetCursorPosY(520); // second row
      }
    }

    if (not is_valid) {
      // quita todos los event listeners de los botones quitados
      ImGui::BeginDisabled(true);
    }
    // '##'+id es un id para que imgui que haga el boton pero sin texto
    const auto button_text = is_valid ? answer.data() : std::format("##{}", i);
    if (ImGui::Button(button_text.c_str(), answer_button_size) and is_valid) {
      if (i == current_question.correct_answer) {
        state = question_state::correct;
      } else {
        state = question_state::incorrect;
      }
    }
    if (not is_valid) {
      ImGui::EndDisabled();
    }
  }
  ImGui::PopStyleColor(5);
  ImGui::PopStyleVar(4);
  
}

auto main() -> int
{
  // para usar el separador de miles y decimales del sistema
  std::locale::global(std::locale(""));

  HelloImGui::RunnerParams params;
  params.appWindowParams.windowGeometry.size = windowSize;
  params.appWindowParams.windowTitle = title;
  params.appWindowParams.resizable = false;
  params.callbacks.LoadAdditionalFonts = load_my_font;
  params.imGuiWindowParams.showMenuBar = false;
  params.imGuiWindowParams.showMenu_App = false;

  // otra vez solo declaro aqui porque solo se usa aqui
  enum class scene : std::uint8_t { title, show_scores, question, end };

  struct game_data {
    scene current_scene = scene::title;
    question_state state = question_state::not_answered;
    question current_question = poll_random_question(1);
    std::uint8_t current_round = 1;
    bool has_used_50_50 = false;
    int start_time = 0;
    std::string end_msg = "";
  };

  params.callbacks.ShowGui = [&params, data = game_data {}]() mutable {
    // 'data' lo tomo y pongo 'mutable' para que pueda la misma instancia  cada llamada

    // utilizo un enum para tener nombres descriptivos a valores numericos
    switch (data.current_scene) {
      case scene::title: {
        // hay dos maneras de salir de la app, con 'request quit' que esta definido por cada sistema operativo
        // MACOS: cmd+q, WINDOWS: alt+f4, LINUX: alt+f4
        // Web: cerrar la pestaña
        // la otra es el boton salir, por eso mando params.appShallExit por referencia
        if (title_screen_gui(params.appShallExit)) {
          data.current_scene = scene::show_scores;
          ImGui::SetWindowFontScale(0.5f);
        }
        break;
      }
      case scene::show_scores: {
        if (show_scores_gui(data.current_round)) {
          data.current_scene = scene::question;
          ImGui::SetWindowFontScale(0.7f);
          data.start_time = std::time(nullptr);
        }
        break;
      }
      case scene::question: {
        // si pusiera esta llamada al final, no se veria timer ni filtro 50:50
        question_gui(data.state, data.current_question);

        // manda segundos desde el epoch, se le resta el tiempo de inicio para saber cuanto tiempo ha pasado
        const int elapsed_seconds = std::time(nullptr) - data.start_time;
        const int max_time_seconds = 30;
        if (elapsed_seconds > max_time_seconds) {
          // si se acaba el tiempo, se va a la pantalla final
          data.current_scene = scene::end;
          data.end_msg = "Se te acabó el tiempo!";
        } else {
          // seguir mostrando el tiempo
          timer_bar(elapsed_seconds, max_time_seconds);
        }
        if (not data.has_used_50_50 and filter_5050_button()) {
          data.has_used_50_50 = true;
          const auto correct_answer = data.current_question.correct_answer;
          auto removed_1 = 0;
          auto removed_2 = 0;
          // 'borramos' dos respuestas incorrectas
          // si la respuesta correcta es la ultima, se borran las dos previas
          // sino, se borran las dos respuestas adyacentes si es posible sino las dos siguientes
          if (correct_answer == data.current_question.answers.size() - 1)
          {
            removed_1 = correct_answer - 2;
            removed_2 = correct_answer - 3;
          } else
          {
            removed_1 = correct_answer + 1;
            if (correct_answer == 0)
            {
              removed_2 = removed_1 + 1;
            } else
            {
              removed_2 = correct_answer - 1;
            }
          }
          
          data.current_question.answers.at(removed_1) = "";
          data.current_question.answers.at(removed_2) = "";
        }

        if (data.state == question_state::correct) {
          data.state = question_state::not_answered;
          if (data.current_round == questions.size()) {
            // 'end' es la misma para perder o ganar, lo que cambia es el mensaje
            data.current_scene = scene::end;
            data.end_msg = "Felicidades, has ganado 1,000,000$!";
            break;
          }
          // Pasar a la siguiente pregunta
          data.current_round++;
          data.current_question = poll_random_question(data.current_round);
          data.current_scene = scene::show_scores;
        } else if (data.state == question_state::incorrect) {
          data.current_scene = scene::end;
          data.end_msg = "Respuesta incorrecta!,\nSuerte la próxima vez!";
        }
        break;
      }
      case scene::end: {
        if (end_screen_gui(data.end_msg)) {
          // usar el constructor por defecto para resetear los valores
          data = game_data {};
        }
        break;
      }
    }
  };
  // en el pseudocodigo se cambia el callback por un while y el flag de exit, pero asi lo pide HelloImGui
  HelloImGui::Run(params);
}
