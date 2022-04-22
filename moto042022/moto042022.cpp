// moto042022.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string> 

using namespace std;


int *  countingFence(string metersAvailable) {
    
    int a;
    int b;
    int metersAvailableInt = std::stoi(metersAvailable);
    a = metersAvailableInt / 4;
    b = metersAvailableInt - 2 * a;
    int result[] = {a,b};
    printf("'a' should be equal to %d and 'b' should be equal to %d. \n", a,b );
    int area = a * b; 
    printf("maximal farm area which you gonna create with those values equals to %d. \n", area);
    return result;
}

bool inputValidation(string s) {

    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;

    return true;
}

string inputColection() {
    std::string metersAvailable;
    cout << "Please give a numbers of fence meters available (without decimal values) and hit Enter!  \n";
    cin >> metersAvailable;
    bool inputValidationnFlag = true;
    while (inputValidationnFlag) {
        if (inputValidation(metersAvailable)) {
            inputValidationnFlag = false;
        }
        else {
            cout << "Please give a numbers of fence meters available (without decimal values) and hit Enter!  \n";
            cin >> metersAvailable;
        }
    }
    return metersAvailable;
}


int main()
{
    string answer;
    cout << "If you want to optimalize your fence building process type 'run' and hit Enter! \n";
    cin >> answer;
    
    if (answer == "run") {
        std::string metersAvailable;
        metersAvailable = inputColection();
        int* result;
        countingFence(metersAvailable);
    }
    else {
        cout << "Thats a pity, see you soon! \n";

    }
    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
