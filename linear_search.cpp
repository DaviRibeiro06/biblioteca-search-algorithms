#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Função de busca linear
int buscaLinear(const vector<string>& lista, const string& titulo) {
    for (int i = 0; i < lista.size(); i++) {
        if (lista[i] == titulo) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<string> livros;
    string linha, tituloBuscado = "O Hobbit";

    // Abrir o arquivo
    ifstream arquivo("Titulo_de_Livross.csv");

    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    // Ler linha por linha
    while (getline(arquivo, linha)) {
        if (!linha.empty())
            livros.push_back(linha);
    }

    arquivo.close();

    // Buscar o título
    int posicao = buscaLinear(livros, tituloBuscado);

    if (posicao != -1) {
        cout << "Livro \"" << tituloBuscado << "\" encontrado na posicao: " << posicao << endl;
    } else {
        cout << "Livro \"" << tituloBuscado << "\" nao foi encontrado." << endl;
    }

    return 0;
}
