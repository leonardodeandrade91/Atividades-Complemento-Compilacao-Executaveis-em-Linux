#include <iostream>
#include <clocale>
#include <vector>
#include "Video.h"
#include "Gafanhoto.h"
#include "Visualizacao.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    vector<Video*> v;

    v.push_back(new Video("Aula 1 de POO"));
    v.push_back(new Video("Aula 12 de C++"));
    v.push_back(new Video("Aula 15 de HTML5"));

    cout << v[0]->toString() << endl;

    vector<Gafanhoto*> g;

    g.push_back(new Gafanhoto("Jubileu", 22, "M", "Jubi"));
    g.push_back(new Gafanhoto("Creuza", 12, "F", "Creuzita"));

    cout << g[0]->toString() << endl;

    vector<Visualizacao*> vis;

    vis.push_back(new Visualizacao(g[0], v[2]));

    cout << vis[0]->toString() << endl;

    vis.push_back(new Visualizacao(g[0], v[1]));

    cout << vis[1]->toString() << endl;

    vis[0]->avaliar();
    vis[1]->avaliar(85.0f);

    cout << vis[0]->toString() << endl;
    cout << vis[1]->toString() << endl;

    for(Video *des: v) {
        delete des;
    }

    for(Gafanhoto *des: g) {
        delete des;
    }

    for(Visualizacao *des: vis) {
        delete des;
    }

    return 0;
}
