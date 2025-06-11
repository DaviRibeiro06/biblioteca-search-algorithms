
# 📘 Avaliação 02 — Computação e Algoritmos (2025)

**Curso:** Sistemas de Informação  
**Disciplina:** Computação e Algoritmos  
**Aluno:** _[Seu Nome Aqui]_  
**Data:** _[Inserir data]_  

---

## 🔍 Questão 1 — Busca Linear e Busca Binária

### 📌 Enunciado:
> Desenvolva um algoritmo de Busca Linear e outro de Busca Binária que receba uma lista de livros e um título a ser buscado. Ambos devem retornar o índice do livro, ou -1 caso não seja encontrado. Assuma que a lista da busca binária está ordenada.

---

### ✅ Implementação da Busca Linear (C++)

```cpp
int buscaLinear(const vector<string>& livros, const string& tituloBuscado) {
    for (int i = 0; i < livros.size(); i++) {
        if (livros[i] == tituloBuscado) {
            return i;
        }
    }
    return -1;
}
```

---

### ✅ Implementação da Busca Binária (C++)

```cpp
int buscaBinaria(const vector<string>& livros, const string& tituloBuscado) {
    int esquerda = 0;
    int direita = livros.size() - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (livros[meio] == tituloBuscado) return meio;
        else if (livros[meio] < tituloBuscado) esquerda = meio + 1;
        else direita = meio - 1;
    }

    return -1;
}
```

---

### 📊 Análise de Vantagens

#### 🔹 Busca Linear
- Funciona com listas **não ordenadas**
- **Fácil de implementar**
- Complexidade: **O(n)**

#### 🔹 Busca Binária
- **Muito eficiente** em listas grandes ordenadas
- Complexidade: **O(log n)**
- **Exige ordenação prévia**

