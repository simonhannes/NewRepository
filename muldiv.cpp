#include <iostream>
#include <stdlib.h>
using namespace std;

struct multdiv_entry{
    int mul;
    float div;
};

void free_tables(struct multdiv_entry**, int);
struct multdiv_entry** generate_tables(int);
void print_tables(struct multdiv_entry**, int);

int main( int argc, char** argv)
{
    int n;

    n = atoi(argv[1]);


    return 0;
}


struct multdiv_entry** generate_tables(int n)
{
    multdiv_entry **table = new multdiv_entry*[n];

    for (int i=0; i < n; i++)
    {
        table[i]= new multdiv_entry[n];
    }

    for (int j=0; j < n; j++)
    {
        for (int k=0; k < n; k++)
        {
            table[j][k].mul = j*k;
            table[j][k].div = j/k;
        }
    }
}

void print_tables(struct multdiv_entry** table, int n)
{
    for (int i=0; i < n; i++)
    {

        for (int j=0; j < n; j++)
        {
            cout << table[i][j].mul << " ";
        }
        cout << endl;

    }

    cout << endl;

    for (int k=0; k < n; k++)
    {
        for (int l=0; l < n; l++)
        {
            cout << table[k][l].div << " ";
        }
        cout << endl;

    }

    cout << endl;


}



void free_tables(struct multdiv_entry** table, int n)
{
    for (int i=0; i<n; i++)
    {
        delete [] table[i];
    }

    delete [] table;
}






