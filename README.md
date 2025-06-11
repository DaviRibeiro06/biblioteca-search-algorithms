
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

---

## 🏥 Questão 2 — Ordenação de Pacientes por Prioridade

### 📌 Enunciado:
> Dada uma lista de pacientes com prioridade de 1 a 5, implemente os algoritmos Bubble Sort e Selection Sort para ordená-los da menor para a maior prioridade.

---

### 🧬 Estrutura:

```cpp
struct Paciente {
    string nome;
    int prioridade;
};
```

---

### ✅ Bubble Sort

```cpp
void bubbleSort(vector<Paciente>& pacientes) {
    int n = pacientes.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (pacientes[j].prioridade > pacientes[j + 1].prioridade) {
                swap(pacientes[j], pacientes[j + 1]);
            }
        }
    }
}
```

---

### ✅ Selection Sort

```cpp
void selectionSort(vector<Paciente>& pacientes) {
    int n = pacientes.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (pacientes[j].prioridade < pacientes[min_idx].prioridade) {
                min_idx = j;
            }
        }
        swap(pacientes[min_idx], pacientes[i]);
    }
}
```

---

### ❓ Qual o mais eficiente para listas quase ordenadas?

> **Bubble Sort** tende a ser mais eficiente em listas quase ordenadas, pois pode interromper a ordenação se nenhuma troca for feita em uma iteração. Já o Selection Sort percorre sempre o vetor completo.

---

## 🔢 Questão 3 — Ordenação de Vetores Numéricos

### 📌 Enunciado:
> Com um vetor de 50 números aleatórios entre 1 e 500, implemente dois algoritmos de ordenação: um simples (Bubble, Selection ou Insertion) e o QuickSort. Compare sua eficiência.

---

### ✅ Geração do Vetor Aleatório (C++)

```cpp
vector<int> gerarVetorAleatorio(int tamanho, int min, int max) {
    vector<int> vetor;
    srand(time(0));
    for (int i = 0; i < tamanho; i++) {
        vetor.push_back(rand() % (max - min + 1) + min);
    }
    return vetor;
}
```

---

### ✅ Insertion Sort (simples)

```cpp
void insertionSort(vector<int>& v) {
    for (int i = 1; i < v.size(); i++) {
        int chave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }
}
```

---

### ✅ QuickSort

```cpp
int particiona(vector<int>& v, int baixo, int alto) {
    int pivo = v[alto];
    int i = baixo - 1;
    for (int j = baixo; j < alto; j++) {
        if (v[j] <= pivo) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[alto]);
    return i + 1;
}

void quickSort(vector<int>& v, int baixo, int alto) {
    if (baixo < alto) {
        int pi = particiona(v, baixo, alto);
        quickSort(v, baixo, pi - 1);
        quickSort(v, pi + 1, alto);
    }
}
```

---

### 📊 Comparação de Eficiência

| Algoritmo        | Complexidade | Desempenho em 50 itens | Observação                          |
|------------------|--------------|-------------------------|--------------------------------------|
| Insertion Sort   | O(n²)        | Razoável                | Simples, bom para listas pequenas   |
| QuickSort        | O(n log n)   | Muito rápido            | Mais eficiente para listas grandes  |

---

> **Conclusão**:  
> Para listas pequenas, algoritmos simples funcionam bem.  
> Para listas maiores e com necessidade de velocidade, **QuickSort** é a melhor escolha.
