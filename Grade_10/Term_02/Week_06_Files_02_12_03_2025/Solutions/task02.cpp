#include<iostream>
#include<fstream>
using namespace std;

struct Product
{
    string name;
    int amount;
    double price;
};

struct Query
{
    string name;
    int amount;
};

//function read from file
Product readFromFile(const string &filename)
{
    ifstream in(filename);
    int amountProducts;
    if(!in.is_open())
        cout<<"Error";

    in >> amountProducts;
    Product products[amountProducts];
    for(int i = 0; i < amountProducts; i++)
    {
        in >> products[i].name;
        in >> products[i].amount;
        in >> products[i].price;
    }
    in.close();

    return products;
}

function input of queries
Query inputOfQueries()
{
    int M;
    cin>>M;
    Query queries[M];
    for(int i = 0; i < M; i++)
    {
        cin>>queries[i].name>>queries[i].amount;
    }
    return queries;
}
function check inventory
function write to the file
int main()
{




    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < amountProducts; j++)
        {
            if(queries[i].name == products[j].name)
            {
                if(queries[i].amount <= products[j].amount)
                {
                    profit += products[j].price * queries[i].amount;
                    products[j].amount -= queries[i].amount;
                }
                else
                {
                    cout<<"Not enough "<<queries[i].name<<endl;
                }
            }
        }
    }

    cout<<profit<<endl;


    ofstream out("inventory.txt");
    if(!out.is_open())
        cout<<"Error";

    out << amountProducts << endl;
    for(int i = 0; i < amountProducts; i++)
    {
        out << products[i].name<<" ";
        out << products[i].amount<<" ";
        out << products[i].price<<endl;
    }
    out.close();


    return 0;
}
