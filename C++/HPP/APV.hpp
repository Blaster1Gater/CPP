#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;

namespace HPP{
    class Char{
        public:
            static constexpr const char latinMai[26] = {
                'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
            };

            static constexpr const char latinMin[26] = {
                'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
            };

            // Alfabetos cirílicos em arrays
            static constexpr const wchar_t cirilicoMai[32] = {
                L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ж', L'З', L'И', L'Й', L'К', L'Л', 
                L'М', L'Н', L'О', L'П', L'Р', L'С', L'Т', L'У', L'Ф', L'Х', L'Ц', L'Ч', 
                L'Ш', L'Щ', L'Ъ', L'Ы', L'Ь', L'Э', L'Ю', L'Я'
            };

            static constexpr const wchar_t cirilicoMin[32] = {
                L'а', L'б', L'в', L'г', L'д', L'е', L'ж', L'з', L'и', L'й', L'к', L'л', 
                L'м', L'н', L'о', L'п', L'р', L'с', L'т', L'у', L'ф', L'х', L'ц', L'ч', 
                L'ш', L'щ', L'ъ', L'ы', L'ь', L'э', L'ю', L'я'
            };

            static constexpr const char latin[52] = {
                'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
            };
    };
    
    
    class Color {
         public:
            // Foreground (texto)
            static string vermelho;
            static string verde;
            static string amarelo;
            static string azul;
            static string magenta;
            static string ciano;
            static string branco;

            // Background (fundo)
            static string fundoVermelho;
            static string fundoVerde;
            static string fundoAmarelo;
            static string fundoAzul;
            static string fundoMagenta;
            static string fundoCiano;
            static string fundoBranco;

            // Resetar cor
            static string resetar;

            // Arrays de cores (foreground e background)
            static string coresTexto[7];
            static string coresFundo[7];
    };

    string Color::vermelho = "\033[31m";
    string Color::verde = "\033[32m";
    string Color::amarelo = "\033[33m";
    string Color::azul = "\033[34m";
    string Color::magenta = "\033[35m";
    string Color::ciano = "\033[36m";
    string Color::branco = "\033[37m";

    string Color::fundoVermelho = "\033[41m";
    string Color::fundoVerde = "\033[42m";
    string Color::fundoAmarelo = "\033[43m";
    string Color::fundoAzul = "\033[44m";
    string Color::fundoMagenta = "\033[45m";
    string Color::fundoCiano = "\033[46m";
    string Color::fundoBranco = "\033[47m";

    string Color::resetar = "\033[0m";

    string Color::coresTexto[7] = {vermelho, verde, amarelo, azul, magenta, ciano, branco};
    string Color::coresFundo[7] = {fundoVermelho, fundoVerde, fundoAmarelo, fundoAzul, fundoMagenta, fundoCiano, fundoBranco};


    class Util{
        public:
            static int Random(int min, int max){
                srand(static_cast<unsigned>(time(0)));
                return (rand() % (max - min + 1)) + min;
            }
    };


    class Inutil{
        public:
          static void Wow(){
            cout << Color::coresFundo[Util::Random(0, 6)]  // Intervalo ajustado
                  << Color::coresTexto[Util::Random(0, 6)]  // Intervalo ajustado
                  << Char::latin[Util::Random(0, 52)]  // Intervalo ajustado
                  << Color::resetar;
          }  
    };
}
