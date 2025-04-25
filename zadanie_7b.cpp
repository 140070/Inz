class Punkt {

};

class Kolo {
private:
    double dPromienKola;
    Punkt srodekKola; 

public:
    void WstawSrodek(const Punkt& p) {
        srodekKola = p; 
    }
};
