#include <iostream>
using namespace std;

#define SIZE 5

class matrix
{
  int a[SIZE][SIZE];
  int r, c;

public:
  void setsize(int, int);
  void getdata();
  void showdata();
  friend matrix transpose(matrix);
};

void matrix::setsize(int m, int n)
{
  r = m;
  c = n;
}

void matrix::getdata()
{
  cout << "Enter the elements of the matrix:" << endl;
  for (int i = 0; i < r; i++)
  {
    cout << endl;
    for (int j = 0; j < c; j++)
    {
      cin >> a[i][j];
    }
  }
}
void matrix::showdata()
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << a[i][j] << " ";
    }

    cout << endl;
  }
}
matrix transpose(matrix mat)
{
  matrix trans;
  trans.setsize(mat.r, mat.c);
  for (int i = 0; i < mat.r; i++)
  {
    for (int j = 0; j < mat.c; j++)
    {
      trans.a[j][i] = mat.a[i][j];
    }
  }
  return trans;
}

int main()
{
  matrix mat;

  int m, n;
  cout << "Enter the size of matrix:" << endl;
  cin >> m >> n;
  mat.setsize(m, n);
  mat.getdata();
  cout << "Transpose:" << endl;
  matrix trans;
  trans = transpose(mat);
  trans.showdata();
  return 0;
}
