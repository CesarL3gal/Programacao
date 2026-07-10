#include <bits/stdc++.h>

using namespace std;

// Complexidade: O(NK), N <= 10^9, K <= 40 -> aprox. 40 x 10^9 = 4 x 10^{10}
auto solve1(int N, int, const vector<int>& ps)
{
    auto ans = 0;

    for (int n = 1; n <= N; ++n) // O(N)
    {
        bool ok = true;

        for (auto p : ps)       // O(K)
            if (n % p == 0)
            {
                ok = false;
                break;
            }

        if (ok)
            ++ans;
    }

    return ans;
}

// Resolve o primeiro subproblema (K == 1) em O(1), WA nos demais
auto solve2(int N, int K, const vector<int>& ps)
{
    auto ans = 0;

    if (K == 1)
    {
        ans = N / ps[0]; // O(1)
        return ans;
    }

    return -1;
}

// Princípio da Inclusão/Exclusão: sejam A e B dois conjuntos
//
// P(AUB) = P(A) + P(B) - P(A inter B)
//
// Para 3 conjuntos:
//
// P(AUBUC) = P(A) + P(B) + P(C) - P(AeB) - P(AeC) - P(BeC) + P(AeBeC)
//
// Para 4 conjuntos:
//
// P(AUBUCUD) = P(A) + P(B) + P(C) + P(D) - P(AeB) - P(AeC) - P(AeD) - P(BeC) - P(BeD) - P(CeD) + P(AeBeC) + P(AeBeD) + P(AeCeD) - P(AeBeCeD)
//
// Resolve o subproblema 2 com complexidade O(2^K). Como K <= 20 no subproblema 2, faremos aprox. 2^{20} = 10^6 operações

auto solve3(int N, int K, const vector<int>& ps)
{
    long long ans = 0;

    for (long long mask = 1; mask < (1LL << K); ++mask)
    {
        long long prod = 1;
        int qtd = 0;

        for (int j = 0; j < K; ++j)
            if (mask & (1LL << j))
            {
                prod *= ps[j];

                if (prod > N)
                    break;

                ++qtd;
            }

        if (qtd % 2 == 1)
            ans += N/prod;
        else
            ans -= N/prod;
    }

    return N - ans;
}

auto solve4(int N, int K, const vector<int>& ps)
{
    long long ans = 0;

    using iii = tuple<long long, int, int>;
    queue<iii> q;

    for (int i = 0; i < K; ++i)
        q.emplace(ps[i], i, 1);

    while (not q.empty())
    {
        auto [prod, j, signal] = q.front();
        q.pop();

        ans += signal * (N/prod);

        if (prod >= N)
            continue;

        for (int i = j + 1; i < K; ++i)
            q.emplace(prod * ps[i], i, -signal);
    }

    return N - ans;
}

int main()
{
    ios::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;

    vector<int> ps(K);

    for (auto& p : ps)
        cin >> p;

    //cout << solve1(N, K, ps) << '\n';
    //cout << solve2(N, K, ps) << '\n';
    //cout << solve3(N, K, ps) << '\n';
    cout << solve4(N, K, ps) << '\n';

    return 0;
}
 