#include <iostream>
#include <cmath>
using namespace std;

float sen(float x, float y){
    float i = x / y;
    cout << "- El seno De Alpha es : "<< i << endl;
    return i;
}
float coseno(float x, float y){
    float i = x / y;
    cout << "- El coseno Da Alpha es : "<< i << endl;
    return i;
}
float tangente(float x, float y){
	float i = x / y;
	cout <<"- La tangente De Alpha es : " <<  i  << endl;
	return i;
}
float cotangente(float x, float y){
    float i = x / y;
    cout <<"- El cotangente De Alpha es : "<< i <<endl;
    return i;
}
float secante(float x, float y){
    float i = x / y;
    cout << "- El secante De Alpha es : " << i <<endl;
    return i;
}
float cosecante(float x, float y){
    float i = x / y;
    cout << "- El cosecante De Alpha es : " << i <<endl;
    return i;
}

float pitagorasA(float x, float y){
    float i,f,c,j;
    i = x*x;
    f = y*y;
    c = i - f;
    j = sqrt(c);
    cout <<"- El valor de \"a\" es : "<< j<<endl;
    system("pause");
    return j;
}

float pitagorasB(float x, float y){
    float i,f,c,j;
    i = x*x;
    f = y*y;
    c = i - f;
    j = sqrt(c);
    cout <<"- El valor de \"b\" es : "<< j<<endl;
    system("pause");
    return j;
}
float pitagorasC(float x, float y){
    float i,f,c,j;
    i = x*x;
    f = y*y;
    c = i + f;
    j = sqrt(c);
    cout <<"- El valor de \"c\" es : "<< j<<endl;
    system("pause");
    return j;
}
float hallarH(float x, float y){
    float i,f,c,j;
    i = x*x;
    f = y*y;
    c = i + f;
    j = sqrt(c);
    cout <<"- El valor de \"Hipotenusa\" es : "<< j<<endl;
    system("pause");
    return j;
}

float hallarCa(float x, float y){
    float i,f,c,j;
    i = x*x;
    f = y*y;
    c = i - f;
    j = sqrt(c);
    cout <<"- El valor de \"Cateto Abyecente\" es : "<< j<<endl;
    system("pause");
    return j;
}
float hallarCo(float x, float y){
    float i,f,c,j;
    i = x*x;
    f = y*y;
    c = i - f;
    j = sqrt(c);
    cout <<"- El valor de \"Cateto Opuesto\" es : "<< j<<endl;
    system("pause");
    return j;
}
float hallarBeta(float x){
    float i;
    i = 90 - x;
    cout << "- El Angulo de Beta es : " << i <<endl;
    return i;
}
int main() {
    float ca, co, h;
    float cos;
    int x;
    float k,j;
    system("cls");
    cout << "-- MENU --" << endl << "1- Teorema de Pitagoras. \n2- Calcular sen, cos, tg, ctg, sec y cosec.\n3- Hallar hipotenusa/CA/CO.\n4- hallar angulo de Beta."<<endl;
    cin >> x;
    switch (x){
    case 1:
        system("cls");
        cout << "~ Teorema Pitagoras \n1- Hallar \"a\".\n2- Hallar \"b\".\n3- Hallar \"c\"" <<endl;
        cin>>x;
        switch (x){
            case 1:
                cout<<"- Ingrese el valor de \"c\" y \"b\": "<<endl;
                cin>>k>>j;
                pitagorasA(k,j);
                break;
            case 2:
                cout<<"- Ingrese el valor de \"c\" y \"a\": "<<endl;
                cin>>k>>j;
                pitagorasB(k,j);
                break;
            case 3:
                cout<<"- Ingrese el valor de \"a\" y \"b\": "<<endl;
                cin>>k>>j;
                pitagorasC(k,j);
                break;
            default:
            cout<<"_ El dato que ingreso no es valido."<<endl;
            system("pause");
            break;
        }
        break;
    case 2:
        system("cls");
        cout << "~ Calcular el seno, coseno,tangente de un triangulo rectangulo\n";
        system("pause");
        system("cls");
        cout << "- Ingrese el cateto Abyecente de Alpha" <<endl;
        cin >> ca;
        cout << "- Ingrese el cateto opuesto de Alpha"<<endl;
        cin >> co;
        cout << "- Ingrese la hipotenusa"<<endl;
        cin >> h;
        system("pause");
        sen(co,h);
        coseno(ca,h);
        tangente(co,ca);
        cotangente(co,ca);
        secante(ca,h);
        cosecante(co,h);  
        break;
    case 3:
        system("cls");
        int k,j; 
        cout<<"1- Hallar hipotenusa\n2- Hallar Cateto Abyecente\n3- Hallar Cateto Opuesto"<<endl;
        cin >>x;
        switch (x){
        case 1:
            cout<< "~ Ingrese el valor de Ca, Co:" <<endl;
            cin >>k>>j;
            hallarH(k,j);
            break;
        case 2:
            hallarCa(k,j);
            break;
        case 3:
            hallarCo(k,j);
            break;
        default:
            break;
        }
        break;
    case 4:
        system("cls");
        cout<< "- Ingrese el angulo de Alpha : " <<endl;
        cin>>k;
        hallarBeta(k);
        break;
    default:
        break;
    }
    return 0;
}