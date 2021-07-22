/**
 * Copyright (C) 2021  Muhammad' Amrudien.
 * 
 * Copying and distribution of this file, with or without modification, are
 * permitted in any medium without royalty provided the copyright notice
 * and this notice are preserved.  This file is offered as-is, without any
 * warranty.
 */

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long uu;
typedef long long ll;

typedef pair<ll, ll> ii;
typedef tuple<ll, ll, ll> iii;

typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

typedef deque<ll> di;
typedef deque<ii> dii;
typedef deque<iii> diii;

typedef map<string, ll, greater<ll>> rmsi;
typedef unordered_map<string, ll> umsi;
typedef map<string, ll> msi;

typedef map<ll, ll, greater<ll>> rmii;
typedef unordered_map<ll, ll> umii;
typedef map<ll, ll> mii;

typedef set<ii, greater<ii>> rsii;
typedef unordered_set<ii> usii;
typedef set<ii> sii;

typedef priority_queue<ll, vi, greater<ll>> rpqi;
typedef priority_queue<ll> pqi;

typedef priority_queue<ii, vii, greater<ii>> rpqii;
typedef priority_queue<ii> pqii;

typedef priority_queue<iii, viii, greater<iii>> rpqiii;
typedef priority_queue<iii> pqiii;

#define FOR(i, a, b) for (auto i = a; i < b; i++)
#define FORN(i, a, b) for (auto i = a; i <= b; i++)
#define FORD(i, a, b) for (auto i = a; i >= b; i--)
#define FORSQ(i, a, b) for (auto i = a; i * i <= b; i++)

#define REP(i, a) FOR(i, 0, a)
#define REPN(i, a) FORN(i, 1, a)
#define REPD(i, a) FORD(i, a - 1, 0)
#define REPSQ(i, a) FORSQ(i, 1, a)

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second

#define fr front()
#define ba back()
#define pf push_front
#define pb push_back
#define pof pop_front
#define pob pop_back

#define ins insert
#define ers erase

#define rbe rbegin()
#define be begin()
#define ren rend()
#define en end()

#define PUSH(c, v) (c).push(v)
#define POP(c) \
    (c).top(); \
    (c).pop()

#define RESET(x, v) memset(x, v, sizeof x)
#define EMPTY(c) (c).empty()
#define CLEAR(c) (c).clear()
#define SIZE(c) (c).size()

#define ALL(c) c.be, c.en
#define ALLA(a, n) a, a + n
#define RALL(c) c.rbe, c.ren

#define ALL_OF(a, b) all_of(ALL(a), b)
#define ALL_OFA(a, b, c) all_of(ALLA(a, b), c)

#define ANY_OF(a, b) any_of(ALL(a), b)
#define ANY_OFA(a, b, c) any_of(ALLA(a, b), c)

#define NONE_OF(a, b) none_of(ALL(a), b)
#define NONE_OFA(a, b, c) none_of(ALLA(a, b), c)

#define FOREACH(a, b) for_each(ALL(a), b)
#define RFOREACH(a, b) for_each(RALL(a), b)

#define FOREACHN(a, b, c) for_each_n(a.be, b, c)
#define RFOREACHN(a, b, c) for_each_n(a.rbe, b, c)

#define FILL(c, v) fill(ALL(c), v)
#define FILLA(a, n, v) fill(ALLA(a, n), v)

#define SORT(c) sort(ALL(c))
#define SORTA(a, n) sort(ALLA(a, n))

#define REVERSE(c) reverse(ALL(c))
#define REVERSEA(a, n) reverse(ALLA(a, n))

#define LBOUND(c, v) lower_bound(ALL(c), v)
#define LBOUNDA(a, n, v) lower_bound(ALLA(a, n), v)

#define UBOUND(c, v) upper_bound(ALL(c), v)
#define UBOUNDA(a, n, v) upper_bound(ALLA(a, n), v)

#define PERMUTE(c) next_permutation(ALL(c))
#define PERMUTEA(a, n) next_permutation(ALLA(a, n))

#define SUM(c) accumulate(ALL(c), 0)
#define SUMA(a, n) accumulate(ALLA(a, n), 0)

#define MIN(c) min_element(ALL(c))
#define MINA(a, n) min_element(ALLA(a, n))

#define MAX(c) max_element(ALL(c))
#define MAXA(a, n) max_element(ALLA(a, n))

#define MINMAX(c) minmax_element(ALL(c))
#define MINMAXA(a, n) minmax_element(ALLA(a, n))

#ifdef DEBUG
#define VALUE(v) cerr << #v << ": " << v << endl
#else
#define VALUE(v) 0
#endif

const double PI = acos(-1);
const double EPS = 1e-9;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 8;

int main()
{
    uu N, mat[10][10];

    ios_base::sync_with_stdio(0);
    cin.tie(0);

#ifdef DEBUG
    freopen("A.in", "r", stdin);
    freopen("A.out", "w", stdout);
#endif

    cin >> N;

    REP(i, N) {
        REP(j, N) {
            cin >> mat[i][j];
        }
    }

    REP(i, N) {
        uu ans = 1, hi = mat[0][i];

        FOR(j, 1, N) {
            if(hi < mat[j][i]) {
                hi = mat[j][i];
                ans ++;
            }
        }

        cout << ans << (i == N-1 ? '\n' : ' ');
    }

    REP(i, N) {
        uu ans = 1, hi = mat[i][0];

        FOR(j, 1, N) {
            if(hi < mat[i][j]) {
                hi = mat[i][j];
                ans ++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
