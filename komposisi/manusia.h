#ifndef MANUSIA_H
#define MANUSIA_H

class manusia {
public:
    string nama;
    jantung varjantung;

    manusia(string pNama) : nama(pNama) {
        cout << nama << "hidup\n";
    }
    ~manusia() {
        cout << nama << "mati\n";
    }
};
#endif