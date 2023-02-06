#include <iostream>

void fullfilling(int n,int m,int** num)
{
    int elem;
    srand(time(NULL));
    for (int i = 0; i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            elem=rand()%71;
            num[i][j] = elem;
        }
    }
}

void print(int n,int m,int** num)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            std::cout << " " << num[i][j];
        std::cout << "\n";
    }
}
int sum_elements(int n,int m,int** num,int sum)
{
    for (int i = 0; i < n; i++)
    {
        sum = sum+num[i][n-i-1];
    }
    return sum;
}


int main() {
    int n,m;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    std::cout << "Enter the the number of columns: ";
    std::cin >> m;
    int** num = new int* [n];
    for (int k = 0; k < n; ++k)
    {
        num[k] = new int [m];
    }

    fullfilling(n,m,num);
    print(n,m,num);
    std::cout << std::endl;
    int sum = 0;
    if (n==m)
    {
        std::cout << "Sum = " << sum_elements(n,m,num,sum);
    }

    return 0;
}
