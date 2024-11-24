import std;
import hello_imgui;

struct question {
  std::string_view question;
  std::array<std::string_view, 4> answers;
  std::size_t correct_answer;
};
using all_questions = std::array<std::array<question, 10>, 15>;
constexpr static all_questions questions{{
    // level1
    {{
        {"¿Cuál es el río más largo del mundo?",
         {"Amazonas", "Nilo", "Yangtsé", "Misisipi"},
         1},
        {"¿Quién escribió \"Cien años de soledad\"?",
         {"Pablo Neruda", "Mario Vargas Llosa", "Gabriel García Márquez",
          "Isabel Allende"},
         2},
        {"¿En qué año llegó el hombre a la luna?",
         {"1965", "1969", "1971", "1975"},
         1},
        {"¿Cuál es el país más poblado del mundo?",
         {"India", "China", "Estados Unidos", "Indonesia"},
         1},
        {"¿Cuál es el océano más grande del planeta?",
         {"Océano Atlántico", "Océano Índico", "Océano Ártico",
          "Océano Pacífico"},
         3},
        {"¿Quién pintó la Mona Lisa?",
         {"Leonardo da Vinci", "Miguel Ángel", "Rafael", "Tiziano"},
         0},
        {"¿En qué continente se encuentra el desierto del Sahara?",
         {"América del Sur", "Asia", "África", "Oceanía"},
         2},
        {"¿Cuántos huesos tiene el cuerpo humano adulto?",
         {"206", "210", "201", "198"},
         0},
        {"¿Cuál es la capital de Japón?",
         {"Osaka", "Tokio", "Kioto", "Yokohama"},
         1},
        {"¿Quién es el autor de \"La Odisea\"?",
         {"Sófocles", "Aristóteles", "Homero", "Platón"},
         2},
    }},
    // level2
    {{
        {"¿Cuál es el país con más islas en el mundo?",
         {"Noruega", "Suecia", "Filipinas", "Indonesia"},
         1},
        {"¿Cuál es el metal más abundante en la Tierra?",
         {"Hierro", "Aluminio", "Cobre", "Plata"},
         1},
        {"¿En qué año comenzó la Segunda Guerra Mundial?",
         {"1935", "1939", "1941", "1945"},
         1},
        {"¿En qué país se encuentra la Torre Eiffel?",
         {"Italia", "Francia", "Alemania", "España"},
         1},
        {"¿Quién desarrolló la teoría de la relatividad?",
         {"Isaac Newton", "Galileo Galilei", "Albert Einstein", "Niels Bohr"},
         2},
        {"¿Quién pintó el techo de la Capilla Sixtina?",
         {"Miguel Ángel", "Rafael", "Leonardo da Vinci", "Caravaggio"},
         0},
        {"¿En qué país se originaron los Juegos Olímpicos?",
         {"Italia", "Grecia", "China", "Japón"},
         1},
        {"¿Cuántos planetas hay en el sistema solar?", {"8", "7", "9", "6"}, 0},
        {"¿Quién pintó \"La última cena\"?",
         {"Leonardo da Vinci", "Pablo Picasso", "Claude Monet",
          "Salvador Dalí"},
         0},
        {"¿En qué ciudad está el Coliseo?",
         {"Atenas", "Roma", "París", "Estambul"},
         1},
    }},
    // level3
    {{
        {"¿Cuál es el idioma más hablado en el mundo?",
         {"Inglés", "Chino mandarín", "Español", "Hindú"},
         1},
        {"¿Cuál es el animal terrestre más rápido del mundo?",
         {"Guepardo", "León", "Tigre", "Elefante"},
         0},
        {"¿En qué país se encuentra la Gran Muralla?",
         {"China", "India", "Japón", "Corea del Sur"},
         0},
        {"¿Cuál es el planeta más cercano al sol?",
         {"Mercurio", "Venus", "Tierra", "Marte"},
         0},
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
        {"¿Cuál es la moneda oficial de Japón?",
         {"Dólar", "Yen", "Peso", "Euro"},
         1},
        {"¿En qué país se celebraron los primeros Juegos Olímpicos modernos?",
         {"Francia", "Grecia", "Estados Unidos", "Italia"},
         1},
    }},
    // level4
    {{
        {"¿Cuál es el símbolo químico del agua?",
         {"HO", "O2", "H2O", "H2O2"},
         2},
        {"¿Cuántos lados tiene un hexágono?", {"5", "6", "7", "8"}, 1},
        {"¿Cuál es el metal más caro del mundo?",
         {"Plata", "Oro", "Rutenio", "Rodio"},
         3},
        {"¿En qué continente se encuentra Brasil?",
         {"África", "Europa", "América del Sur", "Oceanía"},
         2},
        {"¿Cuántos días tiene un año bisiesto?",
         {"364", "365", "366", "367"},
         2},
        {"¿Cuál es la capital de Australia?",
         {"Sydney", "Melbourne", "Canberra", "Brisbane"},
         2},
        {"¿Quién escribió \"Don Quijote de la Mancha\"?",
         {"Lope de Vega", "Miguel de Cervantes", "Garcilaso de la Vega",
          "Francisco de Quevedo"},
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
         {"Océano Atlántico", "Océano Índico", "Océano Ártico",
          "Océano Pacífico"},
         2},
        {"¿Cuántos anillos tiene la bandera olímpica?",
         {"3", "4", "5", "6"},
         2},
        {"¿Quién fue el primer presidente de Estados Unidos?",
         {"George Washington", "Abraham Lincoln", "Thomas Jefferson",
          "John Adams"},
         0},
        {"¿En qué país se originó el ajedrez?",
         {"Rusia", "India", "China", "Grecia"},
         1},
        {"¿En qué año comenzó la Revolución Francesa?",
         {"1776", "1789", "1812", "1848"},
         1},
        {"¿Quién descubrió la penicilina?",
         {"Louis Pasteur", "Marie Curie", "Alexander Fleming",
          "Albert Einstein"},
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
        {"¿En qué país se originaron los Juegos Olímpicos?",
         {"Italia", "Grecia", "China", "Japón"},
         1},
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
        {"¿En qué año se fundó la Universidad de Harvard?",
         {"1609", "1636", "1700", "1500"},
         1},
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
        {"¿Cuál es el país más pequeño del mundo?",
         {"Vaticano", "Mónaco", "Nauru", "San Marino"},
         0},
        {"¿Qué escritor británico es conocido como el \"Bardo de Avon\"?",
         {"Charles Dickens", "William Shakespeare", "James Joyce",
          "John Milton"},
         1},
        {"¿Cuál es el nombre del satélite natural de Saturno que se cree "
         "podría albergar vida?",
         {"Titan", "Europa", "Encélado", "Ganimedes"},
         2},
    }},
    // level7
    {{
        {"¿Qué metal es líquido a temperatura ambiente?",
         {"Mercurio", "Galio", "Bromo", "Plata"},
         1},
        {"¿Quién fue el primer emperador de China?",
         {"Qin Shi Huang", "Liu Bang", "Han Wudi", "Sun Yat-sen"},
         0},
        {"¿En qué país se originó el budismo?",
         {"China", "India", "Japón", "Nepal"},
         1},
        {"¿Cuál es el único mamífero capaz de volar?",
         {"Murciélago", "Ardilla voladora", "Murciélago de la fruta",
          "Colibrí"},
         0},
        {"¿Quién inventó el primer avión funcional?",
         {"Samuel Morse", "Charles Lindbergh", "Hermanos Wright",
          "Alberto Santos-Dumont"},
         2},
        {"¿Cuál es la lengua más hablada en el mundo, por número de hablantes "
         "nativos?",
         {"Inglés", "Mandarín", "Español", "Hindi"},
         1},
        {"¿En qué país se encuentra el sitio arqueológico de Machu Picchu?",
         {"Perú", "Bolivia", "México", "Chile"},
         0},
        {"¿Qué teoría científica fue propuesta por Charles Darwin?",
         {"Teoría de la relatividad", "Teoría de la evolución",
          "Teoría cuántica", "Teoría de la gravedad"},
         1},
        {"¿Cuál es el nombre del asteroide que causó la extinción de los "
         "dinosaurios?",
         {"Apofis", "Vesta", "Chicxulub", "Ceres"},
         2},
        {"¿Qué antiguo imperio abarcaba gran parte del Medio Oriente, el norte "
         "de África y Europa?",
         {"Imperio Romano", "Imperio Otomano", "Imperio Persa",
          "Imperio Bizantino"},
         2},
    }},
    // level8
    {{
        {"¿En qué año terminó la Guerra de Vietnam?",
         {"1972", "1975", "1969", "1980"},
         1},
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
        {"¿Cuál es la fórmula química del ozono?", {"O₂", "O₃", "O", "CO₂"}, 1},
        {"¿Qué imperio construyó la Muralla de Adriano en el Reino Unido?",
         {"Imperio Romano", "Imperio Británico", "Imperio Persa",
          "Imperio Mongol"},
         0},
    }},

    // level9
    {{
        {"¿Cuál es el elemento químico más ligero?",
         {"Hidrógeno", "Helio", "Carbono", "Nitrógeno"},
         0},
        {"¿En qué continente se encuentra el Monte Kilimanjaro?",
         {"Asia", "África", "Europa", "América"},
         1},
        {"¿Qué escritor escribió El Infierno y La Divina Comedia?",
         {"William Shakespeare", "Dante Alighieri",
          "Johann Wolfgang von Goethe", "Víctor Hugo"},
         1},
        {"¿Qué famoso científico propuso la teoría heliocéntrica del sistema "
         "solar?",
         {"Galileo Galilei", "Nicolás Copérnico", "Johannes Kepler",
          "Isaac Newton"},
         1},
        {"¿Cuál es la capital de Mongolia?",
         {"Ulaanbaatar", "Bishkek", "Ulan Bator", "Astana"},
         0},
        {"¿Qué antiguo reino africano fue conocido por sus grandes riquezas y "
         "comercio de oro?",
         {"Egipto", "Imperio de Malí", "Imperio Zulú", "Reino de Kush"},
         1},
        {"¿Quién fue el primer ministro británico durante la Segunda Guerra "
         "Mundial?",
         {"Winston Churchill", "Neville Chamberlain", "Clement Attlee",
          "Edward Heath"},
         0},
        {"¿En qué año fue lanzado el primer satélite artificial, Sputnik 1?",
         {"1954", "1957", "1961", "1969"},
         1},
        {"¿Qué país tiene la mayor cantidad de pirámides en el mundo?",
         {"México", "Sudán", "Egipto", "Perú"},
         1},
        {"¿Qué filósofo francés es conocido por su famosa frase \"Pienso, "
         "luego existo\"?",
         {"Voltaire", "René Descartes", "Jean-Paul Sartre",
          "Michel de Montaigne"},
         1},
    }},

    // level10
    {{
        {"¿Qué famosa batalla tuvo lugar en 1066 en Inglaterra?",
         {"Batalla de Hastings", "Batalla de Waterloo", "Batalla de Agincourt",
          "Batalla de Naseby"},
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
         {"Charles Darwin", "Gregor Mendel", "Albert Einstein",
          "Louis Pasteur"},
         0},
        {"¿En qué ciudad se encuentra el famoso museo del Louvre?",
         {"Londres", "París", "Berlín", "Nueva York"},
         1},
    }},
    // level11
    {{
        {"¿Quién es el autor de El ruido y la furia?",
         {"William Faulkner", "F. Scott Fitzgerald", "Ernest Hemingway",
          "John Steinbeck"},
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
         {"Beowulf", "Le Morte d'Arthur", "Piers Plowman",
          "The Canterbury Tales"},
         3},
        {"¿Quién es el padre de la medicina moderna?",
         {"Hipócrates", "Galeno", "Avicena", "Paracelso"},
         0},
    }},

    // level12
    {{
        {"¿En qué país se originó la filosofía estoica?",
         {"Grecia", "Roma", "Egipto", "Persia"},
         0},
        {"¿Cuál es el nombre científico del tigre?",
         {"Panthera leo", "Panthera tigris", "Panthera pardus",
          "Panthera onca"},
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
        {"¿Cuál es la capital de Bután?",
         {"Thimphu", "Katmandú", "Colombo", "Dhaka"},
         0},
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
        {"¿Cuál es la capital de Uzbekistán?",
         {"Taskent", "Astana", "Dushanbe", "Biskek"},
         0},
        {"¿Quién desarrolló la teoría de la evolución por selección natural?",
         {"Charles Darwin", "Gregor Mendel", "Alfred Wallace",
          "Jean-Baptiste Lamarck"},
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
        {"¿En qué año fue publicado el Manifiesto Comunista?",
         {"1848", "1837", "1867", "1859"},
         0},
        {"¿Qué poeta español escribió Poeta en Nueva York?",
         {"Federico García Lorca", "Antonio Machado", "Rafael Alberti",
          "Miguel Hernández"},
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
        {"¿En qué año cayó el Muro de Berlín?",
         {"1989", "1990", "1987", "1985"},
         0},
        {"¿Cuál es la función de los ribosomas en las células?",
         {"Síntesis de proteínas", "Almacenamiento de energía",
          "Transporte de nutrientes", "Replicación de ADN"},
         0},
        {"¿Qué país fue conocido antiguamente como Persia?",
         {"Irán", "Irak", "Turquía", "Siria"},
         0},
        {"¿En qué año comenzó la Primera Guerra Mundial?",
         {"1914", "1918", "1915", "1916"},
         0},
        {"¿Qué película fue la primera en ganar el Oscar a Mejor Película?",
         {"Lo que el viento se llevó", "Wings", "Casablanca",
          "La melodía de Broadway"},
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
         {"6.626 x 10^-34 J·s", "6.626 x 10^-31 J·s", "9.109 x 10^-34 J·s",
          "3.142 x 10^-34 J·s"},
         0},
        {"¿Cuál es la altura de la montaña más alta del mundo?",
         {"8,848 m", "8,611 m", "8,035 m", "9,001 m"},
         0},
        {"¿Qué país es conocido como el 'techo del mundo'?",
         {"Tíbet", "Nepal", "India", "Mongolia"},
         0},
        {"¿Cuál fue la capital del Imperio Inca?",
         {"Cuzco", "Machu Picchu", "Quito", "Cajamarca"},
         0},
        {"¿Cuál es el órgano más grande del cuerpo humano?",
         {"La piel", "El hígado", "El corazón", "Los pulmones"},
         0},
        {"¿Qué ciudad es famosa por el muro de los lamentos?",
         {"Jerusalén", "Tel Aviv", "Haifa", "Nazaret"},
         0},
        {"¿Qué matemático introdujo el concepto de 'infinito'?",
         {"Georg Cantor", "René Descartes", "Blaise Pascal",
          "Leonardo de Pisa"},
         0},
        {"¿Quién es el autor de la teoría heliocéntrica?",
         {"Nicolás Copérnico", "Johannes Kepler", "Galileo Galilei",
          "Tycho Brahe"},
         0},
    }},

}};

auto poll_random_question(std::size_t level) {
  static std::random_device rd;
  std::minstd_rand gen(
      rd()); // no ocupo un gran generador de números aleatorios
  std::uniform_int_distribution<std::size_t> dis(0, 9);
  return questions.at(level - 1).at(dis(gen));
}

constexpr static std::string_view title{"Quien quiere ser millonario?"};
constexpr static std::array windowSize{1280, 720};
static constexpr std::array prizes{500,   1000,   2000,   3000,   5000,
                                   7500,  10000,  12500,  15000,  25000,
                                   50000, 100000, 250000, 500000, 1000000};

namespace pallete {

constexpr static auto title_button = ImColor(23, 14, 55).Value;
constexpr static auto title_button_hovered = ImColor(46, 38, 75).Value;

constexpr static auto color_border = ImColor(255, 255, 255).Value;
constexpr static auto green = ImColor(105, 175, 18).Value;
constexpr static auto gold = ImColor(175, 168, 18).Value;

} // namespace pallete

HelloImGui::FontDpiResponsive *g_font = nullptr;
void MyLoadFonts() {
  HelloImGui::GetRunnerParams()->dpiAwareParams.onlyUseFontDpiResponsive = true;
  g_font = HelloImGui::LoadFontDpiResponsive(
      "fonts/DroidSans.ttf", 56.f); // will be loaded from the assets folder
}

void BackgroundImage() {
  HelloImGui::ImageFromAsset("bg.png");
  ImGui::SetCursorPos(ImVec2(0, 0));
}

bool CustomButton(const char *label) {
  // Custom button size
  ImVec2 buttonSize(300, 80);

  // Center the button
  ImGui::SetCursorPosX((ImGui::GetWindowWidth() - buttonSize.x) / 2);
  // Set custom colors

  ImGui::PushStyleColor(ImGuiCol_Button, pallete::title_button);
  ImGui::PushStyleColor(ImGuiCol_ButtonHovered, pallete::title_button_hovered);

  ImGui::PushStyleColor(ImGuiCol_Border, pallete::color_border);

  // Set custom styles
  ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 5.0f);
  ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
  ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));
  ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 30.0f);

  // Draw button
  ImGui::PushFont(g_font->font);
  bool pressed = ImGui::Button(label, buttonSize);
  ImGui::PopFont();

  // Restore styles
  ImGui::PopStyleVar(4);

  // Restore original colors
  ImGui::PopStyleColor(3);
  return pressed;
}
bool title_screen_gui(HelloImGui::RunnerParams &params) {

  // image
  // center
  constexpr static auto logo_size = ImVec2{340, 340};
  BackgroundImage();
  ImGui::SetCursorPosX((ImGui::GetWindowWidth() - logo_size.x) / 2);
  HelloImGui::ImageFromAsset("Logo.png", logo_size);
  ImGui::Dummy(ImVec2(0, 80));
  // Center the buttons
  if (CustomButton("Jugar")) {
    return true;
  }
  // spacing of 34 px
  ImGui::Dummy(ImVec2(0, 34));

  if (CustomButton("Salir")) {
    params.appShallExit = true;
  }

  return false;
}

void prize_box(const std::size_t question_number,
               const std::size_t current_question) {
  if (question_number < 1 || question_number > 15) {
    std::println("Invalid question number");
    return;
  }

  ImVec4 used_color;

  ImVec2 prize_box_size{200.f + 25.f * question_number, 38};
  if (question_number == current_question) {
    used_color = pallete::green;
  } else if (question_number == 15) {
    used_color = pallete::gold;
  } else if (question_number < current_question) {
    used_color = pallete::title_button_hovered;
  } else {
    used_color = pallete::title_button;
  }

  ImGui::SetCursorPosX((ImGui::GetWindowWidth() - prize_box_size.x) / 2);
  ImGui::PushStyleColor(ImGuiCol_Button, used_color);
  ImGui::PushStyleColor(ImGuiCol_ButtonActive, used_color);
  ImGui::PushStyleColor(ImGuiCol_ButtonHovered, used_color);
  ImGui::PushStyleColor(ImGuiCol_Border, pallete::color_border);

  // set full rounding
  ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 3.0f);
  ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 50.f);
  ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
  ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));

  ImGui::PushFont(g_font->font);

  ImGui::Button(std::format("$ {:L}", prizes.at(question_number - 1)).c_str(),
                prize_box_size);
  // formatea con $ y separador de miles, para eso se usa :L y std::locale("")
  // que usa el locale del sistema

  ImGui::PopFont();
  ImGui::PopStyleColor(4);
  ImGui::PopStyleVar(4);
}

bool show_scores_gui(std::size_t current_question) {
  BackgroundImage();
  // show logo scaled 128x128 on the top left corner
  HelloImGui::ImageFromAsset("Logo.png", ImVec2(128, 128));
  ImGui::SetCursorPos(ImVec2(0, 0));

  // this is 15 boxes one on top of the other with a prize money on each
  for (std::size_t i = 15; i > 0; i--) {
    ImGui::Dummy(ImVec2(0, 5));
    prize_box(i, current_question);
  }
  std::string_view text = "Presiona 'enter' para continuar";
  ImGui::PushFont(g_font->font);
  float displacement_x = ImGui::CalcTextSize(text.data()).x + 10.f;
  ImGui::SetCursorPos(ImVec2(ImGui::GetWindowWidth() - displacement_x,
                             ImGui::GetWindowHeight() - 50.f));
  ImGui::TextUnformatted(text.data());
  ImGui::PopFont();
  return ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_Enter));
}

enum class question_state {
  not_answered,
  correct,
  incorrect,
};

void question_gui(question_state &state, const question &current_question) {
  BackgroundImage();
  // show logo scaled 128x128 on the top left corner
  HelloImGui::ImageFromAsset("Logo.png", ImVec2(128, 128));

  auto top_left = ImVec2(205, 64);
  ImGui::SetCursorPos(top_left);
  ImGui::PushFont(g_font->font);

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

  const auto prompt_size = ImVec2(870, 212);
  const auto answer_button_size = ImVec2(480, 160);
  ImGui::Button(current_question.question.data(), prompt_size);

  auto copy_color_hover = pallete::title_button_hovered;
  copy_color_hover.w = 0.7f;

  ImGui::PushStyleColor(ImGuiCol_ButtonHovered, copy_color_hover);

  ImGui::SetCursorPosY(340);
  for (std::size_t i = 0; i < current_question.answers.size(); i++) {
    if (i % 2 == 1) {
      ImGui::SameLine();
      ImGui::SetCursorPosX(700);
    } else {
      ImGui::SetCursorPosX(100);
      if (i != 0) {
        ImGui::SetCursorPosY(520); // second row
      }
    }
    if (ImGui::Button(current_question.answers.at(i).data(),
                      answer_button_size)) {
      if (i == current_question.correct_answer) {
        state = question_state::correct;
      } else {
        state = question_state::incorrect;
      }
    }
  }
  ImGui::PopStyleColor(5);
  ImGui::PopStyleVar(4);
  ImGui::PopFont();
}

enum class scene {
  title,
  show_scores,
  question,
  gameover,
  winner,
};

int main() {
  // use system locale instead of C locale, this means
  // 1,000 instead of 1000
  std::locale::global(std::locale(""));

  HelloImGui::RunnerParams params;
  params.appWindowParams.windowGeometry.size = windowSize;
  params.appWindowParams.windowTitle = title;
  params.appWindowParams.resizable = false;
  params.imGuiWindowParams.defaultImGuiWindowType =
      HelloImGui::DefaultImGuiWindowType::ProvideFullScreenWindow;
  params.callbacks.LoadAdditionalFonts = MyLoadFonts;

  params.callbacks.ShowGui = [&params, current_scene = scene::title,
                              state = question_state::not_answered,
                              question = poll_random_question(1),
                              current_round = 1]() mutable {
    // i'm assigning to current_scene so i need mutable

    switch (current_scene) {
    case scene::title: {
      if (title_screen_gui(params)) {
        current_scene = scene::show_scores;
        ImGui::SetWindowFontScale(0.5f);
      }
      break;
    }
    case scene::show_scores: {
      if (show_scores_gui(current_round)) {
        current_scene = scene::question;
        ImGui::SetWindowFontScale(0.5f);
      }
      break;
    }
    case scene::question: {
      question_gui(state, question);
      if (state == question_state::correct) {
        state = question_state::not_answered;
        if (current_round == 15) {
          current_scene = scene::winner;
          break;
        }
        current_round++;
        question = poll_random_question(current_round);
        current_scene = scene::show_scores;
        /*current_scene = scene::winner;*/
      } else if (state == question_state::incorrect) {
        current_scene = scene::gameover;
      }
      break;
    }
    case scene::gameover: {
      ImGui::Text("Game Over");
      break;
    }
    case scene::winner: {
      ImGui::Text("Ganaste!");
      break;
    }
    }
  };
  params.imGuiWindowParams.showMenuBar = false;
  params.imGuiWindowParams.showMenu_App = false;
  HelloImGui::Run(params);
}
