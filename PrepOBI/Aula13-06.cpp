#include <bits/stdc++.h>

using namespace std;

// TODO: ele contém um bug nos casos onde a < 0 e b < 0! Corrigir!
auto quotient(int a, int b)
{
    auto q = a / b;
    auto r = a % b;

    // Justificativa:
    //
    // a = bq + r
    //
    // se r < 0, podemos fazer isso (pois a 1ª condição é sempre satisfeita)
    //
    // a = bq + (r + b) - b
    // a = b(q - 1) + (r + b) -> aqui teremos 0 <= r < |b|
    
    return r < 0 ? q - 1 : q;
}

// TODO: não lista corretamente os divisores de um negativo! Corrigir!
auto divisores(int M)
{
    vector<int> ds;

    for (int d = 1; d * d <= M; d++)        // O(sqrt(M))
        if (M % d == 0)
        {
            ds.emplace_back(d);
            auto k = M / d;

            if (k != d)
                ds.emplace_back(k);
        }

    sort(ds.begin(), ds.end());

    return ds;
}

auto numero_de_divisores(int M)
{
    int divisores = 0;

    for (int d = 1; d * d <= M; d++)        // O(sqrt(M))
        if (M % d == 0)
        {
            auto k = M / d;

            divisores += d == k ? 1 : 2;
        }

    return divisores;
}

auto is_prime(int n)
{
    return n > 0 and numero_de_divisores(n) == 2;
}

auto mod(int a, int b)
{
    auto r = a % b;

    return r < 0 ? r + abs(b) : r;
}

int main()
{
    // a  |__b__
    // r     q
    //
    // a = bq + r, b != 0
    //
    // a = 10, b = 3
    //
    // a = 3 x 0 + 10
    // a = 3 x 1 + 7
    // a = 3 x 2 + 4
    // a = 3 x 3 + 1
    // a = 3 x 4 + (-2)
    // a = 3 x (-1) + 13
    //
    // 1ª restrição: r < |b|
    // 2º restrição: 0 <= r
    //
    // As duas restrições acima caracterizam a Divisão de Euclides
    //
    // se r == 0, dizemos que "b quotientide a" (notação: a | b) ou "a é um 
    // múltiplo de b", isto é, a = bc para algum c inteiro
    //
    // Atenção: o operador % de C/C++ não fornece, em todos os casos, um
    // resto euclidiano!

//    int a, b;
//    cin >> a >> b;

//    auto q = a / b;
//    auto r = a % b;

//    auto q1 = quotient(a, b);
//    auto r1 = mod(a, b);

//    cout << a << " = " << b << "(" << q << ") + (" << r << ")\n";
//    cout << a << " = " << b << "(" << q1 << ") + (" << r1 << ")\n";

    // Q1: como listar os múltiplos de a menores ou iguais a M?
    int M;
    cin >> M;

//    for (int m = a; m <= M; m += a)
//        cout << m << ' ';
//    cout << '\n';

    // Q1.1: quantos são os múltiplos de a menores ou iguais a M?
//    cout << "Há " << (M / a) << " múltiplos positivos de " << a << " menores ou iguais a " << M << '\n';

    // Q2: quais são os divisores positivos de M?

//    for (int d = 1; d <= M; d++)      // O(M)
//        if (M % d == 0)
//            cout << d << ' ';

//    cout << '\n';

    // Segunda forma, mais eficiente: observe que, se b divide a, então
    // a = bc, de modo que c também divide a!
    // 
    // Fato: se a = bc, então b <= sqrt(a) ou c <= sqrt(a) !
    //
    // Se b > sqrt(a) e c > sqrt(a), então
    //
    // a = bc > sqrt(a) * sqrt(a) = a, um absurdo !
    
//    for (int d = 1; d * d <= M; d++)        // O(sqrt(M))
//        if (M % d == 0)
//        {
//            cout << d << ' ';
//            auto k = M / d;
//
//            if (k != d)
//                cout << k << ' ';
//        }
//
//    cout << '\n';

    auto ds = divisores(M);

    for (auto d : ds)
        cout << d << ' ';
    cout << '\n';

    cout << M << " tem " << numero_de_divisores(M) << " divisores positivos\n";

    cout << M << (is_prime(M) ? " é " : " não é ") << "primo\n";

    // Definição: dizemos que um natural p é primo se p tem, exatamente,
    // 2 divisores
}
 