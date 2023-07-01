#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string skeleton;
    string classs;
    string order;
    string animal;

    getline(cin, skeleton);
    getline(cin, classs);
    getline(cin, order);

    if (skeleton == "vertebrado") {
        if (classs == "ave") {
            if (order == "carnivoro") {
                animal = "aguia";
            } else {
                animal = "pomba";
            }
        } else {
            if (order == "onivoro") {
                animal = "homem";
            } else {
                animal = "vaca";
            }
        }
    } else {
        if (classs == "inseto") {
            if (order == "hematofago") {
                animal = "pulga";
            } else {
                animal = "lagarta";
            }
        } else {
            if (order == "hematofago") {
                animal = "sanguessuga";
            } else {
                animal = "minhoca";
            }
        }
    }

    cout << animal << endl;

    return 0;
}
