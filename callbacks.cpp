#include <iostream>
#include <string>
#include <cstdlib> // Para exit()
using namespace std;

// Definimos callbacks con float para permitir decimales
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { 
    if (b == 0) {
        cerr << "Error: División por cero no permitida.\n";
        exit(1);
    }
    return a / b; 
}

// Función que recibe un callback y dos operandos
void performOperation(float (*callback)(float, float), float x, float y) {
    cout << "Resultado: " << callback(x, y) << endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Uso: " << argv[0] << " <num1> <operador> <num2>\n";
        return 1;
    }

    try {
        // Convertir argumentos a float
        float num1 = stof(argv[1]);
        string op = argv[2];
        float num2 = stof(argv[3]);

        // Seleccionar el callback según el operador ingresado
        float (*operation)(float, float) = nullptr;

        if (op == "+") operation = add;
        else if (op == "-") operation = subtract;
        else if (op == "*" || op == "x" || op == "X") operation = multiply;
        else if (op == "/") operation = divide;
        else {
            cerr << "Error: Operador inválido (" << op << "). Use +, -, *, x o /\n";
            return 1;
        }

        // Ejecutar la operación con el callback
        performOperation(operation, num1, num2);

    } catch (invalid_argument&) {
        cerr << "Error: Alguno de los operandos no es un número válido.\n";
        return 1;
    } catch (out_of_range&) {
        cerr << "Error: Número fuera de rango.\n";
        return 1;
    }

    return 0;
}
