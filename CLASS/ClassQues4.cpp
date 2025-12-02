#include<iostream>
using namespace std;

class Product{
    private:
    string name;
    int productID;
    float price;
    int quantity;
    static int totalProducts;

    public:

    Product(string n, int proID, float pr, int qnt ,int totalP){
        name = n;
        productID = proID;
        price = pr;
        quantity = qnt;
        totalProducts = totalP;
        
    }

    inline void display(){
        cout << "Enter  Name: "<<name << endl;
        cout << "Enter Product ID: "<<productID << endl;
        cout << "Enter Price: "<<price << endl;
        cout << "Enter Quantity: "<<quantity << endl;
        cout << "Enter totalpro: "<<totalProducts << endl;

    }



    void updateQuantity(int q){
        quantity+=q;
        cout << name << "Deposite = " << q<< endl;
        cout << "Update bln " << quantity<< endl;
    }

    static void showTotalProduct(float tpro){
        totalProducts = tpro;
        cout << "Total Product  " << tpro  << endl;
        }

    void setPrice(float newPrice){
        price=newPrice;
    }

    friend void calculateBill(Product &p);
    

};

int Product::totalProducts = 0;

void calculateBill(Product &p){
    float bill = p.price * p.quantity;
    cout << "Total Bill " << p.name << " = " << bill << endl;
}

int main(){
    Product p1("Laptop", 412,500.0,5);
    cout << "Product detailes : " <<  endl;
    p1.display();
    p1.updateQuantity(3);
    calculateBill(p1);
    
    Product::showTotalProduct(5);

    return 0;
    
}

