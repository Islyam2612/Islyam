#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *value;
    int len;
public:
    String():value(new char[1] {}),len(0) {
    }
    String(const char* s) {
        len = strlen(s); // функция определения длины строки
        value = new char[len + 1];
        strcpy(value, s); // функция копирования s в value
    }
    String(const String &copy) {
        len = copy.len;
        value = new char[len + 1];
        strcpy(value, copy.value); // функция копирования s в value
    }
    ~String() {
        delete[] value;
    }

    String operator + (const String& right) {
        char *s = new char[len + right.len + 1];
        String result(strcat(strcpy(s, value), right.value)); //strcat соединяет в цепочку строки
        delete[] s;
        return result;
    }

    String& operator = (const String& right) {
        len = right.len;
        delete[] value;
        value = new char[len + 1];
        strcpy(value, right.value);
        return *this;
    }

    friend istream& operator >> (istream& stream, String& orig);
    friend ostream& operator << (ostream& stream, const String& orig);
};

istream& operator >> (istream& stream, String& orig)
{
    stream >> orig.value;
    return stream;
}

ostream& operator << (ostream& stream, const String& orig)
{
    stream << orig.value;
    return stream;
}

int main()
{
    String string1, string2, Result;

    cout << "Введите первую строку: ";
    cin >> string1;

    cout << "Введите вторую строку: ";
    cin >> string2;

    cout << string1 << " + " << string2;
    Result = string1 + string2;
    cout << " = " << Result << endl;

    return 0;
}
