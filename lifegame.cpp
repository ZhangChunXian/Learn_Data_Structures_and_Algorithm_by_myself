#include <iostream>
using namespace std;

class Life
{
public:
    void init();
    void update();
    void print();
    int neighbor_count(int x, int y);
    int mat[8][8];
    int k; //迭代次数
};

void Life::init()
{
    for (int i = 0; i < 8; i++)
    { //初始化
        for (int j = 0; j < 8; j++)
        {
            mat[i][j] = 0;
        }
    }
    cin >> k;
    int x, y;
    do
    {
        cin >> x >> y;
        if (x != -1 && y != -1)
        {
            mat[x][y] = 1;
        }
    } while (x != -1 && y != -1);
}

void Life::update()
{
    int tmp_mat[8][8];
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            int num = neighbor_count(i, j);
            if (mat[i][j] == 0)
            { 
                if (num == 3)
                {
                    tmp_mat[i][j] = 1;
                }
                else
                {
                    tmp_mat[i][j] = 0;
                }
            }
            else
            { 
                if (num == 2 || num == 3)
                {
                    tmp_mat[i][j] = 1;
                }
                else
                {
                    tmp_mat[i][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            mat[i][j] = tmp_mat[i][j];
        }
    }
}

int Life::neighbor_count(int i, int j)
{
    int num = 0;
    for (int m = i - 1; m <= i + 1; m++)
    {
        for (int n = j - 1; n <= j + 1; n++)
        {
            if (mat[m][n] == 1)
                num++;
        }
    }
    if (mat[i][j] == 1)
        num--;
    return num;
}

void Life::print()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cout << mat[i][j];
            if (j == 6)
                cout << endl;
            else
                cout << " ";
        }
    }
}
int main()
{
    Life life;
    life.init();
    for (int i = 1; i <= life.k; i++)
    {
        life.update();
    }
    life.print();
    return 0;
}