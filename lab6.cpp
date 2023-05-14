#include <iostream>//first commit in main
using namespace std;

// функция для ввода элементов массива
void inputArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << "Введите элемент массива: ";
        cin >> arr[i];
    }
}

// функция для объединения двух массивов в один
//second commit in main 
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int i=0, j=0, k=0;//second commit in main
    while(i < n1 && j < n2) {
//second commit in main  if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
//second commit in second_branch  arr3[k++] = arr2[j++];//third commit in main(prioritet main)
        }
//second commit in second_branch    }//third commit in main(same prioritet with second_branch)
    while(i < n1) {
//second commit in second_branch  arr3[k++] = arr1[i++];//third commit in main(prioritet second_branch)
    }
    while(j < n2) {
        arr3[k++] = arr2[j++];
    }
}

// функция для вывода объединенного массива на экран
void printArray(int arr[], int n) {
    cout << "Объединенный массив: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[100], arr2[100], arr3[200], n1, n2;
//third commit in second_branch
    cout << "Введите количество элементов первого массива: ";
//third commit in second_branch   cin >> n1;
    inputArray(arr1, n1);
//third commit in second_branch
    cout << "Введите количество элементов второго массива: ";
    cin >> n2;
    inputArray(arr2, n2);

    mergeArrays(arr1, n1, arr2, n2, arr3);
//first commit in second_branch
    printArray(arr3, n1+n2);
//fourth commit in second_branch
    return 0;
}
