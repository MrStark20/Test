// bool pattrnchack(vector<vector<char>>& a, vector<vector<char>>& b, int r, int c, int i, int j) {
//     // for (int ai = 0; ai < r; ai++) {
//     //     for (int aj = 0; aj < c; aj++) {
//     for (int ai = 0; ai < r; ai++) {
//         int bi = (ai + i) % r;
//         for (int aj = 0; aj < c; aj++) {
//             int bj = (aj + j) % c;
//             if (a[ai][aj] != b[bi][bj])
//                 return false;
//         }
//     }
//     return true;
// }
// void solve() {
//     int r, c;
//     cin >> r >> c;
//     vector<vector<char>> a(r, vector<char>(c)), b(r, vector<char>(c));

//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> a[i][j];

//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> b[i][j];

//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             if (pattrnchack(a, b, r, c, i, j)) {
//                 cout << "Yes";
//                 return ;
//             }
//         }
//     }