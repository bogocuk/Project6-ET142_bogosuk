//#include <iostream>
 

//using namespace std;
//
//const int N = 10;
//
//// Пузырьковая сортировка
//void bubbleSort(int arr[], int n)
//{
//    int temp;
//
//    for (int i = 0; i < n - 1; i++)
//        for (int j = 0; j < n - i - 1; j++)
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//}
//
//// Бинарный поиск
//int binarySearch(int arr[], int n, int x)
//{
//    int left = 0;
//    int right = n - 1;
//
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//
//        if (arr[mid] == x)
//            return mid;
//
//        if (arr[mid] < x)
//            left = mid + 1;
//        else
//            right = mid - 1;
//    }
//
//    return -1;
//}
//
//int main()
//{
//    
//    setlocale(LC_ALL, "Russian");
//
//    int arr[N];
//    int x;
//
//    cout << "Введите " << N << " элементов массива:\n";
//
//    for (int i = 0; i < N; i++)
//        cin >> arr[i];
//
//    bubbleSort(arr, N);
//
//    cout << "Отсортированный массив:\n";
//
//    for (int i = 0; i < N; i++)
//        cout << arr[i] << " ";
//
//    cout << endl;
//
//    cout << "Введите число для поиска: ";
//    cin >> x;
//
//    int result = binarySearch(arr, N, x);
//
//    if (result != -1)
//        cout << "Элемент найден: A[" << result << "] = " << arr[result] << endl;
//    else
//        cout << "Элемент не найден\n";
//
//    return 0;
//}


#include <iostream>
#include <cstring>


using namespace std;

bool isHex(char str[])
{
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char c = str[i];

        if (!((c >= '0' && c <= '9') ||
            (c >= 'A' && c <= 'F') ||
            (c >= 'a' && c <= 'f')))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Устанавливаем русскую локаль (работает в Windows и Linux)
    setlocale(LC_ALL, "Russian");

    char s[80];

    cout << "Введите строку: ";
    cin.getline(s, 80); // безопасный ввод строки (аналог gets_s)

    if (isHex(s))
        cout << "Строка является шестнадцатеричным числом\n";
    else
        cout << "Строка НЕ является шестнадцатеричным числом\n";

    return 0;
}