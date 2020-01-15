#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream in("duomenys.txt");
ofstream out("rezultatai.txt");

void skaitom (vector<int> &V);
void rasom (vector<int> V, string text);
void rikiuojamDidejimo(vector<int> &V);
void rikiuojamMazejimo(vector<int> &V);
void paliekamUnikalius(vector<int> &V);

int main()
{
    vector <int> myVector;

    skaitom(myVector);
    rasom(myVector, "Mano vektorius:");
    rikiuojamDidejimo(myVector);
    rasom(myVector, "Surikiuotas didejimo tvarka vektorius:");
    rikiuojamMazejimo(myVector);
    rasom(myVector, "Surikiuotas mazejimo tvarka vektorius:");
    paliekamUnikalius(myVector);
    rasom(myVector, "lalala:");

    return 0;
}

void skaitom (vector<int> &V){
    int laikinas = 0;
    while(!in.eof()){
        in>>laikinas;
        V.push_back(laikinas);
    }
}

void rasom (vector<int> V, string text){
    out<<text<<endl;
    for(int i = 0; i < V.size(); i++){
        out<<V[i]<<" "<<endl;
    }

}

void rikiuojamDidejimo(vector<int> &V){
    // int didziausias, maziausias;
    // didziausias = *max_element(V.begin(), V.end());
    // maziausias = *min_element(V.begin(), V.end());

    // cout<<didziausias;
    // cout<<maziausias;

    sort(V.begin(), V.end());
}

void rikiuojamMazejimo(vector<int> &V){
    sort(V.begin(), V.end(), greater<int>());
}

void paliekamUnikalius(vector<int> &V){
    // sort(V.begin(), V.end());
    V.erase(unique(V.begin(), A.end()), V.end()));
}
