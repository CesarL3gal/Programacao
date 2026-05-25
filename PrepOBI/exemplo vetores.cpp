//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    // Definição: vetores são sequências ordenadas de elementos de mesmo tipo
    
    // 1. Diferenças entre vetores em C e C++
    int v[10];          // Declara um vetor de 10 elementos do tipo int (C e C++)
    vector<int> a(10);  // Declara um vector de 10 elementos do tipo int (apenas C++)
                        
    // 2. Construtores 
    vector<int> v1;         // Declara um vetor de inteiros, inicialmente vazio
    vector<int> v2(3);      // Declara um vetor de inteiros, com 3 elementos
    vector<int> v3(3, 1);   // Declara um vetor de inteiros, com 3 elementos, todos iguais a 1
    vector<string> v4(5, "abc");        // Vetor com 5 strings, todas iguais a "abc"
    vector<double> v5 { 0.5, 1.1, 4.5, -0.2, 0.0, 5.4 };    // Lista de inicialização: o vetor v5 terá 6 elementos, com os valores indicados, na ordem indicada
    vector<int> v6(v3);     // v6 é uma cópia de v3

    // 3. Número de elementos em um vetor
    cout << "o vetor v3 tem " << v3.size() << " elementos\n";
    cout << "o vetor v4 tem " << v4.size() << " elementos\n";
    cout << "o vetor v5 tem " << v5.size() << " elementos\n";

    // 4. Acesso aos elementos individuais
    v3[0] = 2;                      // Modifica o valor do primeiro elemento de v3
    v4[v4.size() - 1] = "xyz";      // Modifica o último elemento de v4. Os elementos de v4 são v4[0], v4[1], v4[2], v4[3] e v4[4]                    

    cout << "primeiro elemento de v3: " << v3[0] << '\n';
    cout << "primeiro elemento de v4: " << v4.front() << '\n';
    cout << "primeiro elemento de v5: " << v5.at(0) << '\n';

    cout << "último elemento de v3: " << v3[v3.size() - 1] << '\n';
    cout << "último elemento de v4: " << v4.back() << '\n';
    cout << "último elemento de v5: " << v5.at(v5.size() - 1) << '\n';

    // 5. Travessia
    for (int i = 0; i < v5.size(); ++i)
        cout << "v5[" << i << "] = " << v5[i] << '\n';

    // O laço passa em todos elementos x de v5, um por vez, do primeiro ao último
    cout << "v5 = ";
    for (auto x : v5)
        cout << x << ' ';
    cout << '\n';

    // Exemplo: determina o maior dentre os elementos do vetor v5
    //double m = -1e100;
    
    //double m = numeric_limits<double>::min();
    //cout << "menor double possível em C++: " << m << '\n';

    double m = v5.front();

    for (auto x : v5)
    {
    //    if (x > m)
    //        m = x;
        m = max(m, x);
    }

    cout << "Maior elemento de v5 = " << m << '\n';

    // 6. Funções úteis para vetores
    
    // Ordena todos os elementos de um vetor, em ordem crescente
    sort(v5.begin(), v5.end());

    cout << "v5 ordenado = ";
    for (auto x : v5)
        cout << x << ' ';
    cout << '\n';

    // Inverte a ordem dos elementos do vetor
    reverse(v5.begin(), v5.end());

    cout << "v5 invertido = ";
    for (auto x : v5)
        cout << x << ' ';
    cout << '\n';

    // Procura um elemento no vetor indicado
    if (find(v4.begin(), v4.end(), "xyz") != v4.end())
        cout << "xyz faz parte do vetor v4\n";
    else
        cout << "xyz não faz parte do vetor v4\n";

    if (find(v4.begin(), v4.end(), "cde") != v4.end())
        cout << "cde faz parte do vetor v4\n";
    else
        cout << "cde não faz parte do vetor v4\n";

    // No caso de um vetor ordenado, a busca binária é mais eficiente
    vector<int> xs { 5, 15, 8, 100, 57, 93, 23 };
    vector<int> ys(xs);
    sort(xs.begin(), xs.end());

    cout << "xs = ";
    for (auto x : xs)
        cout << x << ' ';
    cout << '\n';

    if (binary_search(xs.begin(), xs.end(), 50))
        cout << "50 faz parte do vetor xs\n";
    else
        cout << "50 nao faz parte do vetor xs\n";

    // Maiores e menores elementos
    cout << "Maior elemento de ys: " << *max_element(ys.begin(), ys.end()) << '\n';
    cout << "Menor elemento de ys: " << *min_element(ys.begin(), ys.end()) << '\n';

    return 0;
}   
 