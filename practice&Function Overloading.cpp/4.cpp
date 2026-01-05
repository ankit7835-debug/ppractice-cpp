#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int rated_users = N - A;
    int high_rated_users = rated_users - B;

    cout << rated_users << " " << high_rated_users << endl;

    return 0;
}
