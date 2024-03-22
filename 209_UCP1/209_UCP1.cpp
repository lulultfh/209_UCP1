// 1. Untuk mengurutkan perlu membagi list menjadi dua, sorted list dan unsorted list. Awalnya, sorted list memiliki satu elemen. 
// Kemudian elemen yang ada di unsorted list (urut sampai index n-1) di bandingkan dengan elemen yang ada di sorted list. 
// Ulangi sampai list sudah terurut. 
// 2. Dengan scanning list nilai minimum dalam array, dari arr[0] sampai arr[n-1], kemudian memilih satu item di setiap daftar scan, 
// dan memindahkan item ke index 0, lakukan berulang-ulang sampai listnya urut
// 3. Dengan menghitung (n-1), misal dalam array terdapat 5 elemen, maka langkah pengerjaannya yaitu 5-1=4
  
//4.
#include <iostream>
using namespace std;

void input(int Lulu[],int n) {
    cout << "Enter" << n << " Number :\n";
    for (int i = 0; i < n; i++) {
        cin >> Lulu[i];
    }
}

void selectionSort(int Lulu[], int n) {
    for (int j = 0; j <= n - 2; j++) {  
        int min_index = j; 
        for (int i = j + 1; i < n; i++) { 
            if (Lulu[i] < Lulu[min_index]) {
                min_index = i;
            }
        }
        int temp = Lulu[j];
        Lulu[j] = Lulu[min_index];
        Lulu[min_index] = temp;
    }
}

void display(int Lulu[], int n) {
    cout << "Data terurut :\n";
    for (int i = 0; i < n; i++) {
        cout << Lulu[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int MAX = 90;
    int Lulu[MAX];
    int n;

    cout << "Masukkan jumlah data : ";
    cin >> n;
    while (n > MAX) {
        cout << "Jumlah data terlalu banyak, masukkan ulang : ";
        cin >> n;
    }

    input(Lulu,n);
    selectionSort(Lulu, n);
    display(Lulu, n);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
