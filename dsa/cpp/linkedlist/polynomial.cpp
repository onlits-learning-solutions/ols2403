class node
{
    int coefficient;
    int power;
    node *next;
};

class polynomial    // ADT
{
    node *head;
public:
    void appendnode();
};

int main(int argc, char const *argv[])
{
    polynomial p;
    p.appendnode();
    return 0;
}
