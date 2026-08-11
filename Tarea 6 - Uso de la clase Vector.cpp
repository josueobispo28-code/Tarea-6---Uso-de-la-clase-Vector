#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Producto {
    string nombre;
    float precio;
};

int main() {
    vector<Producto> inventario;
    Producto p1;
    p1.nombre = "Teclado";
    p1.precio = 870.00;
    inventario.push_back(p1);
    Producto p2;
    p2.nombre = "Mouse";
    p2.precio = 255.00;
    inventario.push_back(p2);
    Producto p3;
    p3.nombre = "Monitor";
    p3.precio = 990.00;
    inventario.push_back(p3);
    Producto p4;
    p4.nombre = "Audifonos";
    p4.precio = 540.00;
    inventario.push_back(p4);
    
    cout << "Inventario inicial" << endl;
    for (Producto p : inventario) {
        cout << p.nombre << ": $" << p.precio << endl;
    }
    
    int indice;
    float nuevoPrecio;
    
    cout << "\nIngrese el indice del producto a modificar (0 a " << inventario.size() - 1 << "): ";
    cin >> indice;
    
    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoPrecio;
    inventario[indice].precio = nuevoPrecio;
    cout << "\nDespues de modificar el precio del producto en indice " << indice << endl;
    for (Producto p : inventario) {
        cout << p.nombre << ": $" << p.precio << endl;
    }


    float suma = 0.0f;
    for (Producto p : inventario) {
        suma += p.precio;
    }
    float promedio = suma / inventario.size();
    cout << "\nPrecio promedio del inventario: $" << promedio << endl;
    
    

    int posicion = 0;
    cout << "Ingrese la posicion:";
    cin >>posicion;
    cout << "\nProducto en la posicion " << posicion <<" - "<< inventario.at(posicion).nombre << " = $" << inventario.at(posicion).precio << endl;

    return 0;
}
