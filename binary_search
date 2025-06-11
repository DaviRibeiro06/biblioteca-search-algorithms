#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Função de busca binária
int buscaBinaria(const vector<string>& livros, const string& tituloBuscado) {
    int esquerda = 0;
    int direita = livros.size() - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (livros[meio] == tituloBuscado) {
            return meio; // encontrado
        }
        else if (livros[meio] < tituloBuscado) {
            esquerda = meio + 1;
        }
        else {
            direita = meio - 1;
        }
    }

    return -1; // não encontrado
}

int main() {
    // Lista ordenada de livros (simulação do .xlsx em ordem alfabética)
    vector<string> livros = {
        "A Culpa é das Estrelas",
        "A Droga da Obediência",
        "A Estrada",
        "A Fera de Gaia",
        "A Menina que Roubava Livros",
        "A Revolução dos Bichos",
        "A Sombra do Vento",
        "A Sociedade do Anel",
        "A Última Música",
        "Alice no País das Maravilhas",
        "As Aventuras de Sherlock Holmes",
        "As Crônicas de Nárnia",
        "Capitães da Areia",
        "Cem Anos de Solidão",
        "Como Eu Era Antes de Você",
        "Contos de Fadas",
        "Diário de um Banana",
        "Dom Casmurro",
        "Drácula",
        "É Assim que Acaba",
        "Ensaio sobre a Cegueira",
        "Harry Potter e a Câmara Secreta",
        "Harry Potter e a Pedra Filosofal",
        "Inferno",
        "It: A Coisa",
        "Jogos Vorazes",
        "Laranja Mecânica",
        "Memórias Póstumas de Brás Cubas",
        "Meu Pé de Laranja Lima",
        "O Apanhador no Campo de Centeio",
        "O Código Da Vinci",
        "O Cortiço",
        "O Diário de Anne Frank",
        "O Hobbit",
        "O Iluminado",
        "O Menino do Pijama Listrado",
        "O Nome do Vento",
        "O Pequeno Príncipe",
        "Orgulho e Preconceito",
        "Percy Jackson e o Ladrão de Raios",
        "Quincas Borba",
        "Senhora",
        "Sinais de Fumaça",
        "Tartarugas Até Lá Embaixo",
        "Vidas Secas",
        "Vinte Mil Léguas Submarinas"
    };

    string tituloBuscado = "O Hobbit";

    int posicao = buscaBinaria(livros, tituloBuscado);

    if (posicao != -1) {
        cout << "Livro \"" << tituloBuscado << "\" encontrado na posicao: " << posicao << endl;
    } else {
        cout << "Livro \"" << tituloBuscado << "\" não foi encontrado." << endl;
    }

    return 0;
}
//
// Created by Davi Ribeiro on 11/06/2025.
//
